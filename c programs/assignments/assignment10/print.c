// Assignment-10: Level up with loops

/* // 1. Write a program to find the Nth term of the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, c, num, count;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (a = -1, b = 1, count = 0; count <= num; count++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  printf("%d", c);
  return 0;
}
 */

/* // 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
  int a, b, c, num, count;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (a = -1, b = 1, count = 0; count <= num; count++)
  {
    c = a + b;
    printf("%d, ", c);
    a = b;
    b = c;
  }
  return 0;
} */

/* // 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
  int a = -1, b = 1, c, num, count = 0;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (a, b, count;; count++)
  {
    c = a + b;
    if (c == num)
    {
      printf("%d is %d  term in the series", num, count);
      break;
    }
    if (c > num)
    {
      printf("%d is not term in the series", num);
      break;
    }
    a = b;
    b = c;
  }
  return 0;
} */

/* // 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
  int a, b, H;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  for (H = a < b ? a : b; H >= 1; H--)
  {
    if (a % H == 0 && b % H == 0)
      break;
  }
  printf("HCF is %d\n ", H);
  return 0;
}
 */

/* // 5. Write a program to check whether two given numbers are co-prime numbers or not
//? if HCF of a and b is 1, then a&b are co-prime numbers
#include <stdio.h>
int main()
{
  int a, b, H;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  for (H = a < b ? a : b; H >= 1; H--)
  {
    if (a % H == 0 && b % H == 0)
    {
      break;
    }
  }
  if (H == 1)
    printf("%d and %d is co-prime", a, b);
  else
    printf("%d and %d is not a co-prime", a, b);
  return 0;
} */

// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
  int p, i;
  for (i = 2; i < p - 1; i++)
  {
    }
}

// 7. Write a program to print all Prime numbers between two given numbers

// 8. Write a program to find next Prime number of a given number

// 9. Write a program to check whether a given number is an Armstrong number or not

// 10. Write a program to print all Armstrong numbers under 1000