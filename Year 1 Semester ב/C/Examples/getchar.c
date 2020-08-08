#include <stdio.h>

int main()
{
  int c;
  while ((c = getchar()) != EOF /*&& c != '\n'*/)
  {
    putchar(c);
  }
  return 0;
}