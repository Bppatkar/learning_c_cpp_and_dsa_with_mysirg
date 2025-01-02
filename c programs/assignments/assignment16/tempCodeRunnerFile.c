#include <stdio.h>
void print_square_n_natural_number(int n)
{
  if (n == 0)
    return;

  print_square_n_natural_number(n - 1);
  printf("%d ", n * n);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_square_n_natural_number(n);
  return 0;
}