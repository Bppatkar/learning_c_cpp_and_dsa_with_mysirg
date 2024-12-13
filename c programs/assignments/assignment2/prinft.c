// Assignment-2: More on printf and scanf

/* // 1. Write a program to calculate average of three integers. Numbers are given by the user.
#include<stdio.h>
int main(){
  int a,b,c;
  float avg;
  printf("Enter three numbers");
  scanf("%d %d %d",&a,&b,&c);
  avg=(a+b+c)/3.0;
  // (a+b+c)/3 ye a,b,c teeno int h or 3 bhi int hto int+int = int but avg to points m aa skta h na to 0.3 liya ya fir int a,b,c ko direct float a,b,c le skte h
  printf("average of numbers is %0.2f", avg );
  return 0;
} */

/* // 2. Write a program to calculate circumference of a circle.
#include<stdio.h>
int main(){
  float r, cir;
  printf("Enter radius for circle");
  scanf("%f",&r);
  cir=2*3.14*r;
  printf("circumference of circle is %0.2f", cir );
  return 0;
} */

/* // 3. Write a program to calculate simple interest.
#include<stdio.h>
int main(){
  float p,r,t,SI;
  printf("Enter the value of P, R, and T:");
  scanf("%f %f %f",&p, &r, &t);
  SI=(p*r*t)/100.;
  // ye 100 ko 100.0 likh skte h.. smjh gae na 1st question m bataya h ki aisa kyu ya fir float m likho sb
  printf("simple intrest is %0.2f", SI );
  return 0;
} */

/* // 4. Write a program to calculate volume of a cuboid.
#include<stdio.h>
int main(){
  float l,w,h,vol;
  printf("Enter the value of length, width, and height:");
  scanf("%f %f %f",&l, &w, &h);
  vol=l*w*h;
  printf("volume of cuboid is %0.2f", vol );
  return 0;
} */

/* // 5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.

#include<stdio.h>
int main(){
  float cp,sp,profit;
  printf("Enter the cp and sp:");
  scanf("%f %f",&cp, &sp);
  profit=(sp- cp) * 25/12;
  printf("Total profit %.2f", profit );
  return 0;
} */

/* // 6. Write a program to input a character from the user and print its ASCII code.

#include<stdio.h>
int main(){
 char a;
  printf("Enter a character:");
  scanf("%c",&a);
  printf("ASCII code of %d is",a );
  return 0;
} */

/* // 7. Write a program to input an ASCII code from the user and print its corresponding character.
#include<stdio.h>
int main(){
 int a;
  printf("Enter a integer:");
  scanf("%d",&a);
  printf("ASCII code of %c ",a );
  return 0;
}
 */

/* // 8. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include<stdio.h>
int main(){
  char x,y,z;
  printf("Enter a three char:");
  scanf("%c %c %c",&x,&y,&z);
  printf("ASCII code of %c is %d\n ",x,x );
  printf("ASCII code of %c is %d\n ",y,y );
  printf("ASCII code of %c is %d\n ",z,z );
  return 0;
} */

/* // 9. WAP to take date as an input in below given format and convert the date format and display the result as given below. User Input date format - "DD/MM/YYYY" (27/11/2022) Output format - "Day - DD, Month - MM, Year - YYYY" (Day-27, Month - 07, Year - 2022)
#include<stdio.h>
int main(){
  int d,m,y;
  printf("Enter a Date (D/M/Y):");
  scanf("%d/%d/%d",&d,&m,&y);
  printf("Day -%02d, Month - %02d and Year -%d",d,m,y );
  return 0;
}
 */

/* // 10. WAP to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format - "HH:MM"
// Output format - "HH hour and MM Minute"

#include<stdio.h>
int main(){
  int h, m;
  printf("Enter a h and m:");
  scanf("%d%d:%d%d",&h,&m);
  printf("%02d Hour and %02d Minute",h,m);
  return 0;
} */