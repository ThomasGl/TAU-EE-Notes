#include <stdio.h>
#define SIZE 16

typedef struct strings
{
  char *str;
  size_t len;
} string;

void readline(string *str_ptr)
{
  char c;
  size_t len = 0;
  for (c = getchar(); c != '\n'; c = getchar())
    str_ptr->str[len++] = c;
  str_ptr->len = len;
}

int main()
{
  string s;
  printf("Gimme a string: ");
  readline(&s);
  printf("Size = %d\n", s.len);
  for (int i = 0; i < (s.len); i++)
    printf("%c", s.str[i]);

  return 0;
}
