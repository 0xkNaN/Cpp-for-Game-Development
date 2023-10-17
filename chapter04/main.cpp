/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-17 15:57:15
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-17 21:39:37
 */

#include <iostream>

int main()
{
  char *str = "Hassen";
  str[0] = 'x';

  std::cout << str << std::endl;

  return 0;
}