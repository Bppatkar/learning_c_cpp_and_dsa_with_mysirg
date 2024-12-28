#include <stdio.h>
void printOddNumbers(int n)
{
  for (int i = 1; i < n; i += 2)
  {
    printf("%d\n", i);
  }
}
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printOddNumbers(num);
  return 0;
}