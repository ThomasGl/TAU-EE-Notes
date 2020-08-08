#include <stdio.h>

int main()
{
  int n;
  printf("Give me a number: ");
  scanf("%d", &n);
  printf("n//2 = %d", n >> 1);
  return 0;
}
