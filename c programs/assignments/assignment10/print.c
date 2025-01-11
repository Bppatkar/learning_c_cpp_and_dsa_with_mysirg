// Assignment-10: Level up with loops

/* //? 91 MIMP. Write a program to find the Nth term of the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, i, c, num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (i = 0, a = -1, b = 1; i <= num; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  printf("Fibonacci series is: %d", c);
  return 0;
} */

/* //? 92 IMP. Write a program to print the first N terms of the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, i, c, num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (i = 0, a = -1, b = 1; i <= num; i++)
  {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
  return 0;
} */

/* //? 93 IMP. Write a program to check whether a given number is in the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, i, c, num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (i = 0, a = -1, b = 1; i <= num; i++)
  {
    c = a + b;
    if (c == num)
    {
      printf("Present\n");
      break;
    }
    else
    {
      printf("Not Present\n");
      break;
    }
    a = b;
    b = c;
  }
  return 0;
} */

/* //? 94 IMP. Write a program to calculate the HCF of two numbers.
#include <stdio.h>
int main()
{
  int a, b, i;
  printf("Enter Two Numbers: ");
  scanf("%d %d", &a, &b);
  for (i = a > b ? a : b; i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
      break;
  }
  printf("HCF is %d\n ", i);
  return 0;
} */

/* //? 95 IMP. Write a program to check whether two given numbers are co-prime.
//? Hint: If the HCF is 1, the numbers are co-prime.
#include <stdio.h>
int main()
{
  int a, b, i;
  printf("Enter Two Numbers: ");
  scanf("%d %d", &a, &b);
  for (i = a > b ? a : b; i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
      break;
  }
  if (i == 1)
    printf("co-prime");
  else  printf("Not co-prime");
  return 0;
} */

/* //? 96 IMP. Write a program to print all prime numbers under 100.
#include <stdio.h>
int main()
{
  int a, i;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  for (a = 2; a <= 100; a++)
  {
    int isPrime = 1;
    for (i = 2; i < a / 2; i++)
    {
      if (a % i == 0)
      {
        isPrime = 0;
        // printf("Not Prime")
        break;
      }
    }
    if (isPrime)
      printf("%d\n", a);
    // printf("Prime")
  }
  return 0;
} */
// __________________________________________
// approach 2
/* #include <stdio.h>
int main()
{
  int l = 2, u = 100, x, i;
  for (x = l; x <= u; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
      {
        break;
      }
    }
    if (i == x)
      printf("%d ", x);
  }
  return 0;
 }*/
// _______________________________________
// new approach
/* #include <stdio.h>
int main()
{
  int a, i, l = 2, u = 100;
  for (a = l; a <= u; a++)
  {
    for (i = 2; i <= a / 2; i++)
    {
      if (a % i == 0)
        break;
    }
    if (i > a / 2)
      printf("%d\n", a);
  }
  return 0;
} */
// _______________________________________
// new approach
/* int l = 2, u = 100, a, i;
  for (a = l; a <= u; x++)
  {
    for (i = 2; i*i <= a; i++)
    {
      if (a % i == 0)
      {
        break;
      }
    }
    if (i*i >a)
      printf("%d\n ", x);
  } */

/* //? 97 IMP. Write a program to print all prime numbers between two given numbers.
#include <stdio.h>
int main()
{
  int a, i, b, c, start, end;
  printf("Enter two numbers: ");
  scanf("%d %d", &b, &c);

  start = b < c ? b : c;
  end = b > c ? b : c;

  for (a = start; a <= end; a++)
  {
    if (a < 2)
    {
      continue;
    }
    int is_Prime = 1;
    for (i = 2; i <= a / 2; i++)
    {
      if (a % i == 0)
      {
        is_Prime = 0;
        break;
      }
    }
    if (is_Prime)
      printf("%d\n", a);
  }
  return 0;
} */
// _______________________________________________
/* //approach 2
#include <stdio.h>
int main() {
    int a, i, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &b, &c);

    // Ensure b is smaller, c is larger
    int start = b < c ? b : c, end = b > c ? b : c;

    for (a = start; a <= end; a++) {
        if (a < 2) continue; // Skip non-prime numbers
        for (i = 2; i <= a / 2 && a % i != 0; i++);
        if (i > a / 2) printf("%d\n", a); // Print if prime
    }
    return 0;
} */
// _______________________________________________
// approach 3
/* #include <stdio.h>
int main()
{
  int a, b, x, i;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  for (x = a; x <= b; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
      {
        break;
      }
    }
    if (i == x)
      printf("%d ", x);
  }
  return 0;
} */

