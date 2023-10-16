/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-15 02:55:03
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-16 00:10:16
 */

#include <iostream>
#include <string>

enum class Blues : int
{
  One = 95,
  Two = 77,
  Three = 3
};

int main()
{

  Blues b = Blues::Two;
  char x = 'M';

  // std::cout << (char)b << std::endl;
  // std::cout << (int)x << std::endl;
  // std::cout << int((int)x == (char)b) << std::endl;

  float xf = 100.01f;
  int xi = xf;

  std::cout << xf << std::endl;
  std::cout << xi << std::endl;

  return 0;
}