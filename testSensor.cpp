#include "sensor.hpp"
#include <iostream>
#include <string>


bool sensor::startPressed(){
  std::string input;
  std::cout << "Please type start to start" << std::endl;
  std::cin >> input;
  if (input == "start"){
    return true;
  } else {
    return false;
  }
}

bool sensor::calibratePressed(){
  std::string input;
  std::cout << "Please type start to start" << std::endl;
  std::cin >> input;
  if (input == "calibrate"){
    return true;
  } else {
    return false;
  }
}


