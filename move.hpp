int class move {
  forward();
  backward();
  left();
  right();
  centre()
}


enum class exitCode {
  success,
  failEmptySquare,
  failObstacle,
  successJunction

}

enum class dir {
  north,
  east,
  south,
  west
}
