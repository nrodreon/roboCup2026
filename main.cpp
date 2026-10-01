/*
 *
 * This is the controller function to be run in Arduino
 * It takes all the other functions
 *
 * The way the code works is using a stateMachine
 * it has a exploringMaze, calibrating, and a exitingMaze, starting state
 * in exitingMaze it simply follows a pre-designed path out to entrance
 * popping instructions from queue or stack, the way its created is
 * to be determined:
 *  Current methods are either send each instruction to queue and make it
 *  reverse it, or build a maze, to be determined after finishing
 *  exploreMaze
 * 
 *
 */

/*
 * exploringMaze module
 *  The module is using a grid based search so it is using info from
 *  distance sensor, as well as driver estimates for the maze.
 *  
 *  It has a substate machine which has atJunction, atBlack, moving
 */

/* undeclared variable calibrate */

#include <iostream>
#include "main.hpp"

void main(){
  mainStates currentState = mainStates::idle;
  while (true){
    switch (currentState){
      case mainStates::idle:

        IO.println("Idling");
        bool buttonPressed = false;
        while (!Sensor::buttonPressed){
          if (Sensor::startPressed() == true){
            buttonPressed = true;
            currentState = mainStates::exploreMaze
          } else if (Sensor::calibratePressed() == true){
            buttonPressed = true;
            currentState = calibrating;
          }
        }
        break;

      case exploreMaze:
        int xCoord = 0;
        int yCoord = 0;
        dir direction = dir:north;
        int moveBack = 0;

        switch (searchState){
          case moving:
            moveBack = move::forward();
            if (isBlack()){
              searchState = atBlack;
            } else if (isVictim()){
              searchState = atVictim;
            } else if (isObstacle()){
              searchState = atObstacle;
            } else if (isJunction()){
              searchState = atJunction;
            }

            break;

          case atBlack:
            move::backward(moveBack);
            move::centre();
            maze::build(xCoord, yCoord, black) 
            
            break;

          case atObstacle:
            move::backward(moveBack)
            move::centre();
            maze::build(xCoord, yCoord, obstacle);
            break;
          
          case atVictim:
            

      case exitMaze:

        IO.println("Exiting the Maze");
        //exit code  

        break;

      case calibrating:
        
        IO.println("Calibrating sensors und shit");
        // calibration code
        currentSate = idle;

        break;
      
    }
  }
}
