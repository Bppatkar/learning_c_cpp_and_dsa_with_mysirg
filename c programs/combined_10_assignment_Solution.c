// TODO: **Assignment 1: Input and Output in C Language**

/* //? 1. Write a program to print Hello Students on the screen.
#include<stdio.h>
int main(){
  printf("Hello Students");
  return 0;
} */

/* //? 2. Write a program to print "Hello Students" on the first line and "Students" on the second line.
#include <stdio.h>
int main()
{
  printf("Hello\nStudents");
  return 0;
} */

/* //? 3. Write a program to print "MySirG" on the screen.
#include <stdio.h>
int main()
{
  printf("MySirG\n");
  return 0;
} */

/* //? 4. Write a program to print '\n' on the screen.
#include <stdio.h>
int main()
{
  printf("\\n");
  return 0;
} */

/* //? 5. Write a program to print '\r' on the screen.
#include <stdio.h>
int main()
{
  printf("\\r");
  return 0;
} */

/* //? 6. Write a program to print "Teacher's Day" on the screen.
#include <stdio.h>
int main()
{
  printf("Teacher's Day");
  return 0;
} */

/* //? 7. Write a program to calculate the sum of two integers.
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("sum of %d and %d is %d", a, b, a + b);
  return 0;
} */

/* //? 8. Write a program to calculate the square of a given number.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("square of %d is %d", a, a * a);
  return 0;
} */

/* //? 9. Write a program to calculate the area of a rectangle.
#include <stdio.h>
int main()
{
  int w, h;
  printf("Enter width and height: ");
  scanf("%d %d", &w, &h);
  printf("area of rectangle is %d", w * h);
  return 0;
} */

/* //? 10. Write a program to find the area of a circle.
#include <stdio.h>
int main()
{
  float r;
  printf("Enter radius: ");
  scanf("%f", &r);
  printf("area of circle is %0.2f", 3.14 * r * r);
  return 0;
} */
// __________________________________________

// TODO: **Assignment 2: More on printf and scanf**

/* //? 11. Write a program to calculate the average of three integers.
#include <stdio.h>
int main()
{
  float a, b, c;
  printf("Enter three numbers: ");
  scanf("%f %f %f", &a, &b, &c);
  printf("average of three integers is %0.2f", (a + b + c) / 3);
  return 0;
}
 */

/* //? 12. Write a program to calculate the circumference of a circle.
#include <stdio.h>
int main()
{
  float r;
  printf("Enter radius: ");
  scanf("%f", &r);
  printf("circumference of circle is %0.2f", 2 * 3.14 * r);
  return 0;
} */

/* //? 13. Write a program to calculate simple interest.
#include <stdio.h>
int main()
{
  float p, r, t, SI;
  printf("Enter Principle, Rate, and Time: ");
  scanf("%f %f %f", &p, &r, &t);
  SI = (p * r * t) / 100;
  printf("SI is %0.2f", SI);
  return 0;
} */

/* //? 14. Write a program to calculate the volume of a cuboid.
#include <stdio.h>
int main()
{
  int l, b, h;
  printf("Enter length,width and height: ");
  scanf("%d %d %d", &l, &b, &h);
  printf("Volume of Cuboid is %d", l * b * h);
  return 0;
} */

/* //? 15. Write a program to ask the user about the cost price and selling price of bananas per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include <stdio.h>
int main()
{
  float cp, sp, profit;
  printf("Enter cp and sp: ");
  scanf("%f %f", &cp, &sp);
  profit = (sp - cp) * 25 / 12;
  printf("Profit is %0.2f", profit);
  return 0;
} */

/* //? 16. Write a program to input a character from the user and print its ASCII code.
#include <stdio.h>
int main()
{
  char a;
  printf("Enter a character: ");
  scanf("%c", &a);
  printf("ASCII code of %c is %d", a);
  return 0;
} */

/* //? 17. Write a program to input an ASCII code from the user and print its corresponding character.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a ASCII code: ");
  scanf("%d", &a);
  printf("character of corresponding ASCII code is %c", a);
  return 0;
} */

