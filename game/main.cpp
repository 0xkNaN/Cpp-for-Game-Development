/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-17 21:47:40
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 21:41:02
 */

#include <iostream>
#include <string.h>

double ticks = 0;

struct Player
{
  std::string m_name;
};

enum class PlayerOption
{
  Quit,
  None
};

bool welcomePlayer(Player &player)
{

  std::cout << "Welcome to Text Adventure!" << std::endl;
  std::cout << std::endl;

  std::cout << "What is your name?" << std::endl;
  std::getline(std::cin, player.m_name);

  return player.m_name.size() > 0;
}

void givePlayerOptions()
{
  std::cout
      << "What would you like to do? (Enter a corresponding number)"
      << std::endl
      << std::endl;
  std::cout
      << "1: Quit"
      << std::endl
      << std::endl;
}

void getPlayerInput(std::string &playerInput)
{
  std::cin >> playerInput;
}

PlayerOption evaluatePlayerInput(std::string &playerInput)
{
  PlayerOption chosenOption = PlayerOption::None;

  if (playerInput.compare("1") == 0)
  {
    chosenOption = PlayerOption::Quit;
    std::cout << "You have chosen to Quit!"
              << std::endl
              << std::endl;
  }
  else
  {
    std::cout << "You have chosen to Quit!"
              << std::endl
              << std::endl;
  }

  return chosenOption;
}

bool doLoop()
{
  ticks++;

  givePlayerOptions();
  std::string playerInput;
  getPlayerInput(playerInput);

  return evaluatePlayerInput(playerInput) != PlayerOption::Quit;
}

int main(int argc, char const *argv[])
{

  Player player;
  bool isValidName = welcomePlayer(player);
  if (!isValidName)
  {
    std::cout << "You name is not valid" << std::endl;
    return 1;
  }

  //? Game Loop
  while (doLoop())
  {
    std::cout << "Tick number: " << ticks << std::endl;
  }

  return 0;
}
