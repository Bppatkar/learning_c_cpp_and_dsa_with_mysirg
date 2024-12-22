//! write a program to draw the following pattern
//? i'll try print all the pattern in single program
//? i'll make 10 function and print star pattern

// we have to print star pattern so we use void because we are not returning any value if we return something then we take int ok
//! star pattern
#include <stdio.h>
// void f1();
// void f2();
// void f3();
// void f4();
// void f5();
// void f6();
// void f7();
// void f8();
// void f9();
void f10();
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
  f10();
  return 0;
}
/* void f1()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j <= i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */

/* void f2()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j >= 6 - i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */

/* void f3()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j <= 6 - i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */

/* void f4()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j >= i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */

/* void f5()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j <= i)
        printf("%d", j);
      else
        printf(" ");
    }
    printf("\n");
  }
} */

/* void f6()
{
  int i, j, k;
  for (i = 1; i <= 4; i++)
  {
    k = i;
    for (j = 1; j <= 4; j++)
    {
      if (j <= i)
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
  int i, j;
  char k;
  for (i = 1; i <= 5; i++)
  {
    k = 'A';
    for (j = 1; j <= 5; j++)
    {
      if (j >= i)
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
  int i, j, k = 1;
  for (i = 1; i <= 4; i++)
  {

    for (j = 1; j <= 4; j++)
    {
      if (j <= i)
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
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j >= i)
        printf("%c", 64 + j);

      else
        printf(" ");
    }
    printf("\n");
  }
} */

/* void f10()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (i == 1 || i == 5 || j == 1 || j == 5)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */
