/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-17 15:57:15
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-20 20:30:41
 */

#include <iostream>
#include <cstring>

int main()
{
  int x = 10;
  int *pX = &x;

  char arr[6] = {'S', 'T', 'R', 'I', 'N', 'G'};
  std::cout << arr << std::endl;
  std::cout << *arr << std::endl;
  std::cout << &arr << std::endl;

  // const char(*str)[7] = &("STRING");
  const char *str1 = "A";
  const char *str2 = "B";
  char str[5] = {};

  std::cout << strlen(str1) << std::endl;
  std::cout << strcmp(str1, str2) << std::endl; //? ascii(str1) - ascii(str2)
  std::cout << strcpy(str, str1) << std::endl;  //? should contains enough space
  std::cout << strcat(str, str2) << std::endl;
  std::cout << strcat(str, (const char*)"C") << std::endl;
  
  std::cout << str << std::endl;
  std::cout << strlen(str) << std::endl;
  
  return 0;
}