/* //? 18. Write a program to input three characters from the user and display the characters with their corresponding ASCII codes.
#include <stdio.h>
int main()
{
  char a, b, c;
  printf("Enter a character: ");
  scanf("%c %c %c", &a, &b, &c);
  printf("character %c with their corresponding ASCII code is %d\n", a, a);
  printf("character %c with their corresponding ASCII code is %d\n", b, b);
  printf("character %c with their corresponding ASCII code is %d\n", c, c);
  return 0;
} */

/* //? 19. Write a program to take date as an input in below given format and convert the date format and display the result as given below. User Input date format - "DD/MM/YYYY" (27/11/2022) Output format - "Day - DD, Month - MM, Year - YYYY" (Day-27, Month - 07, Year - 2022)
#include <stdio.h>
int main()
{
  int d, m, y;
  printf("Enter DD/MM/YYYY: ");
  scanf("%d/%d/%d", &d, &m, &y);
  printf("Day - %02d, Month - %02d, Year - %d", d, m, y);
  return 0;
} */

/* //? 20. Write a program to take time as input in below given format and convert the time format and display the result as given below.
//? User Input date format - "HH:MM"
//? Output format - "HH hour and MM Minute"
#include <stdio.h>
int main()
{
  int h, m;
  printf("Enter HH:MM ");
  scanf("%d:%d", &h, &m);
  printf("%02d hour and %02d Minute", h, m);
  return 0;
} */
// __________________________________________

// TODO: **Assignment 3: Operators in C Language**
/* //? 21. Write a program to calculate the size of a character constant.
#include <stdio.h>
int main()
{
  int x;
  x = sizeof('A');
  printf("Size of character is %d", x);
  return 0;
} */

/* //? 22. Write a program to calculate the size of a real constant.
#include <stdio.h>
int main()
{
  int x;
  x = sizeof(2.3);
  printf("Size of character is %d", x);
  return 0;
} */

/* //? 23. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
#include <stdio.h>
int main()
{
  char x = 'A';
  printf("before increment %c\n", x);
  x++;
  printf("after increment %c", x);
  return 0;
} */

/* //? 24. Write a program to print the unit digit of a given number.  [unit digit means right most digit]
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a numbe: ");
  scanf("%d", &a);
  b = a % 10;
  printf("unit digit of %d is %d", a, b);
  return 0;
} */

/* //? 25. Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a numbe: ");
  scanf("%d", &a);
  b = a / 10;
  printf("unit digit of %d is %d", a, b);
  return 0;
} */

/* //? 26 IMP. Write a program to swap the values of two int variables.
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter Two Numbers: ");
  scanf("%d %d", &a, &b);
  printf("entered value a=%d,b=%d\n", a, b);
  c = a;
  a = b;
  b = c;
  printf("after swapping value a=%d,b=%d", a, b);
  return 0;
} */

/* //? 27 IMP. Write a program to swap the values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a number: ");
  scanf("%d %d", &a, &b);
  printf("entered number a=%d,b=%d\n", a, b);
  b = b - a;
  a = a + b;
  b = a - b;
  printf("swapped number a=%d,b=%d", a, b);
  return 0;
} */

/* //? 28 IMP. Write a program to swap values of two int variables without using third variable and without using +, - operators. [Note: that this can cause issues if b is zero]
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a number: ");
  scanf("%d %d", &a, &b);
  printf("entered number a=%d,b=%d\n", a, b);
  a = a * b;
  b = a / b;
  a = a / b;
  printf("swapped number a=%d,b=%d", a, b);
  return 0;
} */

/* //? 29 IMP. Write a program to swap the values of two int variables without using a third variable and without using arithmetic operators.
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a number: ");
  scanf("%d %d", &a, &b);
  printf("entered number a=%d,b=%d\n", a, b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("swapped number a=%d,b=%d", a, b);
  return 0;
} */

/* //? 30 IMP . Write a program to swap the values of two int variables using a single-line arithmetic expression.
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a number: ");
  scanf("%d %d", &a, &b);
  printf("entered number a=%d,b=%d\n", a, b);
  a = (a * b) / (b = a);
  printf("swapped number a=%d,b=%d", a, b);
  return 0;
} */
// __________________________________________

