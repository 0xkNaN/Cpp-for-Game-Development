#include <iostream>

int main()
{

  for (unsigned int i = 0; i < 10; i++)
  {
    std::cout << i << std::endl;
    if (i == 5)
      goto finish;
  }

  finish:
    std::cout << "LAST" << std::endl;

  return 0;
}