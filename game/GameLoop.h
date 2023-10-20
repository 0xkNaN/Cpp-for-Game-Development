/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-20 22:37:00
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 22:57:57
 */

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