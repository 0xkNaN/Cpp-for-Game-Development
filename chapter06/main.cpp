/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-20 20:32:31
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 22:13:12
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