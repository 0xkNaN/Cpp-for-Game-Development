/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-20 22:10:44
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 22:27:21
 */

#include <iostream>

namespace one
{
  void printName()
  {
    std::cout << "Print name from one::printName" << std::endl;
  }
}

namespace two
{
  void printName()
  {
    std::cout << "Print name from two::printName" << std::endl;
  }
}

void printName()
{
  std::cout << "Print name from printName" << std::endl;
}

int main()
{
  printName();
  one::printName();
  two::printName();

  return 0;
}