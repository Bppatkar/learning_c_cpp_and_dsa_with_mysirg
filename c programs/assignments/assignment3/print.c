// Assignment-3: Operators in C Language

/*  // 1. Write a program to calculate size of a character constant.
#include<stdio.h>
int main(){
  int x;   
  x= sizeof('A');  
  printf("size of character constant is %d:", x);
  return 0;
} */

/*  // 2. Write a program to calculate size of a real constant.
#include<stdio.h>
int main(){
  int x;
  x = sizeof(2.3);
  printf("size of real constant is %d:", x);
  return 0;
}  */

/*  // 3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
#include<stdio.h>
int main(){
  char x = 'A';
  printf("before increment %c\n", x);
  x++;
  printf("after increment %c", x);
  return 0;
} */ 

/* // 4. Write a program to print unit digit of a given number [unit digit means right most digit]
#include<stdio.h>
int main(){
  int num;
  printf("enter number: ");
  scanf("%d",&num);
    printf("unit digit %d", num%10);
  return 0;
}  */

/*  // 5. Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
  int num;
  printf("enter number: ");
  scanf("%d",&num);
  printf("without last digit %d", num/10);
  return 0;
}  */

/* // 6. Write a program to swap values of two int variables
#include<stdio.h>
int main(){
  int a, b,c;
  printf("enter value for a and b: ");
  scanf("%d %d",&a, &b);
  c = a;
  a = b;
  b = c;
  printf("swapped value of a and b is %d %d", a, b);
  return 0;
} */

/* // 7. Write a program to swap values of two int variables without using a third variable.
 #include<stdio.h>
int main(){
  int a, b;
  printf("Enter value of a and b: ");
  scanf("%d %d", &a, &b);
  printf("before swap a=%d , b=%d\n",a,b);
  a= a+b;
  b=a-b;
  a=a-b;
  printf("after swap a=%d , b=%d",a,b);
  return 0;
} */ 

/* // 8. Write a program to swap values of two int variables without using third variable and without using +, - operators. [Note: that this can cause issues if b is zero]
#include<stdio.h>
 int main(){
  int a, b;
  printf("Enter value of a and b: ");
  scanf("%d %d", &a, &b);
  printf("before swap a=%d , b=%d\n",a,b);
  a= a*b;
  b=a/b;
  a=a/b;
  printf("after swap a=%d , b=%d",a,b);
  return 0;
} */

/* // 9. Write a program to swap values of two int variables without using third variable and arithmetic operators.
#include<stdio.h>
 int main(){
  int a, b;
  printf("Enter value of a and b: ");
  scanf("%d %d", &a, &b);
  printf("before swap a=%d , b=%d\n",a,b);
  a= a^b;
  b=a^b;
  a=a^b;
  printf("after swap a=%d , b=%d",a,b);
  return 0;
} */

/* // 10. Write a program to swap values of two int variables in single line arithmetic expression.
#include<stdio.h>
int main(){
  int a, b;
  printf("Enter value of a and b: ");
  scanf("%d %d", &a, &b);
  a= (a*b)/(b=a);
  printf("after swap a=%d , b=%d",a,b);
  return 0;
}  */