// TODO: **Assignment 4: More on Operators in C Language**
/* //? 31. Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
  int a, b, c, sum;
  printf("Enter three number: ");
  scanf("%d %d %d", &a, &b, &c);
  sum = a + b + c;
  printf("sum of numbers is %d", sum);
  return 0;
} */

/* //? 32. Write a program to find the ASCII code of the character '+'.
#include <stdio.h>
int main()
{
  char x = '+';
  printf("ASCII code of %c is %d", x, x);
  return 0;
} */

/* //? 33. Write a program to print the size of an int, a float, a char, and a double type variable.
#include <stdio.h>
int main()
{
  int a;
  char b;
  float c;
  double d;
  printf("sizeof is %d\n", sizeof(a));
  printf("sizeof is %d\n", sizeof(b));
  printf("sizeof is %d\n", sizeof(c));
  printf("sizeof is %d\n", sizeof(d));
  return 0;
} */

/* //? 34. Write a program to make the last digit of a number zero. (Example: if x=2345 then make it x=2340)
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a number: ");
  scanf("%d", &a);
  // b = a % 10;
  // a = a - b;
  // printf("number is %d", a);
  b = a / 10 * 10;
  printf("number is %d", b);
  return 0;
} */

/* //? 35. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
#include <stdio.h>
int main()
{
  int num, digit;
  printf("Enter a Digit and Number you want to append: ");
  scanf("%d %d", &num, &digit);
  digit = digit * 10 + num;
  printf("After Appending, Number is %d", digit);
  return 0;
} */

/* //? 36. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
#include <stdio.h>
int main()
{
  float inr;
  printf("Enter INR: ");
  scanf("%f", &inr);
  inr = inr / 84.23;
  printf("converted rupees is %0.3f", inr);
  return 0;
} */

/* //? 37. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right. [Example - 472 --> 247]
#include <stdio.h>
int main()
{
  // int a, b, c, rotated;
  // printf("Enter a three number: ");
  // scanf("%d", &a);
  // b = (a % 10) * 100;
  // a = a / 10;
  // c = (a % 10) * 10;
  // a = a / 10;
  // rotated = b + c + a;
  // printf("Rotated number is %d", rotated);
  int a;
  printf("enter three digit number ");
  scanf("%d", &a);
  a = a % 10 * 100 + a / 10;
  printf("after reverse %d", a);
  //BUG: new approach- a%10*100=200 + direct 47
  return 0;
} */

//? 38. Evaluate an expression involving operators.What will be the value stored in the variable x after executing the following statement: x=10>8>4;
// x= 1>4 no means ans is 0

//? 39. What will be the value stored in the variable x after executing the following statement: x=!2>-2;
// ans is 1, 2 is truthy means 1 and !1 is 0 and 0>-2 ..true

//? 40. What will be the value stored in the variable x after executing the following statement: x= 3 < 0 && 5 > 0;
// first condition is false then second condition will not check then ans is 0
// __________________________________________

// TODO: **Assignment 5: Decision Control Statements**
/* //? 41. Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a <= 0)
    printf("non-positive");
  else
    printf("positive");
  return 0;
} */

/* //? 42. Write a program to check whether a given number is divisible by 5.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a % 5)
    printf("Not- Divisible by 5");
  else
    printf("Divisible by 5");
  return 0;
} */

/* //? 43. Write a program to check whether a given number is even or odd.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a % 2)
    printf("odd");
  else
    printf("Even");
  return 0;
} */

/* //? 44 IMP. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // // if (a / 2 * 2 == a)
  // // if (a & 1)
  //   printf("odd");
  // else
  //   printf("even");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  while (num > 1)
    num -= 2;
  if (num == 0)
    printf("%d is even\n", num);
  else
    printf("%d is odd\n", num);
  return 0;
} */

/* //? 45 IMP. Write a program to check whether a given number is even or odd using a bitwise operator.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a & 1)
    printf("odd");
  else
    printf("even");
  return 0;
} */

/* //? 46 . Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a > 99 && a <= 999)
    printf("its a three digit number");
  else printf("Not a Three digit Number");
  return 0;
} */

/* //? 47. Write a program to print the greater between two numbers , print one number if both are same.
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  printf("%d", a > b ? a : b);
  return 0;
} */

