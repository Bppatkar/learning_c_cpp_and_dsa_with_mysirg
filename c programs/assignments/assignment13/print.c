// Assignment - 13: Switch Case Control

//! Q1. Write a program which takes the month number as an input and displays the number of days in that month.
/* #include <stdio.h>
int daysInMonth(int month){
  switch (month){
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
  case 2:
    return 28;
  default:
    return 31;
  }
}

int main(){
  int month;
  printf("Enter month number: ");
  scanf("%d", &month);

  if (month < 1 || month > 12)
    printf("Invalid Month number\n");
  else
  {
    int numDays = daysInMonth(month);
    printf("Number of days in month %d: %d\n", month, numDays);
  }
  return 0;
} */

//! Q2. Write a menu-driven program with the following options:
//! 2.1.Addition
//! 2.2.Subtraction
//! 2.3.Multiplication
//! 2.4.Division
//! 2.5.Exit

/* #include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

int divide(int a, int b)
{
  if (b == 0)
  {
    printf("Error: Division by zero\n");
    return 0; // Or handle the error differently
  }
  return a / b;
}

int main()
{
  int choice, a, b;
  while (1){
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Exit\n");
    printf("Enter a number: ");
    scanf("%d", &choice);

    switch (choice){
    case 1:
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Sum is %d\n", add(a, b));
      break;
    case 2:
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Subtraction is %d\n", subtract(a, b));
      break;
    case 3:
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Multiplication is %d\n", multiply(a, b));
      break;
    case 4:
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Division is %d\n", divide(a, b));
      break;
    case 5:
      exit(0);
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
} */

//! Q3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
/* #include <stdio.h>

void greetDay(int day)
{
  switch (day)
  {
  case 1:
    printf("It's Monday! Have a productive day.\n");
    break;
  case 2:
    printf("It's Tuesday! Keep up the good work.\n");
    break;
  case 3:
    printf("It's Wednesday! Hump day is here!\n");
    break;
  case 4:
    printf("It's Thursday! Almost there!\n");
    break;
  case 5:
    printf("It's Friday! Time to unwind.\n");
    break;
  case 6:
    printf("It's Saturday! Enjoy the weekend!\n");
    break;
  case 7:
    printf("It's Sunday! Relax and recharge.\n");
    break;
  default:
    printf("Invalid day number. Please enter a number between 1 and 7.\n");
  }
}

int main()
{
  int day;
  printf("Enter a day number (1-7): ");
  scanf("%d", &day);
  greetDay(day);
  return 0;
} */

//! Q4. Write a menu-driven program with the following options:
//! 4.1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.
//! 4.2. Check whether a given set of three numbers are lengths of sides of a right-angled triangle or not
//! 4.3. Check whether a given set of three numbers are lengths of an equilateral triangle or not
//! 4.4. Exit

/* #include <stdio.h>

int isTriangle(int a, int b, int c)
{
  return (a + b > c && b + c > a && c + a > b);
}

int isIsosceles(int a, int b, int c)
{
  return (a == b || b == c || c == a);
}

int isRightAngled(int a, int b, int c)
{
  int largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
  if (largest == a)
    return (a * a == b * b + c * c);
  else if (largest == b)
    return (b * b == a * a + c * c);
  else
    return (c * c == a * a + b * b);
}

int isEquilateral(int a, int b, int c)
{
  return (a == b && b == c);
}

int main()
{
  int choice, a, b, c;

  while (1)
  {
    printf("1. Isosceles triangle or not\n");
    printf("2. Right-angled triangle or not\n");
    printf("3. Equilateral triangle or not\n");
    printf("4. Exit\n");
    printf("Enter a number (1-4): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3)
    {
      printf("Enter three sides: ");
      scanf("%d %d %d", &a, &b, &c);
      if (!isTriangle(a, b, c))
        printf("The given sides do not form a valid triangle.\n");
      else
      {
        switch (choice)
        {
        case 1:
          printf("%s Isosceles triangle\n", isIsosceles(a, b, c) ? "" : "Not ");
          break;
        case 2:
          printf("%s Right-angled triangle\n", isRightAngled(a, b, c) ? "" : "Not ");
          break;
        case 3:
          printf("%s Equilateral triangle\n", isEquilateral(a, b, c) ? "" : "Not ");
          break;
        }
      }
    }
    else if (choice == 4)
    {
      printf("Exiting the program. Goodbye!\n");
      return 0;
    }
    else
      printf("Invalid choice. Please enter a number between 1 and 4.\n");
  }
} */

//! Q5. Convert the following if-else-if construct into switch case:
/* if (var == 1)
  printf("good");
else if (var == 2)
  printf("better");
else if (var == 3)
  printf("best");
else
  printf("invalid"); */

/* #include <stdio.h>
void printResult(int var)
{
  switch (var)
  {
  case 1:
    printf("good\n");
    break;
  case 2:
    printf("better\n");
    break;
  case 3:
    printf("best\n");
    break;
  default:
    printf("invalid\n");
  }
}

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printResult(num);
  return 0;
} */

//! Q6. Write a program to find and display the grade obtained by a student in a test. Grading specifications are as follows:
/*
Marks from 90 to 100: Grade A
Marks from 80 to less than 90: Grade B
Marks from 70 to less than 80: Grade C
Marks from 60 to less than 70: Grade D
Marks from 50 to less than 60: Grade E
Marks below 50: Grade F
Marks greater than 100 or less than 0: Invalid Marks
*/

