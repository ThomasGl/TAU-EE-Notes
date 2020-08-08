#include <stdio.h>

#define SIZE 100

int palindrome(char *str, size_t len)
{
  int i;
  if (len <= 1)
    return 1;
  else
    return ((str[0] == str[len - 1]) && palindrome(str + 1, len - 2));
}

int main()
{
  size_t len;
  char str[SIZE] = {'\0'};
  printf("String: ");
  scanf("\n%[^\n]s", str);
  for (len = 0; str[len] != '\0'; len++)
    ;
  printf("Is palindrome: %d", palindrome(str, len));
  return 0;
}
