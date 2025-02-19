#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{
  srand(time(NULL));

  unsigned int g = std::rand() % 100;
  unsigned int p;

  std::cout << "Guess the number :: ";
  std::cin >> p;

  if (g == p)
    std::cout << "Correct!" << std::endl;
  else
    std::cout << "Wrong! it is " << g << std::endl;

  return 0;
}