#include "GameLoop.h"

namespace GameLoop
{
  void welcomePlayer(Player &player)
  {
    std::cout << "Welcome to Text Adventure! \n\n";
    std::cout << "What is your name?\n";
    std::cin >> player.name;

    std::cout << "Hello " << player.name << std::endl;
  }

  PlayerOptions handlePlayerOptions()
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

  bool runGame()
  {
    PlayerOptions playerOption = handlePlayerOptions();
    return !(playerOption == PlayerOptions::QUIT);
  }
}
