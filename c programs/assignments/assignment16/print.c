// TODO: Assignment-16: Recursion
//?FIXME: ALL questions are asking to "print" only so i am going to use void ok

/*
TODO: General Structure
ReturnType FunctionName(Parameters) {
    if (BaseCaseCondition) {
        return BaseCaseResult;  // Base case
    }
    return RecursiveCall;  // Recursive case
}
*/

/* //! 1. Write a recursive function to print first N natural numbers
void print_n_natural_number(int n)
{
  if (n == 0)
    return;
  print_n_natural_number(n - 1);
  printf("%d ", n);
} */
// ____________________________________
// new approach
/* void print_n_natural_number(int n)
{
  if (n > 0){
  print_n_natural_number(n - 1);
  printf("%d ", n);}
} */

/* //! 2. Write a recursive function to print first N natural numbers in reverse order
void print_reverse_n_natural_number(int n)
{
  if (n == 0)
    return;
  printf("%d ", n);
  print_reverse_n_natural_number(n - 1);
} */
// ____________________________________
// new approach
/* void print_reverse_n_natural_number(int n)
{
  if (n > 0){
  printf("%d ", n);
  print_reverse_n_natural_number(n - 1);}
} */

/* //! 3. Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void print_n_odd_natural_number(int n, int count)
{
  if (n == 0)
    return;
  printf("%d ", count);
  print_n_odd_natural_number(n - 1, count + 2);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_n_odd_natural_number(n, 1);
  return 0;
}
*/
// ________________________________________
// new approach
/* #include <stdio.h>
void print_n_odd_natural_number(int n)
{
  if (n > 0)
  {
    print_n_odd_natural_number(n - 1);
    printf("%d ", 2 * n - 1);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_n_odd_natural_number(n);
  return 0;
} */

/* //! 4. Write a recursive function to print first N odd natural numbers in reverse order
void print_reverse_n_odd_natural_number(int n, int count){
  if (n == 0)
   return;
  print_reverse_n_odd_natural_number(n - 1, count + 2);
  printf("%d ", count);
} */
// ________________________________________
// new approach
/* #include <stdio.h>
void print_reverse_n_odd_natural_number(int n)
{
  if (n > 0)
  {
    printf("%d ", 2 * n - 1);
    print_reverse_n_odd_natural_number(n - 1);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_reverse_n_odd_natural_number(n);
  return 0;
} */

/* //! 5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void print_n_even_natural_number(int n, int count)
{
  if (n == 0)
    return;
  printf("%d ", count);
  print_n_even_natural_number(n - 1, count + 2);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_n_even_natural_number(n, 2);
  return 0;
} */
//_____________________________
// new approach
/* #include <stdio.h>
void print_n_even_natural_number(int n)
{
  if (n > 0)
  {
    print_n_even_natural_number(n - 1);
    printf("%d ", 2 * n);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_n_even_natural_number(n);
  return 0;
} */

/* //! 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void print_reverse_n_even_natural_number(int n, int count)
{
  if (n == 0)
    return;
  print_reverse_n_even_natural_number(n - 1, count + 2);
  printf("%d ", count);
} */
//_____________________________
// new approach
/* #include <stdio.h>
void print_reverse_n_even_natural_number(int n)
{
  if (n > 0)
  {
    printf("%d ", 2 * n);
    print_reverse_n_even_natural_number(n - 1);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_reverse_n_even_natural_number(n);
  return 0;
} */

/* //! 7. Write a recursive function to print squares of first N natural numbers
void print_square_n_natural_number(int n)
{
  if (n == 0)
    return;

  print_square_n_natural_number(n - 1);
  printf("%d ", n * n);
} */
//_____________________________
// new approach
/* #include <stdio.h>
void print_square_n_natural_number(int n)
{
  if (n > 0)
  {
    print_square_n_natural_number(n - 1);
    printf("%d ", n * n);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_square_n_natural_number(n);
  return 0;
} */

/* //! 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void print_binary_of_number(int n)
{
  if (n == 0)
    return;

  print_binary_of_number(n / 2);
  printf("%d", n % 2);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n == 0)
    printf("0");
  else
    print_binary_of_number(n);
  return 0;
} */
//________________________________
// new approach
/* #include <stdio.h>
void print_binary_of_number(int n)
{
  if (n > 0)
  {
    print_binary_of_number(n / 2);
    printf("%d", n % 2);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_binary_of_number(n);
  return 0;
} */

/* //! 9. Write a recursive function to print octal of a given decimal number
void print_octal_of_number(int n)
{
  if (n == 0)
    return;

  print_octal_of_number(n / 8);
  printf("%d", n % 8);
} */
//________________________________
// new approach
/* #include <stdio.h>
void print_octal_of_number(int n)
{
  if (n > 0)
  {
    print_octal_of_number(n / 8);
    printf("%d", n % 8);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_octal_of_number(n);
  return 0;
} */

/* //! 10. Write a recursive function to print reverse of a given number
void print_reverse_of_number(int n)
{
  if (n == 0)
    return;
  printf("%d", n % 10);
  print_reverse_of_number(n / 10);
} */
//________________________________
// new approach
/* #include <stdio.h>
void print_reverse_of_number(int n)
{
  if (n > 0)
  {
    printf("%d", n % 10);
    print_reverse_of_number(n / 10);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_reverse_of_number(n);
  return 0;
} */

//! for checking code
#include <stdio.h>
// ****************************
void print_reverse_of_number(int n)
{
  if (n == 0)
    return;
  printf("%d", n % 10);
  print_reverse_of_number(n / 10);
}
// ****************************
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  // ********************
  // int a, b;
  // printf("Enter two number: ");
  // scanf("%d %d", &a, &b);
  if (n == 0)
    printf("0");
  else
    print_reverse_of_number(n);
  return 0;
}
