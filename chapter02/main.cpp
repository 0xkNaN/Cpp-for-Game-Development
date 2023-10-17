/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-15 03:11:21
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-16 16:43:52
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
  srand(time(NULL));
  unsigned int guess = rand() % 100;
  unsigned int number;

  while (guess != number)
  {
    std::cout << "Guess the number between 0 and 99 :: " << std::endl;
    std::cin >> number;

    if (guess < number)
      std::cout << "Less" << std::endl;

    if (guess > number)
      std::cout << "Larger" << std::endl;
  }

  std::cout << "Well done!" << std::endl;

  return 0;
}