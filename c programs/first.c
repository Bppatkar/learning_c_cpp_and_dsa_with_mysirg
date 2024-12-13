// print welcome on the screen
/* #include<stdio.h>
int main(){
  printf("welcome");
  return 0;
} */

// write a program to print welcome student but not in same line
/* #include<stdio.h>
int main(){
  printf("welcome\'Student");

} */

// write s program to print value of a variable
/* #include<stdio.h>
int main(){
  int a = 5;
  printf("%d",a);
  return 0;
}
 */

// write a program to print that following statement
// conside int a =5 ,b=6;
// 1. 5 6
// 2. a=5 and b=6;
// 3. a=6 & b=5;
// 4. value of a is 5 and value of b is 6
// 5. sum of 5 and 6 is 11
// 6. 5+6 = 11

/* #include<stdio.h>
int main(){
  int a=5 ,b=6;
    printf("%d %d",a,b);
    printf("\n");
    printf("a=%d and b=%d",a,b);
    printf("\n");
    printf("a=%d & b=%d", b,a);
    printf("\n");
    printf("value of a is %d and value of b is %d",a,b );
    printf("\n");
    printf("sum of %d and %d is %d",a,b, a+b);
    printf("\n");
    printf("%d + %d = %d",a,b,a+b);
  return 0;
} */

/* // scanf for taking input from user
 #include<stdio.h>
int main(){
  int a;
  scanf("%d", &a);
  printf("%d",a);
  return 0;
} */

/* // write a program to calculate sum of two integers
#include<stdio.h>
int main(){
 // int a ,b ,c;
 // printf("Enter two numbers");
 // scanf("%d %d", &a,&b);
 // c= a+b;
 // printf("sum of %d and %d is %d",a,b,c);
 // return 0;
 int a ,b;
 printf("Enter two numbers");
 scanf("%d %d", &a,&b);
 printf("sum of %d and %d is %d",a,b,a+b);
 return 0;
} */

/* #include<stdio.h>
int main(){
  int x =5,y;
  y=++x;
  printf("%d %d", x,y);
}  */

/* #include<stdio.h>
int main(){
  int a;
  char b;
  printf("enter num for a:");
  scanf("%d",&a);
  printf("enter char for b:");
  scanf(" %c",&b);
  printf("%d is %c\n",a, a);
  printf("%c is %d\n",b, b);
  return 0;
}
 */

/* #include <stdio.h>
int main(){
  int x;
  x = ~5;
  printf("%d",x);
}  */

/* // WAP to check whether a given number is positive or non positive [using if]
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a>0) printf("Positive");
  if(a<=0) printf("Non Positive");
  return 0;
} */

/* // WAP to check whether a given number is positive or non positive [using if else]
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a>0)printf("Positive");
  else printf("Non - Positive");
  return 0;
} */

/* // WAP to check whether a given number is positive or non positive [using if ternary]
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  // printf(a<=0 ? "non-positive": "positive");
  a>0? printf("positive"):printf("non-positive");
  return 0;
}  */

/* #include<stdio.h>
int main(){
  int x=5;
  if(x==4){
  printf("%d", x);
    printf("Hello ");
  }
  else{
  printf("Bye ");
  }
  printf("%d", x);
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a = 1, i;
  printf("Enter the value for N Natural Number");
  scanf("%d", &i);
  while (a <= i)
  {
    printf("%d\n", a);
    a++;
  }
  return 0;
}
 */

/* #include <stdio.h>
int main()
{
  int i, j, k;
  for (i = 0; i < 3; i++)
  {
    j = i * 2 + 1;
    k = j * 3 - 2;
  }
  printf("%d %d %d", i, j, k);
  return 0;
} */

/* //! Write a program which asks user to enter an even number. Computer will give user at most 3 chances. If user fail to answer in any of the chances, game over, message should be displayed on the screen. Otherwise, you win, message should be displayed and can stop immediately.

#include <stdio.h>
int main()
{
  int a = 0;
  while (a < 3)
  {
    int i;
    printf("Enter Even Number: ");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
      printf("You Win");
      break;
    }
    else
    {
      a++;
      if (a == 3)
        printf("You Loose\nGame Over");
    }
  }
  return 0;
} */

//! approch 2
/* int i, num;
for (i = 1; i <= 3; i++) {
    printf("Enter an even number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("You win!\n");
        return 0; // Exit the program immediately
    } else {
        printf("Try again.\n");
    }
}

printf("Game over. You lose.\n"); */

/* //! write a program to entered by user. user can enter any number of numbers until he enters 0;

#include <stdio.h>
int main()
{
  int i, num, a = 0;
  for (;;) // that means infinite loops
  {
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
      printf("%d\n ", a);
      break;
    }
    else
      a += num;
  }
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a, b, c;
  for (a = 5; a > 1; a--)
  {
    for (b = 6 - a; b <= 5; b++)
    {
      c = a + b;
      printf("\n %d %d %d", a, b, c);
    }
  }
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a, b;
  for (a = 1; a <= 4; a++)
  {
    for (b = 1; b <= 5; b++)
    {
      printf("%d ", b * a);
    }
    printf("\n");
  }
  return 0;
} */
