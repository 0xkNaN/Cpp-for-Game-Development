/**
 * @Author: Hassen Rmili
 * @Date:   2023-10-18 11:00:15
 * @Last Modified by:   Hassen Rmili
 * @Last Modified time: 2023-10-18 12:41:47
 */

#include <iostream>

struct SumParams
{
  int x;
  int y;
  int sum;
};

void sumByPointer(int x, int y, int *out)
{
  *out = x + y;
}

void sumByReference(int x, int y, int &out)
{
  out = x + y;
}

void sumByStruct(SumParams &params)
{

  params.sum = params.x + params.y;
}

int main()
{
  int sum = 0;
  SumParams params = {5, 5, 0};

  std::cout << "sumByPointer" << std::endl;
  sumByPointer(1, 1, &sum);
  std::cout << sum << std::endl;

  std::cout << "sumByReference" << std::endl;
  sumByReference(3, 3, sum);
  std::cout << sum << std::endl;

  std::cout << "sumByStruct" << std::endl;
  sumByStruct(params);
  std::cout << params.sum << std::endl;

  return 0;
}