#include <iostream>
#include <string.h>

#include "GameLoop.h"
#include "Player.h"

int main(int argc, char const *argv[])
{

  Player player;
  bool isValidName = GameLoop::welcomePlayer(player);
  if (!isValidName)
  {
    std::cout << "You name is not valid" << std::endl;
    return 1;
  }

  //? Game Loop
  while (GameLoop::doLoop())
  {
    // std::cout << "Tick number: " << GameLoop::ticks << std::endl;
  }

  return 0;
}
