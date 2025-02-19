#include <iostream>
#include <string>

using std::cout;

enum Color
{
  Red,   //? 0
  Green, //? 1
  Blue   //? 2
};

enum class EColor
{
  Red,
  Green,
  Blue
};

int main(int argc, char *argv[])
{
  char c = 65;  //? A
  int x = 4.0;  //? 4
  long y = 4.0; //? 4

  float xf = 1.0f;
  double xd = 1.0;

  bool t = true; //? (int)t = 1

  EColor color = EColor::Blue;

  cout << (int)((int)color == 2) << std::endl;
  cout << (int)(EColor::Blue == color) << std::endl;
  cout << (int)((int)EColor::Red == 0) << std::endl;

  return 0;
}