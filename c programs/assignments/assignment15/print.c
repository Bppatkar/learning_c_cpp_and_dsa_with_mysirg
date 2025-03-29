// TODO: All Questions are about to write function not whole code
// Assignment-15: More on Functions

/* // ! 1. Write a function to calculate LCM of two numbers. (TSRS)
int calcLcm(int a, int b)
{
  int LCM;
  for (LCM = a > b ? a : b; LCM <= a * b; LCM++)
  {
    if (LCM % a == 0 && LCM % b == 0)
      break;
  }
  return LCM;
} */

/* // ! 2. Write a function to calculate HCF of two numbers. (TSRS)
int calcHcf(int a, int b)
{
  int HCF;
  for (HCF = a < b ? a : b; HCF >= 1; HCF--)
  {
    if (a % HCF == 0 && b % HCF == 0)
      break;
  }
  return HCF;
} */

/* // ! 3. Write a function to check whether a given number is Prime or not. (TSRS)
int checkPrime(int a)
{
  int i;
  for (i = 2; i <= a / 2; i++)
  {
    if (a % i == 0)
      return 0;
  }
  return 1;
}
 */
//? new approach
/* int checkPrime(int n)
{
  int i;
  for (i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
      return 0; // bcz its never prime
  }
  return 1;
}
 */

/* // ! 4. Write a function to find the next prime number of a given number. (TSRS)
int calcNextPrime(int a)
{
  int i, num;
  for (num = a + 1;; num++)
  {
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
        break;
    }
    if (i > num / 2)
      return num;
  }
} */
//? new approach we use 3rd Q. soln here
// bcz above we checked number is prime or not so we directly used that function for complete func u have to use above checkPrime function and then below calcNextPrime func ok

/* int calcNextPrime(int a)
{
  // if(checkPrime(++a)) if it return 1 means it is prime bcz of check prime function but we want that ye chalta rhe till it found not prime so we use while and ! use for if not prime then chalta rhe if prime then stop and we want next value so we use preincrement operator
  while (!checkPrime(++a))
    ; //; means loop ended here  and return a is outside of loop
  return a;
} */

/* // ! 5. Write a function to print first N prime numbers (TSRN)
void printNPrime(int a)
{
  int x, count = 0;
  for (x = 2; count < a; x++)
  {
    int i;
    for (i = 2; i * i <= x; i++)
    {
      if (x % i == 0)
        break;
    }

    if (i * i > x)
    {
      printf("%d ", x);
      count++;
    }
  }
} */
//? new approach we use again checkPrime func
/* void printNPrime(int a)
{
  int x = 2;
  while (a)
  {
    if (checkPrime(x))
    {
      printf("%d \n", x);
      a--;
    }
    x++;
  }
}
 */
//? new approach we can use Q.4 calcNextPrime func and checkPrime func
/* void printNPrime(int a)
{
  int x = 2;
  while (a)
  {
    printf("%d \n", x);
    x = calcNextPrime(x);
    a--;
  }
} */
// FIXME: here is complete code
/*
#include <stdio.h>
int checkPrime(int n)
{
  int i;
  for (i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
      return 0; // bcz its never prime
  }
  return 1;
}
int calcNextPrime(int a)
{
  while (!checkPrime(++a))
    ; //; means loop ended here  and return a is outside of loop
  return a;
}
void printNPrime(int a)
{
  int x = 2;
  while (a)
  {
    printf("%d \n", x);
    x = calcNextPrime(x);
    a--;
  }
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printNPrime(n);
  return 0;
}
 */

/* // ! 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
 void calPrintBTWPrime(int a, int b)
{
  int x, count = 0;
  int min = a < b ? a : b;
  int max = b > a ? b : a;
  for (x = min; x <= max; x++)
  {
    int i;
    for (i = 2; i * i <= x; i++)
    {
      if (x % i == 0)
        break;
    }

    if (i * i > x)
    {
      printf("%d ", x);
      count++;
    }
  }
  if (count == 0)
  {
    printf("No prime numbers found in the range.");
  }
} */
//? new approach again we use checkPrime func here
/*  void calPrintBTWPrime(int a, int b)
{
  int x;
  for (x = a; x <= b; x++)
  {
    if (checkPrime(x))
      printf("%d ", x);
  }
}
 */

/*// ! 7. Write a function to print first N terms of Fibonacci series (TSRN)
void calNFibo(int n)
{
  int a = -1, b = 1, c, i;
  for (i = 0; i <= n; i++)
  {
    c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
} */
//? new approach
/*void calNFibo(int n)
{
  int a = -1, b = 1, c;
  while (n)
  {
    c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
    n--;
  }
}
 */

// TODO:  Permutation and Combination
//? Permutation = all possible arrangements [n!/(n-r)!]
//  A,B,C,D arrange 2 element from 4 -
/* AB, AC, AD, BC, BD, CD
   BA, CA, DA, CB, DB, DC
 */
//? Combination = all possible selections not arrangements [n!/(r! * (n-r)!)]
// A,B,C,D arrange 2 element from 4 - AB and BA are same here so
/* AB, AC, AD,
   BC, BD, CD
 */

