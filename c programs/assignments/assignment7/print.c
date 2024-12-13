// Assignment-7: Iterative Control Statements

/* // 1. Write a program to print MySirG 5 times on the screen
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    printf("MySirG\n");
  }
  return 0;
} */

/* // 2. Write a program to print the first 10 natural numbers.
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i);
  }
  return 0;
} */

/* // 3. Write a program to print the first 10 natural numbers in reverse order
#include <stdio.h>
int main()
{
  for (int i = 10; i >= 1; i--)
  {
    printf("%d\n", i);
  }
  return 0;
} */

/* // 4. Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 19; i += 2)
  {
    printf("%d\n", i);
  }
  return 0;
} */

/* // 5. Write a program to print the first 10 odd natural numbers in reverse order.

! 3 approches
! 1. i =19 ; i>=1 ; i =i-2; printf("%d",i);
! 2. i =10 ; i>=1 ; i--; printf("%d",2*i-1);
 20-(2*i-1) => 20-2*i+1 => 21-2*i
! 3. i =1 ; i<=1 ; i++; printf("%d",21-2*i);

#include <stdio.h>
int main()
{
  for (int i = 19; i >= 1; i -= 2)
  {
    printf("%d\n", i);
  }
  return 0;
} */

/* // 6. Write a program to print the first 10 even natural numbers
#include <stdio.h>
int main()
{
  for (int i = 2; i <= 20; i += 2)
  {
    printf("%d\n", i);
  }
  return 0;
} */

/* // 7. Write a program to print the first 10 even natural numbers in reverse order
#include <stdio.h>
int main()
{
  for (int i = 20; i >= 2; i -= 2)
  {
    printf("%d\n", i);
  }
  return 0;
} */

/* // 8. Write a program to print squares of the first 10 natural numbers
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i * i);
  }
  return 0;
} */

/* // 9. Write a program to print cubes of the first 10 natural numbers
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i * i * i);
  }
  return 0;
} */

/*
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    printf(" 5 * %d = %d\n", i, 5 * i);
  }
  return 0;
} */