/* #include <stdio.h>

char getGrade(int marks)
{
  switch (marks)
  {
  case 90 ... 100:
    return 'A';
  case 80 ... 89:
    return 'B';
  case 70 ... 79:
    return 'C';
  case 60 ... 69:
    return 'D';
  case 50 ... 59:
    return 'E';
  case 0 ... 49:
    return 'F';
  default:
     return 'I'; // Invalid Marks
  }
}

int main()
{
  int marks;
  printf("Enter the marks: ");
  scanf("%d", &marks);

  if (marks < 0 || marks > 100)
    printf("Invalid Marks\n");
  else
  {
    char grade = getGrade(marks);
    printf("Grade: %c\n", grade);
  }
  return 0;
} */

//! Q7. Write a menu-driven program with the following options:
//! 7.1 Factorial of a number
//! 7.2 Check Even and Odd
//! 7.3 Area of a circle
//! 7.4 Sum of the first N natural numbers
//! 7.5 Exit

/* #include<stdio.h>

int factorial(int n){
  int sum = 1;
  for (int i = 1; i <= n; i++)
  {
    sum *= i;
  }
  return sum;
}

int isEven(int num){
  return (num % 2 == 0);
}

float areaOfCircle(float r){
  return 3.14 * r * r;
}

int sumOfN(int n){
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}

int main(){
  int choice, num;
  float r;

  while (1)  {
    printf("\nMenu:\n");
    printf("1. Factorial of a number\n");
    printf("2. Check Even and Odd\n");
    printf("3. Area of a circle\n");
    printf("4. Sum of the first N natural numbers\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)    {
    case 1:
      printf("Enter a number: ");
      scanf("%d", &num);
      printf("Factorial is %d\n", factorial(num));
      break;
    case 2:
      printf("Enter an integer: ");
      scanf("%d", &num);
      printf("%d is %s\n", num, isEven(num) ? "Even" : "Odd");
      break;
    case 3:
      printf("Enter the radius of a circle: ");
      scanf("%f", &r);
      printf("Area of circle is %.2f\n", areaOfCircle(r));
      break;
    case 4:
      printf("Enter a positive integer: ");
      scanf("%d", &num);
      printf("Sum of first %d natural numbers is %d\n", num, sumOfN(num));
      break;
    case 5:
      printf("Exiting the program. GoodBye!\n");
      return 0;
    default:
      printf("Invalid choice! Please choose between 1 and 5\n");
    }
  }
} */

//! Q8. Write a program to check whether a given character is an uppercase alphabet, lowercase alphabet, or some other special character, using a switch case statement.
/* #include <stdio.h>
void classifyCharacter(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
    printf("The character is an uppercase alphabet.\n");
  else if (ch >= 'a' && ch <= 'z')
    printf("The character is a lowercase alphabet.\n");
  else
    printf("The character is a special character.\n");
}

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  classifyCharacter(ch);
  return 0;
} */

//! Q9. Write a program to check whether a given character is a vowel, consonant, or some other special character, using a switch case statement.
/* #include <stdio.h>
void classifyCharacter(char ch){
switch (ch)
  {
  case 'a':  case 'e':  case 'i':  case 'o':  case 'u':
  case 'A':  case 'E':  case 'I':  case 'O':  case 'U':
    printf("The character is a vowel.\n");
    break;
  case 'b' ... 'd' :  case 'f' ... 'h' :
  case 'j' ... 'n' :  case 'p' ... 't' :
  case 'v' ... 'z' :  case 'B' ... 'D' :
  case 'F' ... 'H' :  case 'J' ... 'N' :
  case 'P' ... 'T' :  case 'V' ... 'Z' :
    printf("The character is a Constant.\n");
    break;
  default:
    printf("The character is a special character.\n");
  }
}

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  classifyCharacter(ch);
  return 0;
} */

// Q10. Write a menu-driven program with the following options:
//! 10.1 Calculate LCM of two numbers
//! 10.2 Calculate the sum of the digits of a number
//! 10.3 Volume of a cuboid
//! 10.4 Check whether a given number is prime or not
//! 10.5 Exit

/* #include <stdio.h>

int sumOfDigits(int num){
  int sum = 0;
  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int volumeOfCuboid(int length, int width, int height){
  return length * width * height;
}

int main(){
  int choice, x, y, length, width, height;

  while (1)  {
    printf("\nMenu:\n");
    printf("1. Calculate LCM of two numbers\n");
    printf("2. Calculate the sum of the digits of a number\n");
    printf("3. Volume of a cuboid\n");
    printf("4. Check whether a given number is prime or not\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)    {
    case 1:
      printf("Enter two numbers for LCM: ");
      scanf("%d %d", &x, &y);
      int i;
      for (i = (x > y) ? x : y; i <= x * y; i++)
      {
        if (i % x == 0 && i % y == 0)
        {
          printf("LCM of %d and %d is %d\n", x, y, i);
          break;
        }
      }
      break;
    case 2:
      printf("Enter a number: ");
      scanf("%d", &x);
      printf("Sum of digits of %d is %d\n", x, sumOfDigits(x));
      break;
    case 3:
      printf("Enter length, width, and height: ");
      scanf("%d %d %d", &length, &width, &height);
      printf("Volume of the cuboid is %d\n", volumeOfCuboid(length, width, height));
      break;
    case 4:
      printf("Enter a number: ");
      scanf("%d", &x);
      if (x <= 1)
      {
        printf("Not prime\n");
      }
      else
      {
        for (int i = 2; i <= x / 2; i++)
        {
          if (x % i == 0)
          {
            printf("Not Prime\n");
            break;
          }
        }
        if (i > x / 2)
          printf("%d is prime\n", x);
      }
      break;
    case 5:
      printf("Exiting the program. GoodBye!\n");
      return 0;
    default:
      printf("Invalid choice! Please choose between 1 and 5.\n");
    }
  }
} */