/* //? 48. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
//? If (𝐷>0): The roots are real and distinct (two different real values).
//? If (𝐷==0): The roots are real and equal (both roots are the same).
//? If (𝐷<0): The roots are imaginary (no real roots, involves complex numbers).

#include <stdio.h>
int main()
{
  int a, b, c, D;
  printf("Enter coefficients a, b, and c: ");
  scanf("%d %d %d", &a, &b, &c);
  D = b * b - 4 * a * c / 2 * a;
  if (D > 0)
    printf("roots are real and distinct");
  if (D == 0)
    printf("roots are real and equal");
  if (D < 0)
    printf("roots are imaginary");
  return 0;
} */

/* //? 49 IMP. Write a program to check whether a given year is a leap year.
#include <stdio.h>
int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    printf("Leap year");
  else
    printf("Not a Leap year");
  return 0;
} */

/* //? 50 IMP. Write a program to find the greatest among three given numbers.
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", a > b ? (a > c ? a : c) : (b > c ? b : c));
  return 0;
} */

// TODO: **Assignment 6: More on Decision Control Statements**
/* //? 51. Write a program to check whether a given number is a three-digit number or not.
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

/* //? 52. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage..
#include <stdio.h>
int main()
{
  float cp, sp;
  float profit, loss;
  printf("Enter CP and SP:- ");
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

/* //? 53. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed..
#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  printf("Enter marks of 5 subjects out of 100: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  if (a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
    printf("Candidate Passed");
  else
    printf("Candidate Failed");
  return 0;
} */

/* //? 54. Write a program to check whether a given alphabet is uppercase or lowercase.
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a alphabet: ");
  scanf("%c", &x);
  // if (x <= 97)
  //   printf("UpperCase %d", x);
  // else
  //   printf("LowerCase %d", x);
  // _______________
  if (x >= 'a' && x <= 'z')
    printf("LowerCase %d", x);
  else if (x >= 'A' && x <= 'Z')
    printf("UpperCase %d", x);
  else
    printf("Invalid");
  return 0;
} */

/* //? 55. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a % 3 == 0 && a % 2 == 0)
    printf("Divisible");
  else
    printf("Not-Divisible");
  return 0;
} */

/* //? 56. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a % 3 == 0 && a % 7 == 0)
    printf("Divisible");
  else
    printf("Not-Divisible");
  return 0;
} */

/* //? 57. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number");
  scanf("%d", &a);
  if (a > 0)
    printf("positive");
  else
    printf("Negative");
  if (a == 0)
    printf("Zero");
  return 0;
}
 */

/* //? 58. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character..
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a alphabet or number: ");
  scanf("%c", &x);
  if (x >= 'a' && x <= 'z')
    printf("alphabet LowerCase");
  else if (x >= 'A' && x <= 'Z')
    printf("alphabet UpperCase");
  else if (x >= '0' && x <= '9')
    printf("digit");
  else
    printf("Special Character");
  return 0;
} */

/* //? 59. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter length of triangle:- ");
  scanf("%d %d %d", &a, &b, &c);
  if (a + b > c && b + c > a && c + a > b)
    printf("Valid");
  else
    printf("Invalid");
  return 0;
} */

/* //? 60. Write a program which takes the month number as an input and display number of days in that month..
#include <stdio.h>
int main()
{
  int num;
  printf("Enter Month Number: ");
  scanf("%d", &num);
  if (num == 4 || num == 6 || num == 9 || num == 11)
    printf("30 Days");
  else if (num == 2)
    printf("28 Days or 29 Days");
  else
    printf("31 Days");
  return 0;
} */

// TODO: **Assignment 7: Iterative Control Statements**
/* //? 61. Write a program to print "MySirG" 5 times.
#include <stdio.h>
int main()
{
  int i = 1;
  while (i <= 5)
  {
    printf("MySirG\n");
    i++;
  }

  return 0;
} */

/* //? 62. Write a program to print the first 10 natural numbers.
#include <stdio.h>
int main()
{
  int i = 1;
  while (i <= 10)
  {
    printf("%d ", i);
    i++;
  }

  return 0;
} */

/* //? 63. Write a program to print the first 10 natural numbers in reverse order.
#include <stdio.h>
int main()
{
  int i = 10;
  while (i >= 1)
  {
    printf("%d ", i);
    i--;
  }
  return 0;
} */