/* //? 98 IMP. Write a program to find the next prime number of a given number.
#include <stdio.h>
int main()
{
  int a, i, num;
  printf("Enter a number: ");
  scanf("%d", &a);
  for (num = a + 1;; num++)
  {
    int is_prime = 1;
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        is_prime = 0;
        break;
      }
    }
    if (is_prime)
    {
      printf("Next prime number is %d\n", num);
      break;
    }
  }
  return 0;
} */
// ____________________________________________
/* // approach 2
#include <stdio.h>
int main()
{
  int a, x, i;
  printf("Enter a number: ");
  scanf("%d", &a);
  for (x = a + 1;; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
      {
        break;
      }
    }
    if (i == x) // means it is prime
    {
      printf("next prime number is %d ", x);
      break;
    }
  }

  return 0;
} */
// _______________________________________
// new approach
/* #include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  for (int num = a + 1;; num++)
  {
    int i;
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
        break;
    }
    if (i > num / 2)
    {
      printf("%d", num);
      break;
    }
  }
  return 0;
} */
// new approach
/* #include <stdio.h>
int main()
{
  int i, n;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n)
  {
    for (i = 2; i <= n + 1; i++)
    {
      if ((n + 1) % i == 0)
        break;
    }
    if (i == n + 1)
    {
      printf("%d ", i);
      break;
    }
    n++;
  }
  return 0;
} */

/* //? 99. Write a program to check whether a given number is an Armstrong number.
#include <stdio.h>
int main()
{
  int num, TempNum, sum = 0, digit, power = 1, n = 0, i;
  printf("Enter a number: ");
  scanf("%d", &num);

  // Preserve the original number for comparison
  TempNum = num;

  // Count the number of digits
  for (n = 0; TempNum; n++)
    TempNum /= 10;

  // Reset TempNum to the original number
  // TempNum ko dubara original number pe set kiya gaya taaki hum firse use digit-by-digit process kar sakein
  TempNum = num;

  // Calculate the sum of powers of digits
  for (TempNum = num; TempNum; TempNum /= 10)
  {
    digit = TempNum % 10;
    power = 1; // Reset power for each digit

    // Calculate the digit raised to the power of 'n'
    for (i = 1; i <= n; i++)
      power *= digit;

    sum += power;
  }

  // Check if the number is an Armstrong number
  if (sum == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
} */
// __________________________________
// simply written
/* #include <stdio.h>
int main()
{
  int num, i, tempNum, digit, remainder, sum, power;
  printf("Enter a number: ");
  scanf("%d", &num);
  tempNum = num;
  for (digit = 0; num > 0; num /= 10)
    digit++;

  num = tempNum;
  for (sum = 0; num > 0; num /= 10)
  {
    remainder = num % 10;
    power = 1;
    for (i = 0; i < digit; i++)
    {
      power *= remainder;
    }
    sum += power;
  }
  if (sum == tempNum)
    printf("Armstrong");
  else
    printf("Not armstrong");
  return 0;
} */

/* //? 100. Write a program to print all Armstrong numbers under 1000.
//? if u use same above code
#include <stdio.h>
int main()
{
  int a, num, i, tempNum, digit, remainder, sum, power;
  for (a = 1; a < 1000; a++) // here i made changes
  {
    num = a; // here i made changes
    tempNum = num;

    for (digit = 0; num > 0; num /= 10)
      digit++;

    num = a; // here i made changes
    //  Restore 'num' to its original value

    for (sum = 0; num > 0; num /= 10)
    {
      remainder = num % 10;
      power = 1;
      for (i = 0; i < digit; i++)
      {
        power *= remainder;
      }
      sum += power;
    }
    if (sum == tempNum)
      printf("%d\n", a);
  }
  return 0;
}*/
// ________________________________
// old approach
/* #include <stdio.h>
int main()
{
  int num, TempNum, sum = 0, digit, power = 1, n = 0, i;
  for (num = 1; num <= 1000; num++) // here i made changes
  {
    TempNum = num;
    n = 0; // here is made changes  n=0
    for (n = 0; TempNum; n++)
      TempNum /= 10;
    TempNum = num;

    for (TempNum = num, sum = 0; TempNum; TempNum /= 10) // here is made changes sum=0
    {
      digit = TempNum % 10;
      power = 1;

      for (i = 1; i <= n; i++)
        power *= digit;

      sum += power;
    }

    if (sum == num)
      printf("%d is an Armstrong number.\n", num);
  }

  return 0;
} */
