#include <stdio.h>

#define MAXLINE 1000

int palindrome_it(char s[]);
// int palindrome_rec(char arr[]);
int max(int a, int b);

int main()
{
  int arr[3] = {1, 2, 3};
  int len = (&arr)[1] - arr;
  printf("My Array\n");
  for (int i = 0; i < len; ++i)
    printf("%d\n", i);

  //

  printf("\nGimme two ints:\n");
  int a, b;
  scanf("%d%d", &a, &b);
  printf("Max of the two: %d\n", max(a, b));

  //

  printf("\nGimme a string: ");
  char s[MAXLINE];
  scanf("%s", &s);
  printf("Is palindrome: %d", palindrome_it(s));

  return 0;
}

int palindrome_it(char s[])
{
  int p = 1, cnt = 0;
  while (s[cnt] != '\0')
    cnt++;
  for (int i = 0; i < cnt; i++)
  {
    p = p && (s[i] == s[cnt - i - 1]);
  }
  return p;
}

int max(int a, int b)
{
  return a > b ? a : b;
}