/* // ! 8. Write a function to print PASCAL Triangle. (TSRN)
//? using 12 assignment 7th question as it is with some changes
#include <stdio.h>
void printPascalTriangle(int n)
// void printPascalTriangle()
{
  int i, j, k, x, val;
  for (i = 1; i <= n; i++)
  {
    k = 1;
    x = 1;
    val = 1; // Initialize the first value in each row
    for (j = 1; j <= 2 * n - 1; j++)
    {
      if (j >= n + 1 - i && j <= n - 1 + i)
      {
        if (k)
        {
          printf("%2d ", val); // Print the current value

          // Calculate the next value in the row
          val = val * (i - x) / x;
          x++;
        }
        else
        {
          printf("   "); // Space between numbers
        }
        k = 1 - k; // Toggle between number and space
      }
      else
      {
        printf("   "); // Leading or trailing spaces
      }
    }
    printf("\n");
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printPascalTriangle(n);
  return 0;
} */
//? new approach
/* int calcFact(int n)
{
 int fact = 1;
 for (int x = 1; x <= n; x++)
 {
   fact *= x;
 }
 return fact;
}
// ______________________________________
void printPascal(int n)
{ int i,j,result;
 for ( i = 0; i < n; i++)
 {
   for (j = 0; j < n - i - 1; j++)
     printf("  ");  //adding 2 space

   for (j = 0; j <= i; j++)
   {
     result = calcFact(i) / (calcFact(j) * calcFact(i - j));
     printf("%2d  ", result);
     //after d added 2 space and for 2 digit number use %2d
     // if it has 3 digit so we use %3d
   }
   printf("\n");
 }
} */
//? we can use star pattern solution from assignment 12 Q.3
//? and factorial func with combinationCount for calc permutaion
//? here is complete code
/* #include <stdio.h>
int calcFact(int n)
{
  int fact = 1;
  for (int x = 1; x <= n; x++)
  {
    fact *= x;
  }
  return fact;
}

int combinationCount(int n, int r)
{
  if (r > n)
    return 0;
  int nFact = calcFact(n);
  int rFact = calcFact(r);
  int diff = calcFact(n - r);
  return nFact / (rFact * diff);
}
void printPascal(int n)
{
  int i, j, k, r;
  for (i = 1; i <= n; i++)
  {
    k = 1;
    r = 0;
    for (j = 1; j <= 2 * n - 1; j++)
    {
      if (j >= n + 1 - i && j <= n - 1 + i)
      {
        if (k)
          printf("%2d", combinationCount(i - 1, r++));
        else
          printf("  ");
        k = 1 - k;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printPascal(n);
  return 0;
}
 */
// ________________Simple approach by [Binomial Theorem.](num = num * (i - k) / (k + 1))________________________
/* #include <stdio.h>

int main()
{
  int n;
  printf("Enter the length you want pascal triangle: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int num = 1;

    // Printing spaces for formatting
    for (int j = 0; j < n - i - 1; j++)
    {
      printf(" ");
    }

    // Printing numbers in Pascal's Triangle
    for (int k = 0; k <= i; k++)
    {
      printf("%d ", num);
      num = num * (i - k) / (k + 1);
    }

    printf("\n");
  }

  return 0;
} */

/* // ! 9. Write a function to print all Armstrong numbers between two given numbers. (TSRN)
void printArm(int a, int b)
{
  int x, count = 0, digit, sum, tempNum, remainder, power;
  int min = a < b ? a : b;
  int max = b > a ? b : a;
  for (x = min; x <= max; x++)
  {
    tempNum = x;
    digit = 0;
    for (int temp = x; temp > 0; temp /= 10)
      digit++;
    sum = 0;
    for (int temp = x; temp > 0; temp /= 10)
    {
      remainder = temp % 10;
      power = 1;
      for (int j = 0; j < digit; j++)
      {
        power *= remainder;
      }
      sum += power;
    }
    if (sum == tempNum)
    {
      printf("%d ", tempNum);
      count++;
    }
  }
  if (count == 0)
    printf("No Armstrong numbers found in the range.\n");
  else
    printf("\nTotal Armstrong numbers: %d\n", count);
} */

/* // ! 10. Write a function to find the sum of first N terms of the series 1!/1 + 2!/2 + 3!/3+ 4!/4 +5!/ 5 ... n!/n (TSRS)
int sumOfSeries(int n)
{
  int totalSum = 0;
  for (int k = 1; k <= n; k++)
  {
    int fact = 1, i = 1;
    while (i <= k)
    {
      fact *= i;
      i++;
    }
    totalSum += fact / k;
  }
  return totalSum;
} */
//? new approach
//? use factorial function for that
/* int fact(int n)
{
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}
int sumOfSeries(int n)
{
  int sum = 0;
  while (n)
  {
    sum = sum + fact(n) / n;
    n--;
  }
  return sum;
} */

// code for checking function
/* #include <stdio.h>
int main()
{
  // int a, b;
  // printf("Enter two number: ");
  // scanf("%d %d", &a, &b);

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int result = sumOfSeries(n);
  printf("result is %d", result);

  return 0;
} */
