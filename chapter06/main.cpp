/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-20 20:40:15
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 21:09:10
 */

#include <iostream>

int main()
{

  for (unsigned int i = 0; i < 10; i++)
  {
    std::cout << i << std::endl;
    if (i == 5)
      goto last;
  }

  last:
    std::cout << "LAST" << std::endl;

  return 0;
}