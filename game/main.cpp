#include <iostream>

#include "Player.h"
#include "GameLoop.h"

int main(int argc, char *argv[])
{
  Player player;
  GameLoop::welcomePlayer(player);

  //? Game Loop
  bool isPlaying = true;
  while (isPlaying)
  {
    isPlaying = GameLoop::runGame();
  }

  //...
  return 0;
}