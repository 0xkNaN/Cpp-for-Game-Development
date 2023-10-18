/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-17 21:47:40
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-18 12:47:54
 */

#include <iostream>
#include <string.h>

struct Player
{
  std::string m_name;
};

void welcomePlayer(Player &player)
{

  std::cout << "Welcome to Text Adventure!" << std::endl;
  std::cout << std::endl;

  std::cout << "What is your name?" << std::endl;
  std::getline(std::cin, player.m_name);
}

int main(int argc, char const *argv[])
{
  Player player;
  welcomePlayer(player);

  return 0;
}
