// Assignment-6: More on Decision Control Statements

/* // 1. Write a program to check whether a given number is a three digit number or not.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a >= 100 && a <= 999)
    printf("Three digit number");
  return 0;
} */

/* // 2. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
  float cp, sp, profit, loss;
  printf("Enter a cp & sp: ");
  scanf("%f %f", &cp, &sp);
  if (sp - cp >= 0)
  {
    profit = (sp - cp) / cp * 100;
    printf("Profit percentage is %0.2f", profit);
  }
  else
  {
    loss = (cp - sp) / cp * 100;
    printf("Loss percentage is %0.2f", loss);
  }
  return 0;
} */

/* // 3. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  printf("Enter a marks of 5 subjects from out of 100: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  if (a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
    printf("Passed");
  else
    printf("Failed");
  return 0;
} */

/* // 4. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a alphabet: ");
  scanf("%c", &x);
  // concept 1
  // if (x <= 97)
  //   printf("UpperCase %d", x);
  // else
  //   printf("LowerCase %d", x);
  //----------------------
  // concept 2 more efficient
  if (x >= 'a' && x <= 'z')
    printf("LowerCase");
  else if (x >= 'A' && x <= 'Z')
    printf("UpperCase");
  else printf("Not an Alphabet");
  return 0;
} */

/* // 5. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d", &a);
  if (a % 2 == 0 && a % 3 == 0)
    printf("this number is divisible by 3 and 2 also %d", a);
  else
    printf("Not Divisible by 2 and 3");
  return 0;
} */

/* // 6. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d", &a);
  if (a % 3 == 0 || a % 7 == 0)
    printf("%d number is divisible by 7 and 3 also", a);
  else
    printf("Not Divisible by 7 and 3");
  return 0;
} */

/* // 7. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d", &a);
  if (a < 0)
    printf("this number is Negative");
  else if (a > 0)
    printf("this number is positive");
  else
    printf("this number is Zero");
  return 0;
} */

/* // 8. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a alphabet: ");
  scanf("%c", &x);
  if (x >= 'A' && x <= 'Z')
    printf("UpperCase ");
  else if (x >= 'a' && x <= 'z')
    printf("LowerCase ");
  else if (x >= '0' && x <= '9')
    printf("Digits ");
  else
    printf("Special Character");
  return 0;
} */

/* // 9. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter length of Triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a + b > c && b + c > a && c + a > b)
    printf("valid");
  else
    printf("not valid");
  return 0;
} */

/* // 10. Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Month Number: ");
  scanf("%d", &a);
  if (a == 4 || a == 6 || a == 9 || a == 11)
    printf("Number of days is 30");
  else if (a == 2)
  {
    printf("Number of days is 28");
    }
  else
    printf("Number of days is 31");
  return 0;
} */