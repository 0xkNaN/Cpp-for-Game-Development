#include <iostream>
#include <bitset>
#include <sstream>

int main()
{
  unsigned int x = 7; // .... 0111
  unsigned int y = 1; // .... 0001

  // std::cout << x << std::endl;
  // std::cout << std::dec << x << std::endl;
  // std::cout << std::hex << x << std::endl;

  std::cout << (int)(x & y) << std::endl;  // 0001 = 1
  std::cout << (int)(x | y) << std::endl;  // 0111 = 7
  std::cout << (int)(x ^ y) << std::endl;  // 0110 = 6
  std::cout << (int)(x << y) << std::endl; // 1010 = 14
  std::cout << (int)(x >> y) << std::endl; // 0010 = 3

  std::cout << (int)(~y) << std::endl; // -2

  return 0;
}