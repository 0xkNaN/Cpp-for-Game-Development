/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-15 02:55:03
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2024-02-11 19:35:14
 */

#include <iostream>
#include <string>

int main()
{
  std::string name{};
  std::cout << "What is your name?" << std::endl;
  std::cin >> name;

  char *age; //! Verify this later
  std::cout << "What is your number?" << std::endl;
  std::cin >> age;

  std::cout << "You said your name is " << name << std::endl;
  std::cout << "and your number is " << age << std::endl;

  return 0;
}