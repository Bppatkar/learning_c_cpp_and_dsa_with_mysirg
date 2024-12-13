// Assignment-5: Decision Control Statements

/* // 1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a>0) printf("Positive");
  if(a<=0) printf("Non Positive");
  return 0;
} */

/* // 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a%5) printf("Not Divisible");
  else printf("Divisible");
  return 0;
} */

/* // 3. Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a%2) printf("Odd");
  else printf("Even");
  return 0;
} */

/* // 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  // 6/2= 3*2= 6 means we get same number again
  // 5/2= 2*2= 4 means we don't get same number again
  if (a / 2 * 2 == a)
    printf("even");
  else
    printf("odd");
  return 0;
} */

/* // 5. Write a program to check whether the given number is even or odd using a bitwise operator.
#include <stdio.h>
int main()
{
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if (a & 1)
    printf("Odd");
  else
    printf("Even");
  return 0;
} */

/* // 6. Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a>=100 && a<=999) printf("Three digit Number");
  else printf("Not a Three digit Number");
  return 0;
} */

/* // 7. Write a program to print greater between two numbers. Print one number if both are the same.
#include<stdio.h>
int main(){
  int a,b;
  printf("enter two number: ");
  scanf("%d %d", &a,&b);
  // if(a>b) printf("Greater Number is %d", a);
  // else printf("%d", b);
  // __________
  // a>b? printf("Greater Number is %d", a):printf("%d", b);
  // __________
  printf("%d", a>b? a:b);
  return 0;
} */

/* // 8. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter value of a,b and c: ");
  scanf("%d %d %d", &a,&b,&c);
  if(b*b-4*a*c >0) printf("Number is Real and Distinct");
  else if(b*b-4*a*c <0) printf("Imaginary Roots");
  else if(b*b-4*a*c ==0) printf("Number is Real and Equal");
  return 0;
} */

/* // 9. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
  int a;
  printf("enter year to check it is leap year or not: ");
  scanf("%d", &a);
  // if(a%100==){
  //  if(a%400==0) printf("Leap year");
  //  else printf("Not a Leap Year");
  // }  else if(a%100 !=0){
  //   if(a%4==0) printf("Leap year");
  //  else printf("Not a Leap Year");
  // }
   if((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
    printf("Leap year");
  else
    printf("Not a Leap Year");
  return 0;
} */

/* // 10. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("enter three number: ");
  scanf("%d %d %d", &a, &b, &c);
  // if (a > b)
  // {
  //   a > c ? printf("%d", a) : printf("%d", c);
  // }
  // else
  // {
  //   b > c ? printf("%d", b) : printf("%d", c);
  // }
  // ____________________
  // a > b? a > c ? printf("%d", a) : printf("%d", c): b > c ? printf("%d", b) : printf("%d", c);
  // ___________
  // a > b ? a > c ? printf("%d", a) : printf("%d", c) : b > c ? printf("%d", b)
  // : printf("%d", c);
  // ____________________
  printf("%d", a > b ? a > c ? a : c : b > c ? b
                                             : c);
  // ____________________

  // if(a==b && b==c & c==a) printf("same %d", a);
  // else if(a>b && a>c) printf("Greater Number is %d", a);
  // else if(b>c && b>a) printf("Greater Number is %d", b);
  // else printf("%d", c);

  // printf("Greatest Number is %d", a>b ? a:b>c ? b:c);
  // else printf("%d", b);
  return 0;
} */