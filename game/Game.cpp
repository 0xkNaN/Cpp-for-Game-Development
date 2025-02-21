#include "Game.h"

#include "PlayerOptions.h"

void Game::welcomePlayer()
{
  std::cout << "Welcome to Text Adventure! \n\n";
  std::cout << "What is your name?\n";

  std::string name;
  std::cin >> name;

  m_player->setName(name);
  std::cout << "Hello " << m_player->getName() << std::endl;
}

PlayerOptions Game::handlePlayerOptions()
{
  PlayerOptions option = PlayerOptions::NONE;

  //? Get Player Options
  std::string playerInput;
  std::cout << "What whould you like to do?\n";
  std::cout << "0: Quit the game\n";
  std::cin >> playerInput;

  //? Handle Palyer Option
  if (playerInput.compare("0") == 0)
  {
    std::cout << "You have chosen to quit\n\n\n";
    option = PlayerOptions::QUIT;
  }
  else
  {
    std::cout << "Unkonwn option, try again\n\n\n";
  }

  //...
  return option;
}

void Game::runGame()
{

  welcomePlayer();

  bool shouldEndGame = false;

  while (!shouldEndGame)
  {
    PlayerOptions playerOption = handlePlayerOptions();
    shouldEndGame = playerOption == PlayerOptions::QUIT;
  }
}