/* //? 64. Write a program to print the first 10 odd natural numbers.
#include <stdio.h>
int main()
{
  int i;
  for (i = 1; i <= 20; i = i + 2)
  {
    printf("%d ", i);
  }
  return 0;
} */

/* //? 65. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
  int i;
  for (i = 20; i > 0; i = i - 2)
  {
    printf("%d ", i-1);
  }
  return 0;
} */

/* //? 66. Write a program to print the first 10 even natural numbers.
#include <stdio.h>
int main()
{
  int i;
  for (i = 2; i <= 20; i += 2)
  {
    printf("%d ", i);
  }
  return 0;
} */

/* //? 67. Write a program to print the first 10 even natural numbers in reverse order.
#include <stdio.h>
int main()
{
  int i;
  for (i = 20; i > 0; i -= 2)
  {
    printf("%d ", i);
  }
  return 0;
} */

/* //? 68. Write a program to print squares of the first 10 natural numbers.
#include <stdio.h>
int main()
{
  int i;
  for (i = 1; i <= 10; i++)
  {
    printf("%d ", i * i);
  }
  return 0;
} */

/* //? 69. Write a program to print cubes of the first 10 natural numbers.
#include <stdio.h>
int main()
{
  int i;
  for (i = 1; i <= 10; i++)
  {
    printf("%d ", i * i * i);
  }
  return 0;
} */

/* //? 70. Write a program to print a table of 5.
#include <stdio.h>
int main()
{
  int i;
  for (i = 1; i <= 10; i++)
  {
    printf("5 * %d = %d\n", i, 5 * i);
  }
  return 0;
} */

// TODO: **Assignment 8: More on Iterative Control Statements**
/* //? 71. Write a program to print "MySirG" N times.
#include <stdio.h>
int main()
{
  int i = 1, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    printf("MySirG\n");
    i++;
  }
  return 0;
} */

/* //? 72. Write a program to print the first N natural numbers.
#include <stdio.h>
int main()
{
  int i = 1, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    printf("%d ", i);
    i++;
  }
  return 0;
} */

/* //? 73. Write a program to print the first N natural numbers in reverse order.
#include <stdio.h>
int main()
{
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);
  while (i > 0)
  {
    printf("%d ", i);
    i--;
  }
  return 0;
} */

/* //? 74. Write a program to print the first N odd natural numbers.
#include <stdio.h>
int main()
{
  int i = 1, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    printf("%d ", i);
    i += 2;
  }
  return 0;
} */

/* //? 75. Write a program to print the first N odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);
  while (i >= 1)
  {
    printf("%d ", i);
    i -= 2;
  }
  return 0;
} */

/* //? 76. Write a program to print the first N even natural numbers.
#include <stdio.h>
int main()
{
  int i = 2, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    printf("%d ", i);
    i += 2;
  }
  return 0;
} */

/* //? 77. Write a program to print the first N even natural numbers in reverse order.
#include <stdio.h>
int main()
{
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);
  while (i >= 2)
  {
    printf("%d ", i);
    i -= 2;
  }
  return 0;
} */

/* //? 78. Write a program to print squares of the first N natural numbers.
#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d ", i * i);
  }
  return 0;
} */

/* //? 79. Write a program to print cubes of the first N natural numbers.
#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d ", i * i * i);
  }
  return 0;
} */

/* //? 80. Write a program to print a table of N.
#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", n, i, n * i);
  }
  return 0;
} */

// TODO: **Assignment 9: Use any loop**
/* //? 81. Write a program to calculate the sum of the first N natural numbers.
#include <stdio.h>
int main()
{
  int i = 1, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i;
    i++;
  }
  printf("%d ", sum);
  return 0;
} */

/* //? 82. Write a program to calculate the sum of the first N even natural numbers.
#include <stdio.h>
int main()
{
  int i = 2, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i;
    i += 2;
  }
  printf("%d ", sum);
  return 0;
} */

/* //? 83. Write a program to calculate the sum of the first N odd natural numbers.
#include <stdio.h>
int main()
{
  int i = 1, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i;
    i += 2;
  }
  printf("%d ", sum);
  return 0;
} */

