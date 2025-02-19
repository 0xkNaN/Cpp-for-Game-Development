#include <iostream>

struct Params
{
  int x;
  int y;
  int sum;
};

void sumByPointer(int x, int y, int *sum)
{
  *sum = x + y;
}

void sumByReference(int x, int y, int &sum)
{
  sum = x + y;
}

void sumByStructAsReference(Params &params)
{
  params.sum = params.x + params.y;
}

int main(int argc, char *argv[])
{
  //? Passing by Pointer
  int sumByPointerValue = 0;
  sumByPointer(10, 5, &sumByPointerValue);
  std::cout << sumByPointerValue << std::endl;

  //? Passing by Reference
  int sumByReferenceValue = 0;
  sumByReference(10, 5, sumByReferenceValue);
  std::cout << sumByReferenceValue << std::endl;

  //? Passing Struct as Reference
  Params params;
  params.x = 10;
  params.y = 5;
  params.sum = 0;
  sumByStructAsReference(params);
  std::cout << params.sum << std::endl;

  return 0;
}
