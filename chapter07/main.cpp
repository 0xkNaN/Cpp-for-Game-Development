#include <iostream>

namespace nsone
{
  void printName()
  {
    std::cout << "Print name from nsone::printName" << std::endl;
  }
}

namespace nstwo
{
  void printName()
  {
    std::cout << "Print name from nstwo::printName" << std::endl;
  }
}

void printName()
{
  std::cout << "Print name from printName" << std::endl;
}

int main()
{
  printName();
  nsone::printName();
  nstwo::printName();

  return 0;
}