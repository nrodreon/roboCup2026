


//Ensures the file is read once only
#pragma once;

// Libraries
// this is done with #include <'content wanted'>
#include <array>
#include <vector>

namespace headerDefinition{
  using map = std::vector<junction>;

  enum class Direction {
    North,
    East,
    South,
    West
  };

  class Junction{

    Direction dir;
    int visitsLeft;
    int distance;
    std::array<bool, 4> wallPresent all_false{}; // first is left of robot, second is in front of robot, and so on
    
  }


}


