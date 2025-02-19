#pragma once

#include "Player.h"
#include "PlayerOptions.h"

namespace GameLoop
{
  void welcomePlayer(Player &player);

  PlayerOptions handlePlayerOptions();

  bool runGame();
}