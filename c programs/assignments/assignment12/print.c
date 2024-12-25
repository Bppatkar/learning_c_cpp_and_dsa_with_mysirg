#include <stdio.h>
/* void f1()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 7; j++)
    {
      if (j >= 5 - i && j <= 3 + i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
} */
/* void f2()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 7; j++)
    {
      if (j >= i && j <= 8 - i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
} */
/* void f3()
int i,j,k;
    for(i=1;i<=4;i++){
      k=1;
      for(j=1;j<=7;j++){
        if(j>=5-i && j<=3+i){
          if(k)
          printf("* ");
          else
          printf("  ");
        k=1-k;
        } else
            printf("  ");
      }
      printf("\n");
    }
} */
/* void f4()
{
  int k;
  for (int i = 1; i <= 4; i++)
  {
    k = 1;
    for (int j = 1; j <= 7; j++)
    {
      if (j >= 5 - i && j <= 3 + i)
      {
        printf("%d", k);
        j < 4 ? k++ : k--;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f5()
{
  char k;
  for (int i = 1; i <= 4; i++)
  {
    k = 'A';
    for (int j = 1; j <= 7; j++)
    {
      if (j >= i && j <= 8 - i)
      {
        printf("%c ", k);
        k++;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
} */
/* void f6()
{
  int k;
  for (int i = 1; i <= 4; i++)
  {
    k = 'A';
    for (int j = 1; j <= 7; j++)
    {
      if (j >= i && j <= 8 - i)
      {
        printf("%c ", k);
        j < 4 ? k++ : k--;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
} */
/* void f7()
{
  int k, x;
  for (int i = 1; i <= 5; i++)
  {
    k = 1;
    x = 1;
    for (int j = 1; j <= 9; j++)
    {
      if (j >= 6 - i && j <= 4 + i)
      {
        if (k)
        {
          printf("%d", x);
          j < 5 ? x++ : x--;
        }
        else
        {
          printf(" ");
          if (j == 5)
            x--;
        }
        k = 1 - k;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f8()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 7; j++)
    {
      if (j <= 5 - i || j >= 3 + i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
} */
/* void f9()
{
  int k;
  for (int i = 1; i <= 4; i++)
  {
    k = 1;
    for (int j = 1; j <= 7; j++)
    {
      if (j <= 5 - i || j >= 3 + i)
      {
        printf("%d", k);
        j < 4 ? k++ : k--;
      }
      else
      {
        printf(" ");
        if (j == 4)
          k--;
      }
    }
    printf("\n");
  }
} */
/* void f10()
{
  char k;
  for (int i = 1; i <= 4; i++)
  {
    k = 'A';
    for (int j = 1; j <= 7; j++)
    {
      if (j <= 5 - i || j >= 3 + i)
      {
        printf("%c", k);
        j < 4 ? k++ : k--;
      }
      else
      {
        printf(" ");
        if (j == 4)
          k--;
      }
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