#include <array>

template <typename T, std::int N>;
using arr = std::array<T, N>;
class Sensor {
  bool startPressed();
  bool calibratePressed();
  int getDistance();
  arr<int, 3> getRGB();
  colour getColour(); // uses getRGB and sets parameters

}


enum class colour{
  black,
  silver,
  blue,
  other
}
