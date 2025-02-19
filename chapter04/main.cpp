#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
  //? C++ Arrays

  int arr[3] = {0, 1, 2};

  // std::cout << arr << std::endl;     //? mem adr
  // std::cout << &arr << std::endl;    //? same as arr
  // std::cout << &arr[0] << std::endl; //? same as arr

  // std::cout << arr + 1 << std::endl; //? get next mem adr
  // std::cout << &arr[1] << std::endl; //? same as arr + 1

  //? References
  int a = 10;
  int &b = a;

  // std::cout << a << std::endl;
  // std::cout << b << std::endl;

  a = 20;
  // std::cout << a << std::endl;
  // std::cout << b << std::endl;

  b = 30;
  // std::cout << a << std::endl;
  // std::cout << b << std::endl;

  //? Pointers
  int x = 5;
  int *pX = &x;

  // std::cout << pX << std::endl;
  // std::cout << *pX << std::endl;
  // std::cout << *pX + 1 << std::endl;

  //? Void Pointer
  void *vptr = &x;

  std::cout << *(pX) << std::endl;
  std::cout << *((int *)vptr) << std::endl;

  //? Pointers and Arrays
  int arri[3] = {0, 1, 2};

  // std::cout << *arri << std::endl;       //? same as arri[0]
  // std::cout << *(arri + 1) << std::endl; //? same as arri[1]
  // std::cout << *(arri + 2) << std::endl; //? same as arri[2]
  // std::cout << *(arri + 3) << std::endl; //? out of range

  //? C style string
  const char *cstr = "abc"; //? string literal
  char str[4];

  // std::cout << cstr << std::endl;

  //? C style string functions
  // std::cout << strlen(cstr) << std::endl;
  // std::cout << strcmp(cstr, "abc") << std::endl;

  // strcpy(str, cstr);
  // std::cout << str << std::endl;

  // strcat(str, "d");
  // std::cout << str << std::endl;

  return 0;
}