/* //? 84. Write a program to calculate the sum of squares of the first N natural numbers.
#include <stdio.h>
int main()
{
  int i = 1, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i * i;
    i++;
  }
  printf("%d ", sum);
  return 0;
} */

/* //? 85. Write a program to calculate the sum of cubes of the first N natural numbers.
#include <stdio.h>
int main()
{
  int i = 1, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i * i * i;
    i++;
  }
  printf("%d ", sum);
  return 0;
} */

/* //? 86 IMP. Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
  int n, sum = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n >= 1)
  {
    sum = sum * n;
    n--;
  }
  printf("%d ", sum);
  return 0;
} */

/* //? 87 IMP. Write a program to count digits in a given number.
#include <stdio.h>
int main()
{
  int num, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (i = 0; num > 0; i++)
  {
    num = num / 10;
    // printf("%d", num);
  }
  printf("%d", i);
  return 0;
} */

/* //? 88 MIMP. Write a program to check whether a given number is prime.
#include <stdio.h>
int main()
{
  int num, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num <= 1)
  {
    printf("Not Prime");
    return 0;
  }
  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      printf("Not Prime");
      return 0;
    }
  }

  printf("Prime");
  return 0;
} */

/* //? 89 MIMP. Write a program to calculate the LCM of two numbers.
#include <stdio.h>
int main()
{
  int a, b, i;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  for (i = a > b ? a : b;; i++)
  {
    if (i % a == 0 && i % b == 0)
    {
      printf("%d", i);
      break;
    }
  }
  return 0;
} */

/* //? 90 IMP. Write a program to reverse a given number.
#include <stdio.h>
int main()
{
  int a, x, y = 0;
  printf("Enter a number: ");
  scanf("%d", &a);
  while (a > 0)
  {
    // x = a % 10;
    // y = y * 10 + x;
    // a /= 10;
    // __________
    y = y * 10 + (a % 10), a /= 10;  // updates a by removing its last digit.
  }
  printf("reverse is: %d", y);
  return 0;
} */

// TODO: **Assignment 10: Level up with loops**
/* //? 91 MIMP. Write a program to find the Nth term of the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, i, c, num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (i = 0, a = -1, b = 1; i <= num; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  printf("Fibonacci series is: %d", c);
  return 0;
} */

/* //? 92 IMP. Write a program to print the first N terms of the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, i, c, num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (i = 0, a = -1, b = 1; i <= num; i++)
  {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
  return 0;
} */

/* //? 93 IMP. Write a program to check whether a given number is in the Fibonacci series.
#include <stdio.h>
int main()
{
  int a, b, i, c, num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  for (i = 0, a = -1, b = 1; i <= num; i++)
  {
    c = a + b;
    if (c == num)
    {
      printf("Present\n");
      break;
    }
    else
    {
      printf("Not Present\n");
      break;
    }
    a = b;
    b = c;
  }
  return 0;
} */

/* //? 94 IMP. Write a program to calculate the HCF of two numbers.
#include <stdio.h>
int main()
{
  int a, b, i;
  printf("Enter Two Numbers: ");
  scanf("%d %d", &a, &b);
  for (i = a > b ? a : b; i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
      break;
  }
  printf("HCF is %d\n ", i);
  return 0;
} */

/* //? 95 IMP. Write a program to check whether two given numbers are co-prime.
//? Hint: If the HCF is 1, the numbers are co-prime.
#include <stdio.h>
int main()
{
  int a, b, i;
  printf("Enter Two Numbers: ");
  scanf("%d %d", &a, &b);
  for (i = a > b ? a : b; i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
      break;
  }
  if (i == 1)
    printf("co-prime");
  else  printf("Not co-prime");
  return 0;
} */

/* //? 96 IMP. Write a program to print all prime numbers under 100.
#include <stdio.h>
int main()
{
  int a, i;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  for (a = 2; a <= 100; a++)
  {
    int isPrime = 1;
    for (i = 2; i < a / 2; i++)
    {
      if (a % i == 0)
      {
        isPrime = 0;
        // printf("Not Prime")
        break;
      }
    }
    if (isPrime)
      printf("%d\n", a);
    // printf("Prime")
  }
  return 0;
} */
// __________________________________________
// approach 2
/* #include <stdio.h>
int main()
{
  int l = 2, u = 100, x, i;
  for (x = l; x <= u; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
      {
        break;
      }
    }
    if (i == x)
      printf("%d ", x);
  }
  return 0;
 }*/

