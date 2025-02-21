#pragma once

#include <iostream>

#include "Player.h"
#include "PlayerOptions.h"

class Game
{
private:
  Player *m_player;

  void welcomePlayer();
  PlayerOptions handlePlayerOptions();

public:
  Game() {
    m_player = new Player();
  }

    void runGame();
};