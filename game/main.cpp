/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-17 21:47:40
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 22:57:44
 */

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
