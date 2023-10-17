/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-16 17:02:15
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-17 15:56:30
 */

#include <iostream>

int main()
{
  unsigned int x = 5; // .... 0101
  unsigned int y = 1; // .... 0001

  std::cout << (int)(x & y) << std::endl;  // 0001 = 1
  std::cout << (int)(x | y) << std::endl;  // 0101 = 5
  std::cout << (int)(x ^ y) << std::endl;  // 0100 = 4
  std::cout << (int)(x << y) << std::endl; // 1010 = 10
  std::cout << (int)(x >> y) << std::endl; // 0010 = 2

  std::cout << (int)(~y) << std::endl;
  // 11111111 11111111 11111111 11111110 = -2


  return 0;
}