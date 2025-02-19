#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
  std::string str;

  std::cout << "Type something :: ";
  std::cin >> str;
  std::cout << "You typed :: " << str << std::endl;

  return 0;
}