/* //? 97 IMP. Write a program to print all prime numbers between two given numbers.
#include <stdio.h>
int main()
{
  int a, i, b, c, start, end;
  printf("Enter two numbers: ");
  scanf("%d %d", &b, &c);

  start = b < c ? b : c;
  end = b > c ? b : c;

  for (a = start; a <= end; a++)
  {
    if (a < 2)
    {
      continue;
    }
    int is_Prime = 1;
    for (i = 2; i <= a / 2; i++)
    {
      if (a % i == 0)
      {
        is_Prime = 0;
        break;
      }
    }
    if (is_Prime)
      printf("%d\n", a);
  }
  return 0;
} */
// _______________________________________________
/* //approach 2
#include <stdio.h>
int main() {
    int a, i, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &b, &c);

    // Ensure b is smaller, c is larger
    int start = b < c ? b : c, end = b > c ? b : c;

    for (a = start; a <= end; a++) {
        if (a < 2) continue; // Skip non-prime numbers
        for (i = 2; i <= a / 2 && a % i != 0; i++);
        if (i > a / 2) printf("%d\n", a); // Print if prime
    }
    return 0;
} */
// _______________________________________________
// approach 3
/* #include <stdio.h>
int main()
{
  int a, b, x, i;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  for (x = a; x <= b; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
      {
        break;
      }
    }
    if (i == x)
      printf("%d ", x);
  }
  return 0;
} */

/* //? 98 IMP. Write a program to find the next prime number of a given number.
#include <stdio.h>
int main()
{
  int a, i, num;
  printf("Enter a number: ");
  scanf("%d", &a);
  for (num = a + 1;; num++)
  {
    int is_prime = 1;
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        is_prime = 0;
        break;
      }
    }
    if (is_prime)
    {
      printf("Next prime number is %d\n", num);
      break;
    }
  }
  return 0;
} */
// ____________________________________________
/* // approach 2
#include <stdio.h>
int main()
{
  int a, x, i;
  printf("Enter a number: ");
  scanf("%d", &a);
  for (x = a + 1;; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
      {
        break;
      }
    }
    if (i == x) // means it is prime
    {
      printf("next prime number is %d ", x);
      break;
    }
  }

  return 0;
} */

/* //? 99. Write a program to check whether a given number is an Armstrong number.
#include <stdio.h>
int main()
{
  int num, TempNum, sum = 0, digit, power = 1, n = 0, i;
  printf("Enter a number: ");
  scanf("%d", &num);

  // Preserve the original number for comparison
  TempNum = num;

  // Count the number of digits
  for (n = 0; TempNum; n++)
    TempNum /= 10;

  // Reset TempNum to the original number
  // TempNum ko dubara original number pe set kiya gaya taaki hum firse use digit-by-digit process kar sakein
  TempNum = num;

  // Calculate the sum of powers of digits
  for (TempNum = num; TempNum; TempNum /= 10)
  {
    digit = TempNum % 10;
    power = 1; // Reset power for each digit

    // Calculate the digit raised to the power of 'n'
    for (i = 1; i <= n; i++)
      power *= digit;

    sum += power;
  }

  // Check if the number is an Armstrong number
  if (sum == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
} */

/* //? 100. Write a program to print all Armstrong numbers under 1000.
#include <stdio.h>
int main()
{
  int num, TempNum, sum = 0, digit, power = 1, n = 0, i;
  for (num = 1; num <= 1000; num++) // here i made changes
  {
    TempNum = num;
    n = 0; // here is made changes  n=0
    for (n = 0; TempNum; n++)
      TempNum /= 10;
    TempNum = num;

    for (TempNum = num, sum = 0; TempNum; TempNum /= 10) // here is made changes sum=0
    {
      digit = TempNum % 10;
      power = 1;

      for (i = 1; i <= n; i++)
        power *= digit;

      sum += power;
    }

    if (sum == num)
      printf("%d is an Armstrong number.\n", num);
  }

  return 0;
} */
