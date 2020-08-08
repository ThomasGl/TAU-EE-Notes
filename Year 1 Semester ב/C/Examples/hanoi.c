#include <stdio.h>

void hanoi(int diskNum, char A, char B, char C, int *p)
{
  if (diskNum == 1)
  {
    printf("Move disk from %c to %c\n", A, C);
    (*p)++;
    return;
  }
  hanoi(diskNum - 1, A, C, B, p);
  printf("Move disk from %c to %c\n", A, C);
  (*p)++;
  hanoi(diskNum - 1, B, A, C, p);
}

int main()
{
  int n, cnt = 0;
  printf("n = ");
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C', &cnt);
  printf("\nTotal Moves: %d", cnt);
  return 0;
}