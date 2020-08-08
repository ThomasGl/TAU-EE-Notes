#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{
  int arr[ARRAY_SIZE];
  int repeat = 0;
  printf("Insert Array\n");
  int i;
  for (i = 0; i < ARRAY_SIZE; i++)
  {
    scanf("%d", &arr[i]);
    for (int j = 0; j < i; j++)
    {
      if (arr[j] == arr[i])
        repeat = 1;
      break;
    }
    if (repeat == 1)
      break;
  }
  printf("\n%s", repeat ? "Repeat" : "No Repeat");
  return 0;
}