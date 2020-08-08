#include <stdio.h>

int power(int n, int p);

int main()
{
  int n, p;
  printf("Give me a basis: ");
  scanf(" %d", &n);
  printf("Give me an exponent: ");
  scanf(" %d", &p);
  printf("n ** p = %d", power(n, p));

  //

  printf("\n\nRepeat array");
  int arr[3] = {1, 2, 3};
  int len = (&arr)[1] - arr;
  for (int i = 0; i < len; ++i)
    printf("\n%d", i);
  return 0;
}

int power(int n, int p)
{
  int r;
  for (r = 1; p > 0; --p)
    r = r * n;
  return r;
}