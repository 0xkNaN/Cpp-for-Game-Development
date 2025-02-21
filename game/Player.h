#pragma once

#include <iostream>

class Player
{
public:
  Player() {}

  std::string getName() { return name; }
  void setName(std::string n) { name = n; }

private:
  std::string name = "PLAYER_NAME";
};
