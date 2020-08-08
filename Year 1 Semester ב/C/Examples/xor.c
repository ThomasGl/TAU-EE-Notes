#include <stdio.h>

int main()
{
  printf("| x | y || XOR(x,y) |");
  printf("\n|---|---||----------|");
  for (int x = 0; x < 2; x++)
  {
    for (int y = 0; y < 2; y++)
    {
      printf("\n| %d | %d ||    %d     |", x, y, x ^ y);
    }
  }
  return 0;
}
