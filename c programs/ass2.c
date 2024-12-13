// Assignment-2: More on printf and scanf

/* // 1. Write a program to calculate average of three integers. Numbers are given by the user.
#include<stdio.h>
int main(){
  int a, b,c;
  float avg;
  printf("enter three numbers");
  scanf("%d %d %d",&a,&b, &c);
  avg = (a+b+c)/3;
printf("avg of the number is %0.2f", avg); 
  return 0;
} */

/* // 2. Write a program to calculate circumference of a circle.
#include<stdio.h>
int main(){
  float r, c;
  printf("enter radius for circumference");
  scanf("%f",&r);
c = 2*3.14*r;
printf("circumference of circle is %0.2f", c); 
  return 0;
} */

/* // 3. Write a program to calculate simple interest.
#include<stdio.h>
int main(){
  float p, r, t, SI;
  printf("enter P, R and T");
  scanf("%f %f %f",&p, &r, &t);
SI = (p*r*t)/100;
printf("si  is %0.2f",SI ); 
  return 0;
}
 */

/* // 4. Write a program to calculate volume of a cuboid.
#include<stdio.h>
int main(){
  float l,w,h, vol;
  printf("enter lenght, widtha and height");
  scanf("%f %f %f",&l, &w, &h);
vol = l*w*h;
printf("volume of cubiod is %0.2f", vol); 
  return 0;
} */

/* // 5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include<stdio.h>
int main(){
  float cp, sp, profit;
  printf("enter cp and sp");
  scanf("%f %f",&cp, &sp);
profit = (sp-cp)*25/12;
printf("profit is %0.2f", profit); 
  return 0;
} */


/* // 6. Write a program to input a character from the user and print its ASCII code.
#include<stdio.h>
int main(){
  char c;
  printf("enter character: ");
  scanf("%c",&c);
  printf("ASCII code of %c is %d", c); 
  return 0;
} */


/* // 7. Write a program to input an ASCII code from the user and print its corresponding character.
#include<stdio.h>
int main(){
  int a;
  printf("enter ASCII code: ");
  scanf("%d",&a);
  printf("ASCII code of %d is %c", a ,a); 
  return 0;
} */

/* // 8. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include<stdio.h>
int main(){
  char a, b,c;
  printf("enter 3 Character for ASCII code (not number): ");
  scanf(" %c %c %c",&a,&b,&c);
  printf("ASCII code of %c is %d\n",a,a); 
  printf("ASCII code of %c is %d\n",b,b); 
  printf("ASCII code of %c is %d\n",c,c);   
  return 0;
} */

/* // 9. WAP to take date as an input in below given format and convert the date format and display the result as given below. User Input date format - "DD/MM/YYYY" (27/11/2022) Output format - "Day - DD, Month - MM, Year - YYYY" (Day-27, Month - 07, Year - 2022)
#include<stdio.h>
int main(){
  int d,m,y;
  printf("enter (DD/MM/YYYY): ");
  scanf("%d/%d/%d",&d,&m,&y);
  printf("Day - %02d , Month - %02d , Year - %d:",d,m,y); 
  return 0;
} */


/* // 10. WAP to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format - "HH:MM"
// Output format - "HH hour and MM Minute"
#include<stdio.h>
int main(){
  int h,m;
  printf("enter hour and minutes: ");
  scanf("%d:%d",&h, &m);
  printf("%02d hour and %02d Minute:",h,m); 
  return 0;  
}
 */

