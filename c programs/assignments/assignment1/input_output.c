// Assignment-1: Input and output in C Language

/* // 1. Write a program to print Hello Students on the screen.
#include<stdio.h>
int main(){
  printf("Hello students");
  return 0;
} */

/* // 2. Write a program to print Hello in the first line and Students in the second line.
#include<stdio.h>
int main(){
  printf("Hello\nStudents");
  return 0;
} */

/* // 3. Write a program to print "MySirG" on the screen. (Remember to print in double quotes)
#include<stdio.h>
int main(){
  printf("\"MySirG\"");
  return 0;
} */

/* // 4. Write a program to print \n on the screen.
#include<stdio.h>
int main(){
  printf("\\n");
  return 0;
} */

/* // 5. Write a program to print \r on the screen.
#include<stdio.h>
int main(){
  printf("\\r");
  return 0;
} */

/* // 6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes)
#include<stdio.h>
int main(){
  printf("\"Teacher\'s Day\"");
  printf("\"Teacher's Day\"");
  return 0;
} */

/* // 7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter two Numbers");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("sum of %d and %d is %d", a , b ,c);
  return 0;
} */

/* // 8. Write a program to calculate square of a given number. Number is entered by the user.
#include<stdio.h>
int main(){
 int a,b;
  printf("Enter a Numbers");
  scanf("%d",&a);
  b=a*a;
  printf("square of %d is %d", a , b );
  return 0;
} */

/* // 9. Write a program to calculate area of a rectangle. Input appropriate data from the user.
#include <stdio.h>
int main()
{
  int a, b, area;
  printf("Enter length: \n");
  scanf("%d", &a);
  printf("Enter width: \n");
  scanf("%d", &b);
  area = a * b;
  printf("area of rectangle is %d", area);
  return 0;
} */

/* // 10. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
#include<stdio.h>
int main(){
 int r;
 float a;
 //IMP- bcz area point m aa skta h na isiliye float use kiya
  printf("Enter radius for circle");
  scanf("%d",&r);
  a=3.14*r*r;
  printf("Area of circle is %0.2f having the radius %d", a,r);
  return 0;
} */

// Expected output format - "Area of circle is A having the radius R". Replace A with area & R with radius.

/* // 12. find output of below
#include<stdio.h>
int main(){
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}

Explanation
printf("ineuron"):

The printf function prints the string "ineuron" to the console.
It also returns the number of characters printed. Here, "ineuron" has 7 characters.
Therefore, the value of x becomes 7.

printf("%d", x):
This prints the value of x, which is 7.

The output will be: ineuron7 */