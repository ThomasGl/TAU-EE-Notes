#include <stdio.h>

#define MAXLINE 1000000

int getValleys(char s[], size_t n);

int main()
{
  size_t n;
  char s[MAXLINE];
  scanf("%d", &n);
  scanf("%s", s);
  printf("%d", getValleys(s, n + 1));
  return 0;
}
int getValleys(char s[], size_t n)
{
  int valleys = 0;
  int *level = malloc(n * sizeof(int));
  level[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    level[i] = level[i - 1] + (s[i - 1] == 'U' ? 1 : (s[i - 1] == 'D' ? -1 : 0));
    if (level[i] == -1 && level[i - 1] == 0)
    {
      valleys++;
    }
  }
  return valleys;
}
