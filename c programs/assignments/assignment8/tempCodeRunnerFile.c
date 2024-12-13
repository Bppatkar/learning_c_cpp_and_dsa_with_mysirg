#include <stdio.h>
int main()
{
  int n, i;
  printf("Enter Number: ");
  scanf("%d", &n);
  for (i = 1; n >= i; i++)
  {
    printf("%d ", n - i);
  }
  return 0;
}