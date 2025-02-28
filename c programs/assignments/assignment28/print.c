// TODO: Assignment-28: Mixed C language

//! 1. Define a function to produce all the combinations of strings that can be made out of characters of a given string, selecting r at a time. Return a dynamically created array of strings holding all combinations.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//   char str[30];
//   printf("Enter a string: ");
//   fgets(str, 30, stdin);
//   str[strlen(str) - 1] = '\0';
//   int n = strlen(str);
//   int r;
//   printf("Enter the value of r: ");
//   scanf("%d", &r);

//   return 0;
// }

//! 2. Write a function to print all distinct pattern of Os and 1s of a given length.

/* //! 3. Write a program to print system date.
#include <stdio.h>
#include <time.h>

int main()
{
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);

  printf("Current date: %02d-%02d-%04d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  return 0;
} */

/* //! 4. Write a program to print system time
#include <stdio.h>
#include <time.h>
int main()
{
  time_t timeChecker;
  time(&timeChecker);
  printf("Today's date and time: %s", ctime(&timeChecker));
  return 0;
} */

//! 5. Given an array of size n, reverse it. Input format - The first line contains an integer n denoting the size of the array. The next line contains n space separated integers denoting the elements of the array. The output should print the array in the desired order, elements separated by spaces.

//! 6. There is a series S, where the next term is the sum of previous three terms. Given the first three terms of the series, a, b and c, You have to output the nth term of the series using recursion. Input format - the first line contains a single integer, n. The next line contains three space separated integers a, b and c. The output format - print the nth term of the series.

//! 7. Define a structure triangle which can contain lengths of the sides of a triangle. Sort a list of triangles according to their areas. Input format - first line contains a number n which is number of triangles. Subsequent n lines, each contains three space separated numbers (sides of the triangle). Output format - display the tuples (side 1, side2, side3) of triangle in sorted order (according to area of triangle).

//! 8. Define a function to remove duplicate numbers from an array. Return the resulting array.

//! 9. Define a function to find the maximum frequency element in the given array.

//! 10. Define a function to create an array of size N and store first N prime numbers in it.Return the resulting array.