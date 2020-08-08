#include <stdio.h>

int main()
{
  int c, cnt = 0;
  printf("Enter a string: ");
  while ((c = getchar()) != EOF /* && c != '\n'*/)
  {
    if (cnt < 0)
      break;
    cnt += (c == '(' ? 1 : (c == ')' ? -1 : 0));
  }
  printf("It is %s", cnt == 0 ? "balanced" : "unbalanced");
  return 0;
}