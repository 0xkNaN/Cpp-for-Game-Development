#pragma once

#include <iostream>
#include <string>

#include "Player.h"

enum class PlayerOption
{
  Quit,
  None
};

namespace GameLoop
{
  // double ticks = 0;

  bool welcomePlayer(Player &player);

  void givePlayerOptions();

  void getPlayerInput(std::string &playerInput);

  PlayerOption evaluatePlayerInput(std::string &playerInput);

  bool doLoop();

}