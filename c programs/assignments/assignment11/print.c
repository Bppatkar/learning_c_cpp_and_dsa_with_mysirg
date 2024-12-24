//! write a program to draw the following pattern
//? i'll try print all the pattern in single program
//? i'll make 10 function and print star pattern

// we have to print star pattern so we use void because we are not returning any value if we return something then we take int ok
//! star pattern
#include <stdio.h>
/* void f1()
{
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5; col++)
    {
      if (col <= row)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f2()
{
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5; col++)
    {
      if (col >= 6 - row)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f3()
{
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5; col++)
    {
      if (col <= 6 - row)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f4()
{
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5; col++)
    {
      if (col >= row)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f5()
{
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5; col++)
    {
      if (col <= row)
        printf("%d", col);
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f6()
{
  for (int row = 1; row <= 4; row++)
  {
    int k = row;
    for (int col = 1; col <= 4; col++)
    {
      if (col <= row)
      {
        printf("%d", k);
        k--;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f7()
{
  for (int row = 1; row <= 5; row++)
  {
    int k = 'A';
    for (int col = 1; col <= 5; col++)
    {
      if (col >= row)
      {
        printf("%c", k);
        k++;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f8()
{
  int k = 1;
  for (int row = 1; row <= 4; row++)
  {
    for (int col = 1; col <= 4; col++)
    {
      if (col <= row)
      {
        printf("%d", k);
        k++;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f9()
{
  for (int row = 1; row <= 5; row++)
  {

    for (int col = 1; col <= 5; col++)
    {
      if (col >= row)
        printf("%c", 64 + col);

      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f10()
{
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5; col++)
    {
      if (row == 1 || row == 5 || col == 1 || col == 5)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
} */

int main()
{
  // f1();
  // f2();
  // f3();
  // f4();
  // f5();
  // f6();
  // f7();
  // f8();
  // f9();
  // f10();
  return 0;
}