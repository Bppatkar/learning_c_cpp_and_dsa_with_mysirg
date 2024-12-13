// Assignment-4: More on Operators in C Language

/* // 1. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
  int a,sum;
  printf("enter three digit number ");
  scanf("%d",&a);
  // if(a>99 && a<=999) {c= a%10; a=a/10;}
  // if(a){ b= a%10; a=a/10;}
  // printf("Sum of Three digits is %d", c+b+a);
  // in above code you are using if condition unnecessary and u also have to store variable b and c
  sum = a/100+a/10%10+a%10;
  printf("Sum of digit %d", sum);
  return 0;
} */

/*  // 2. Write a program to find ASCII code of the character '+'.
#include<stdio.h>
int main(){
  char a = '+';
  printf("ASCII code is: %d",a);
  return 0;
}  */

/* // 3. Write a program to print size of an int, a float, a char, and a double type variable.
#include<stdio.h>
int main(){
  printf("size of variable is %d\n", sizeof(int));
  printf("size of variable is %d\n", sizeof(float));
  printf("size of variable is %d\n", sizeof(char));
  printf("size of variable is %d\n", sizeof(double));
  return 0;
} */

/* // 4. Write a program to make the last digit of a number stored in a variable as zero. (Example: if x=2345 then make it x=2340)
#include<stdio.h>
int main(){
  int x;
  printf("Enter value for x: ");
  scanf("%d",&x);
  //tareeka 1
  // y=x%10;
  // x=x-y;
  // printf("%d",x);
  //tareeka 2
  x=x/10*10;
  printf("%d",x);
  return 0;
} */

/* // 5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
#include<stdio.h>
int main(){
  int num , digit, result;
  printf("enter a number and digit: ");
  scanf("%d %d",&num , &digit);
  result = (num*10) + digit;
  printf("Num %d and Digit %d by adding is %d",num, digit, result);
  return 0;
} */

/* // 6. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main(){
  int a;
  printf("Enter INR Amount: ");
  scanf("%d",&a);
  float y = 84.23;
  printf("Converted USD into INR is %0.2f", a/y);
  return 0;
} */

// 7. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right. [Example - 472 --> 247]

//approch 

/* #include<stdio.h>
int main(){
  int a,b,c,rev;
  printf("enter three digit number ");
  scanf("%d",&a);
  c= a%10; a=a/10;
  b= a%10; a=a/10;
  // printf("%d %d %d", a,b,c);
  rev=c*100+a*10+b;
  printf("after reverse %d", rev);
  return 0;
} */

//approch 2

/* #include<stdio.h>
int main(){
  int a;
  printf("enter three digit number ");
  scanf("%d",&a);
  a=a%10*100+a/10;
  printf("after reverse %d", a);
  return 0;
} */ 


// 8. What will be the value stored in the variable x after executing the following statement: x=10>8>4;
// x = 10>8>4;
// there is 4 operators first we will solve (10>8  which is true) means 1
// then x = 1 > 4 which is false means 0
// so ans is 0;

// 9. What will be the value stored in the variable x after executing the following statement: x=!2>-2;
// ans  is 1 (true) !2 is 0 and 0 > -2 

// 10. What will be the value stored in the variable x after executing the following statement: 
// x= 3 < 0 && 5 > 0;
// first condition is false then second condition will not check then ans is 0





