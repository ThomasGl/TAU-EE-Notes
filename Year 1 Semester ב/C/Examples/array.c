#include <stdio.h>

int length(int a[])
{
  return (int)sizeof(a) / sizeof(a[0]);
}

int main()
{
  int a[3] = {5, 0, 3};
  printf("Size a  = %d\n", (int)sizeof(a) / sizeof(a[0]));
  printf("Size a /= %d\n", length(a));
  return 0;
}
