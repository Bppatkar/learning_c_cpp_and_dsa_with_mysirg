// 7. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
  int a,b,c,rev;
  printf("enter three digit number ");
  scanf("%d",&a);
  c= a%10; a=a/10;
  b= a%10; a=a/10;
  rev=c*100+b*10+a;
  printf("after reverse %d", rev);
  return 0;
}