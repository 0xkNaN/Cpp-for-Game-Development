/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-15 03:11:21
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-16 01:17:55
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
  //? Seeding
  srand(time(NULL));
  unsigned int guess = rand() % 100;

  unsigned int number;

  std::cout << "Guess the number between 0 and 99" << std::endl;
  std::cin >> number;

  std::cout << "You guessed: "
            << number
            << ", The number was "
            << guess
            << std::endl;

  return 0;
}