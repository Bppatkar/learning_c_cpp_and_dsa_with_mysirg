// TODO: Assignment-17: More on Recursion
//?FIXME: mostly questions are asking to "calculate" so i dont use "void"  ok

/* //! 1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
// that function will return something so we store in a variable in main function and print it
int print_sum_n_natural_number(int n){
  if (n == 0)
    return 0;
  return n + print_sum_n_natural_number(n - 1);
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sum = print_sum_n_natural_number(n);
  printf("sum is %d", sum);
  return 0;
} */

/* //! 2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
// that function will return something so we store in a variable in main function and print it
int print_sum_n_odd_number(int n, int count)
{
  if (n == 0)
    return 0;
  return count + print_sum_n_odd_number(n - 1, count + 2); // here i use +2 bcz of odd start with 1
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sum = print_sum_n_odd_number(n, 1);
  printf("sum of first odd %d numbers is %d", n, sum);
  // i use 2 times %d %d ok and 1 bcz odd start with 1
  return 0;
} */

/* //! 3. Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int print_sum_n_even_number(int n, int count)
{
  if (n == 0)
    return 0;
  return count + print_sum_n_even_number(n - 1, count + 2);  // here i use +2 bcz of even start with 1
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sum = print_sum_n_even_number(n, 2);
  printf("sum of first even %d numbers is %d", n, sum);
  // i use 2 times %d %d ok and 2 bcz even start with 2
  return 0;
} */

/* //! 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int print_square_sum_of_number(int n)
{
  if (n == 0)
    return 0;
  return (n * n) + print_square_sum_of_number(n - 1);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sum = print_square_sum_of_number(n);
  printf("sum of square of first %d natural numbers is %d", n, sum);
  return 0;
} */

/* //! 5. Write a recursive function to calculate sum of digits of a given number.
#include <stdio.h>
int print_sum_of_digit_of_number(int n, int total)
{
  if (n == 0)
    return total; // Return the accumulated sum
  return print_sum_of_digit_of_number(n / 10, total + (n % 10));
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sum = print_sum_of_digit_of_number(n, 0); // Initialize total as 0
  printf("sum of square of first %d natural numbers is %d", n, sum);
   // i use 2 times %d %d ok and 2 bcz even start with 2
  return 0;
} */

/* //! 6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int print_factorial_of_number(int n){
  if (n == 0)
    return 1;
  return n * print_factorial_of_number(n - 1);
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int factorial = print_factorial_of_number(n);
  printf("Factorial of %d is %d\n", n, factorial);
  return 0;
} */

/* //! 7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int print_HCF_of_two_numbers(int a, int b){
  if (b == 0)
    return a;
  return print_HCF_of_two_numbers(b, a % b);
}
int main(){
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  int HCF = print_HCF_of_two_numbers(a, b);
  printf("HCF of %d and %d is %d\n", a, b, HCF);
  return 0;
} */

/* //! 8. Write a recursive function to print first N terms of Fibonacci series
//? that says print so i use void ok
#include <stdio.h>
void print_n_term_of_fibbonacci(int a, int m, int n){
  if (a == 0)
    return;
  printf("%d ", m); // Print the current Fibonacci number (total)
  print_n_term_of_fibbonacci(a - 1, n, m + n);
}
int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  print_n_term_of_fibbonacci(a, 0, 1);
  return 0;
} */

/* //! 9. Write a recursive function to count the digits of a given number.
#include <stdio.h>
int print_digit_count_of_number(int a, int total)
{
  if (a == 0)
    return total;  // Return the total count once recursion ends
  return print_digit_count_of_number(a / 10, total + 1);  // Increment total
}

int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  int count = print_digit_count_of_number(a, 0);
  printf("Count of digits in %d is %d\n", a, count);
  return 0;
}
 */

/* //! 10. Write a recursive function to calculate the power of any number.
#include <stdio.h>
int print_power_of_number(int a, int b){
  if (b == 0)
    return 1;
  return a * print_power_of_number(a, b - 1); // Recursive case: a^b = a * a^(b-1)
}
int main(){
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  int power = print_power_of_number(a, b);
  printf("%d raised to the power of %d is: %d\n", a, b, power);
  return 0;
} */

//! for checking code
#include <stdio.h>
// ****************************
// that function will return something so we store in a variable in main function and print it
int print_power_of_number(int a, int b)
{
  if (b == 0)
    return 1;
  return a * print_power_of_number(a, b - 1); // Recursive case: a^b = a * a^(b-1)
}

// ****************************
int main()
{
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // ********************
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  // ********************
  int power = print_power_of_number(a, b);
  printf("%d raised to the power of %d is: %d\n", a, b, power);
  return 0;
}