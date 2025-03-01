// Assignment-14: Functions
//?TNRN- Take Nothing Return Nothing {return nothing means void}
//?TSRN- Take Something Return Nothing {(int int) return type void}
//?TNRS- Take Nothing Return Something {return type int - return something}
//?TSRS- Take Something Return Something

//! 1. Write a function to calculate the area of a circle. (TSRS)
/* #include <stdio.h>
float areaofCircle(float r)
{
  return 3.14 * r * r;
}
int main()
{
  int r;
  printf("Enter radius: ");
  scanf("%d", &r);
  printf("Area of circle is %0.2f\n", areaofCircle(r));
  return 0;
} */

//! 2. Write a function to calculate simple interest. (TSRS)
/* #include <stdio.h>
float calcSi(float p, float r, float t)
{
  float SI = (p * r * t) / 100;
  return SI;
}
int main()
{
  int p, r, t;
  printf("Enter Principle, Rate and Time: ");
  scanf("%d %d %d", &p, &r, &t);
  printf("Simple Interest is %0.2f", calcSi(p, r, t));
  return 0;
} */

//! 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
/* #include <stdio.h>
int isEvenOrOdd(int n)
{
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Entered number is %s\n", isEvenOrOdd(num) ? "Even" : "Odd");
  // %s is format specifier which is used to print a string
  return 0;
}
 */

//! 4. Write a function to print first N natural numbers (TSRN)
/* #include <stdio.h>
void printNumbers(int n){
  for (int i = 1; i <= n; i++)  {
    printf("%d\n", i);
  }
}
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printNumbers(num);
  return 0;
} */

//! 5. Write a function to print first N odd natural numbers. (TSRN)
/* #include <stdio.h>
void printOddNumbers(int n)
{

  for (int i = 1, count = 1; count <= n; i += 2, count++)
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
} */

//! 6. Write a function to calculate the factorial of a number. (TSRS)
/* #include <stdio.h>
long long int calcFact(int n)
{
  if (n == 0)
    return 1;
  long long int result = 1;
  for (int i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}

int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d", &num);

  if (num < 0)
    printf("you are using negative value\n");
  else
  {
    long long int result = calcFact(num);
    printf("Factorial is %lld\n", result);
  }
  // lld means long long int
  // llu means unsigned long long
  // long m % nahi %ld , long sirf int or double k sath hota h char aur float k sath nhi or short sirf int k sath

  return 0;
} */

/*The issue you're encountering is that the factorial of 18 is a very large number (6.4023737e+15), exceeding the capacity of a long int data type in many C implementations. This leads to integer overflow, where the result exceeds the maximum representable value for that data type, causing unexpected behavior like negative values.

 Here's how you can fix it:

 Use a Larger Data Type:
 Consider using long long int or unsigned long long int if your compiler supports them. These data types can typically hold larger integer values.*/

// TODO: Below 2 questions are from Permutation and Combination
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

//! 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
/* #include <stdio.h>
int factorial(int x)
{
  int result = 1;
  for (int i = 1; i <= x; i++)
  {
    result *= i;
  }
  return result;
}

int combinationCount(int n, int r)
{
  if (r > n)
    return 0;
  int nFact = factorial(n);
  // here we use 6th question directly for better reuseability but we wrie code again for factorial but u can use
  int rFact = factorial(r);
  int diff = factorial(n - r);
  return nFact / (rFact * diff);
}

int main()
{
  int n, r;
  printf("Enter Items and Selecting num: ");
  scanf("%d %d", &n, &r);
  int result = combinationCount(n, r);
  if (result == 0)
    printf("Invalid input: r cannot be greater than n.\n");
  else
    printf("The number of combinations is: %d\n", result);
  return 0;
} */

//! 8. Write a function to calculate the number of arrangements/permutations one can make from n items and r selected at a time. (TSRS)
/* #include <stdio.h>
int factorial(int x)
{
  int result = 1;
  for (int i = 1; i <= x; i++)
  {
    result *= i;
  }
  return result;
}

int permutationCount(int n, int r)
{
  if (r > n)
    return 0;
  int nFact = factorial(n);
  int diff = factorial(n - r);
  return nFact / diff;
}

int main()
{
  int n, r;
  printf("Enter Items and Selecting num: ");
  scanf("%d %d", &n, &r);
  int result = permutationCount(n, r);
  if (result == 0)
    printf("Invalid input: r cannot be greater than n.\n");
  else
    printf("The number of arrangements (permutations) is: %d\n", result);
  return 0;
} */

//! 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
/* #include <stdio.h>
int containDigit(int num, int digit)
{
  for (; num > 0; num /= 10)
  {
    if (num % 10 == digit)
      return 1;
  }
  return 0;
}

int main()
{
  int num, digit;
  printf("Enter number: ");
  scanf("%d", &num);
  printf("Enter digit to search: ");
  scanf("%d", &digit);
  // checking if the digit is in the number
  if (containDigit(num, digit))
    printf("Finally Found: %d\n", digit);
  else
    printf("Unable to find OR number does not contain %d\n", digit);
  return 0;
} */

//! 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
/* #include <stdio.h>
void primeFactor(int n)
{
  if (n <= 1)
  {
    printf("No prime factors for numbers less than or equal to 1.\n");
    return;
  }
  for (int i = 2; n > 1; i++)
  {
    for (; n % i == 0; n /= i)
    {
      printf("%d\n", i);
    }
  }
}
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Prime Factors of %d are: \n", num);
  primeFactor(num);
  return 0;
} */