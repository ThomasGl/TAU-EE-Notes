#include <stdio.h>
#include <string.h>

#define MAXLINE 10

char hex_digit(int n)
{
  n = n % 16;
  return n > 9 ? ('A' + n - 10) : '0' + n;
}

char *hexa(long n)
{
  int d, i = 0;
  char str[MAXLINE + 1];
  do
  {
    d = n % 16, n = n / 16;
    str[i] = hex_digit(d);
    i++;
  } while (n != 0);
  str[i] = '\0';
  return strrev(str);
}

long power(int x, int p)
{
  return p == 0 ? 1 : x * pow(x, p - 1);
}

int main()
{
  long n;
  for (int i = 0; i < 10; i++)
    printf("2^%d = %s\n", i, hexa(power(2, i)));
  printf("Gimme a number: ");
  scanf("%d", &n);
  printf("In Hex: %s", hexa(n));
  return 0;
}
