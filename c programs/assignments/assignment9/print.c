// Assignment-9: Use any loop

/* // 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
      sum += i;
  printf("Sum is %d\n", sum);
  return 0;
} */

/* // 2. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  // for (i = 1; i <= n; i++)
  //   sum = sum + 2 * i;
  for (i = 2; i <= 2 * n; i += 2)
    sum = sum + i;
  printf("Sum is %d\n", sum);
  return 0;
} */

/* // 3. Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  // for (i = 0; i < n; i++)
  //   sum = sum + 2 * i + 1;
  // ----------------
  // for (i = 1; i <= n; i++)
  //   sum = sum + 2 * i - 1;
  // -------------
  for (i = 1; i <= 2 * n; i += 2)
    sum = sum + i;
  printf("Sum is %d\n", sum);
  return 0;
} */

/* // 4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    // printf("%d\n", sum = sum + (i * i));
    sum = sum + (i * i);
  }
  printf("Sum is %d\n", sum);
  return 0;
} */

/* // 5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    // printf("%d\n", sum = sum + (i * i));
    sum = sum + (i * i * i);
  }
  printf("Sum is %d\n", sum);
  return 0;
} */

// 6. Write a program to calculate factorial of a number
//! approach 1
/* #include <stdio.h>
int main()
{
  int i, n, sum;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1, sum = 1; i <= n; i++)
    sum *= i;
  printf("Factorial is %d\n", sum);
  return 0;
} */
//! approach 2
/* #include <stdio.h>
int main()
{
  int n, sum = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n)
  {
    sum = sum * n;
    n--;
  }
  printf("Factorial is %d\n", sum);
  return 0;
} */

/* // 7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
  int n, sum;
  printf("Enter a number: ");
  scanf("%d", &n);
  //! approach 1 while(n){n/=10;sum++;}
  //! approach 2
  for (sum = 0; n; n /= 10,sum++);
  printf(" count is %d", sum);
  return 0;
} */

//! MIMP question
/* // 8. Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
  int num, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num <= 1)
  {
    printf("Not Prime");
    return 0;
  }
  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      printf("Not Prime");
      return 0;
    }
  }

  printf("Prime");
  return 0;
}
 */

// 9. Write a program to calculate LCM of two numbers
//! approach 1
/* #include <stdio.h>
int main()
{
  int a, b, l, flag, i;
  printf("Enter two Number: ");
  scanf("%d %d", &a, &b);
  for (i = 2, flag = 0, l = 1; a > 1 || b > 1;)
  {
    if (a % i == 0)
    {
      a = a / i;
      flag = 1;
    }
    if (b % i == 0)
    {
      b = b / i;
      flag = 1;
    }
    if (flag == 1)
    {
      l = l * i;
      flag = 0;
    }
    else
      i++;
  }
  printf("LCM is %d", l);
  return 0;
} */

//! approach 2
/* #include <stdio.h>
int main()
{
  int a, b, l;
  printf("Enter Two Numbers: ");
  scanf("%d %d", &a, &b);
  for (l = a > b ? a : b; l < a * b; l++)
  {
    if (l % a == 0 && l % b == 0)
    {
      printf("lcm is %d", l);
      break;
    }
  }
  return 0;
}
 */

/* // 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
  int x, y;
  printf("Enter a Number: ");
  scanf("%d", &x);
  for (y = 0; x != 0;)
  {
    y = y * 10 + x % 10;
    x = x / 10;
  }
  printf("Reversed Number is %d", y);
  return 0;
} */