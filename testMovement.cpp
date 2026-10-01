#include "movement.hpp"
#include <print>
#include "sensor.hpp"

exitCode move::forward(){
  std::println("Move forward 1 tile while checking conditions");
  // the code should the motors written to run, then constantly check
  // conditions while checking estimated distance till hits tile
  // if it interrupts before the movement exits with code
  return success;
}

exitCode move::backward(){
  std::println("Move backward 1 tile");
}

exitCode move::left(){
  std::println("Move left 1 tile");
}

exitCode move::right(){
  std::println("Move right 1 tile");
}


