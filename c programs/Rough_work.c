// print welcome on the screen
/* #include<stdio.h>
int main(){
  printf("welcome");
  return 0;
} */

// write a program to print welcome student but not in same line
/* #include<stdio.h>
int main(){
  printf("welcome\'Student");

} */

// write s program to print value of a variable
/* #include<stdio.h>
int main(){
  int a = 5;
  printf("%d",a);
  return 0;
}
 */

// write a program to print that following statement
// conside int a =5 ,b=6;
// 1. 5 6
// 2. a=5 and b=6;
// 3. a=6 & b=5;
// 4. value of a is 5 and value of b is 6
// 5. sum of 5 and 6 is 11
// 6. 5+6 = 11

/* #include<stdio.h>
int main(){
  int a=5 ,b=6;
    printf("%d %d",a,b);
    printf("\n");
    printf("a=%d and b=%d",a,b);
    printf("\n");
    printf("a=%d & b=%d", b,a);
    printf("\n");
    printf("value of a is %d and value of b is %d",a,b );
    printf("\n");
    printf("sum of %d and %d is %d",a,b, a+b);
    printf("\n");
    printf("%d + %d = %d",a,b,a+b);
  return 0;
} */

/* // scanf for taking input from user
 #include<stdio.h>
int main(){
  int a;
  scanf("%d", &a);
  printf("%d",a);
  return 0;
} */

/* // write a program to calculate sum of two integers
#include<stdio.h>
int main(){
 // int a ,b ,c;
 // printf("Enter two numbers");
 // scanf("%d %d", &a,&b);
 // c= a+b;
 // printf("sum of %d and %d is %d",a,b,c);
 // return 0;
 int a ,b;
 printf("Enter two numbers");
 scanf("%d %d", &a,&b);
 printf("sum of %d and %d is %d",a,b,a+b);
 return 0;
} */

/* #include<stdio.h>
int main(){
  int x =5,y;
  y=++x;
  printf("%d %d", x,y);
}  */

/* #include<stdio.h>
int main(){
  int a;
  char b;
  printf("enter num for a:");
  scanf("%d",&a);
  printf("enter char for b:");
  scanf(" %c",&b);
  printf("%d is %c\n",a, a);
  printf("%c is %d\n",b, b);
  return 0;
}
 */

/* #include <stdio.h>
int main(){
  int x;
  x = ~5;
  printf("%d",x);
}  */

/* // WAP to check whether a given number is positive or non positive [using if]
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a>0) printf("Positive");
  if(a<=0) printf("Non Positive");
  return 0;
} */

/* // WAP to check whether a given number is positive or non positive [using if else]
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if(a>0)printf("Positive");
  else printf("Non - Positive");
  return 0;
} */

/* // WAP to check whether a given number is positive or non positive [using if ternary]
#include<stdio.h>
int main(){
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  // printf(a<=0 ? "non-positive": "positive");
  a>0? printf("positive"):printf("non-positive");
  return 0;
}  */

/* #include<stdio.h>
int main(){
  int x=5;
  if(x==4){
  printf("%d", x);
    printf("Hello ");
  }
  else{
  printf("Bye ");
  }
  printf("%d", x);
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a = 1, i;
  printf("Enter the value for N Natural Number");
  scanf("%d", &i);
  while (a <= i)
  {
    printf("%d\n", a);
    a++;
  }
  return 0;
}
 */

/* #include <stdio.h>
int main()
{
  int i, j, k;
  for (i = 0; i < 3; i++)
  {
    j = i * 2 + 1;
    k = j * 3 - 2;
  }
  printf("%d %d %d", i, j, k);
  return 0;
} */

/* //! Write a program which asks user to enter an even number. Computer will give user at most 3 chances. If user fail to answer in any of the chances, game over, message should be displayed on the screen. Otherwise, you win, message should be displayed and can stop immediately.

#include <stdio.h>
int main()
{
  int a = 0;
  while (a < 3)
  {
    int i;
    printf("Enter Even Number: ");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
      printf("You Win");
      break;
    }
    else
    {
      a++;
      if (a == 3)
        printf("You Loose\nGame Over");
    }
  }
  return 0;
} */

//! approach 2
/* int i, num;
for (i = 1; i <= 3; i++) {
    printf("Enter an even number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("You win!\n");
        return 0; // Exit the program immediately
    } else {
        printf("Try again.\n");
    }
}

printf("Game over. You lose.\n"); */

/* //! write a program to entered by user. user can enter any number of numbers until he enters 0;

#include <stdio.h>
int main()
{
  int i, num, a = 0;
  for (;;) // that means infinite loops
  {
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
      printf("%d\n ", a);
      break;
    }
    else
      a += num;
  }
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a, b, c;
  for (a = 5; a > 1; a--)
  {
    for (b = 6 - a; b <= 5; b++)
    {
      c = a + b;
      printf("\n %d %d %d", a, b, c);
    }
  }
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a, b;
  for (a = 1; a <= 4; a++)
  {
    for (b = 1; b <= 5; b++)
    {
      printf("%d ", b * a);
    }
    printf("\n");
  }
  return 0;
} */

//! Recursion
/* #include <stdio.h>
void f1();
int main()
{
  f1();
  return 0;
}
void f1()
{
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  if (a > 0)
    f1();
  printf("%d ", a);
} */

/* //! Recursion Tree
#include <stdio.h>
int f1(int);
int main()
{
  int k;
  k = f1(3);
  printf("%d", k);
  return 0;
}
int f1(int n)
{
  int s;
  if (n == 1)
    return (1);
  s = n + f1(n - 1);
  return (s);
} */

/* //! write a recursive function to calculate factorial of n.
#include <stdio.h>
int main(){
 int a, sum = 1;
 printf("Enter a number: ");
 scanf("%d", &a);
 for (int i = 1; a >= 1; i++)
 {
   sum *= a;
   a--;
 }
 printf("factorial is %d", sum);
 return 0;
}
*/
//? this is only a function so we cant run it ok
//? we are not making any program here ... we just write a function
/* int fact(int n)
{
  if (n == 0)
    return 1; // bcz factorial of 0 is 1
  return (n * fact(n - 1));
} */

/* //! write a recursive function to print first n natural numbers.
//? we are making function not program ok
void first(int n) // void bcz we are printing here , if we are calculating something like above question then we use int
{
  if (n > 0)
  {
    first(n - 1);
    printf(" %d", n);
  }
} */

/* // TODO: let run this program
#include <stdio.h>
void first(int);
int main()
{
  first(15);
  return 0;
}
void first(int n)
{
  if (n > 0)
  {
    first(n - 1);
    printf(" %d", n);
  }
}
 */

/* //! print n number in reverse order
#include <stdio.h>
void printN(int);
int main()
{
  printN(15);
  return 0;
}
void printN(int n)
{
  if (n <= 0)
    // Base condition: stop recursion when n becomes 0 or negative

    return;
  // The error 'return' with no value occurs because the function printN is declared as returning an int, but it tries to return void

  printf(" %d", n); // Print the current number
  printN(n - 1);
} */

/* //! write a recursive function to print first n natural numbers with user input.
#include <stdio.h>
// Recursive function to print first n numbers
void printNumbers(int n) {
    if (n <= 0) {
        return; // Base case: stop recursion when n is 0 or negative
    }
    printNumbers(n - 1); // Recursive call to print numbers before n
    printf("%d ", n); // Print the current number
}

int main() {
    int n;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the first n numbers
    printf("First %d numbers are: ", n);
    printNumbers(n);

    return 0;
}
 */

//! Array
//! write a program to calculate average of 100 numbers.
/* #include <stdio.h>
int main()
{
  int a[100], i, sum = 0;
  float avg;
  printf("Enter 100 numbers: ");
  for (i = 0; i <= 99; i++)
    scanf("%d", &a[i]);
  for (i = 0; i <= 99; i++)
    sum += a[i];
  avg = sum / 100.0;
  printf("Average is %f", avg);
  return 0;
} */

//! String
//? Initializing char array during declaration
/* #include <stdio.h>
int main()
{
  char str[10] = {'B', 'H', 'O', 'P', 'A', 'L'};
  int i;
  for (i = 0; i <= 9; i++)
  // here 4 spaces will print bcz of null char which is waste of time u can check on one compiler website
  {
    printf("%c", str[i]);
  }
  printf("hello");
  return 0;
} */
//? doing the same without print 4 blackspace
/* #include <stdio.h>
int main()
{
  char str[10] = {'B', 'H', 'O', 'P', 'A', 'L'};
  int i;
  for (i = 0; str[i] != 0; i++)
  {
    printf("%c", str[i]);
  }
  return 0;
} */
//? when it goes up to 6 then it finds that str[6]=0 means condition false then why are we writing str[i]!=0;  -- see here
/* #include <stdio.h>
int main()
{
  char str[10] = {'B', 'H', 'O', 'P', 'A', 'L'};
  int i;
  for (i = 0; str[i]; i++)
  {
    printf("%c", str[i]);
  }
  return 0;
} */

//?without using loop -- using %s
/* #include <stdio.h>
int main()
{
  char str[10] = {'B', 'H', 'O', 'P', 'A', 'L'};
  printf("%s", str);
  return 0;
} */

//! WAP to calculate the length of string
/* #include <stdio.h>
int main()
{
  char str[10] = "BHOPAL";
  int count = 0;
  for (int i = 0; i <= str[i]; i++)
  {
    count++;
  }
  printf("%d", count);
  return 0;
} */
//? simple way
/* #include <stdio.h>
int main()
{
  char str[10] = "BHOPAL";
  int i;
  for (i = 0; str[i]; i++)
    ;
  printf("%d", i);
  return 0;
} */

//? taking input from user
/* #include <stdio.h>
int main()
{
  char str[50];
  // bcz we don't know how much length of string user enters
  printf("Enter your name: ");
  scanf("%s", str); // we use %s ok for complete string
  printf("%s", str);
  return 0;
} */

//! using gets()
/* #include <stdio.h>
int main()
{
  char str[20];
  // bcz we don't know how much length of string user enters
  printf("Enter your name: ");
  fgets(str, 20, stdin); // we use %s ok for complete string
  printf("%s", str);
  return 0;
} */

//! printing length of string
/* #include <stdio.h>
int main()
{
  char str[20];
  printf("Enter your name: ");
  fgets(str, 20, stdin);
  int i;
  for (i = 0; str[i]; i++)
    ;
  printf("Length of %s is %d", str, i);
  return 0;
} */

//! STRING FUNCTION
//? we get ans 6 by entering name BHANU means it is adding newline character at the end and then null character so what should we do -- write func again

/* #include <stdio.h>
int main()
{
  char str[20];
  printf("Enter your name: ");
  fgets(str, 20, stdin);
  int i;
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  //?fgets() - BHANU ko 0 s 6 tk to count krega pr last m ek newline char or null '\0' char likh dega to wo counting 5 and 6 hogi pr hme to 5 chahiye na bhanu m to isiliye hme newline char ki jagah null char le aayege -1 krke jisse string end ho jayega isiliye 1 subtract kiya h
//? 0 1 2 3 4  5  6
//? B H A N U \n \0
  //? and again using for loop jisse pata chale ki null character kaha h bcz
  //! null character jaha pr milega wahi string ki length hoti h
  for (i = 0; str[i]; i++)
    ;
  printf("Length of %s is %d", str, i);
  return 0;
} */

/* so total 3 step h
for (i = 0; str[i]; i++);
  str[i - 1] = '\0';
for (i = 0; str[i]; i++);
 */

//! by using String Function
/* #include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  printf("Enter your name: ");
  fgets(str, 20, stdin);
  // ****
  str[strlen(str) - 1] = '\0'; //? strlen(str) itna likhne s length 6 aayegi, [strlen(str)-1] likne s index aayega ab , index kiska str ka to likho str[strlen(str)-1] pr isko use krne #include<string.h> use karna hoga
  int i;
  for (i = 0; str[i]; i++)
    ;
  // ****
  printf("Length of %s is %d", str, i);
  return 0;
} */

//? jahan par for (i = 0; str[i]; i++); likh rahe wo v strlen s kr skte h dekho

/* #include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  printf("Enter your name: ");
  fgets(str, 20, stdin);
  // ****
  str[strlen(str) - 1] = '\0';
  int i;
  // for (i = 0; str[i]; i++)
  i = strlen(str);
  // ****
  printf("Length of %s is %d", str, i);
  return 0;
} */

//! WAP to find last character of the string
//?  i am using above code

/* #include <stdio.h>
#include <string.h>
// The lastCharacter function returns the last character of a string.
// It receives an array in the parameter (str), which is accessed using the alias 's' (not a new array, just a different name for the same array).
// that lastCharacter function return value and recieve array in parameter which is 'str' passes by argu and that str array we access by s name (not creating new array we access same array by diff name)
int lastCharacter(char s[])
{
  // strlen(s)-1 gives the index of the last character in the string.
  // Returning s[strlen(s)-1] retrieves the last character, not its length.
  // strlen(s)-1 means we get lenth of last character but we want last character not length so we do

  return s[strlen(s) - 1];
}

int main()
{
  char ch, str[20]; // Initialize variables to store the string and the last character. // here i initialize variable
  printf("Enter your string or name: ");
  fgets(str, 20, stdin);       // Read input from the user (up to 19 characters + null terminator).
  str[strlen(str) - 1] = '\0'; // Remove the newline character ('\n') added by fgets, if present.

  // ********
  ch = lastCharacter(str); // we make function and passed string as a argu
  // ********
  // Print the last character of the string stored in 'ch'.
  printf("last character of string is %c", ch);
  return 0;
} */

// **************************************
//! learning pointer
/* #include <stdio.h>
int main()
{
  int a[3] = {1, 2, 3};
  int b[3] = {4, 5, 6};
  int *q[2]; // Array of pointers

  q[0] = a; // q[0] points to array 'a'
  q[1] = b; // q[1] points to array 'b'

  // Printing addresses
  printf("q[0]: %p, q[1]: %p\n", q[0], q[1]);                 // Starting addresses of a and b
  printf("*(q + 0): %p, *(q + 1): %p\n", *(q + 0), *(q + 1)); // Same as q[0] and q[1]

  // Accessing values
  printf("q[0][1]: %d\n", q[0][1]);         // Value at index 1 of array 'a' (2)
  printf("*(q[0] + 1): %d\n", *(q[0] + 1)); // Same as q[0][1] (2)

  printf("q[1][2]: %d\n", q[1][2]);         // Value at index 2 of array 'b' (6)
  printf("*(q[1] + 2): %d\n", *(q[1] + 2)); // Same as q[1][2] (6)

  return 0;
}
 */
// ______________________________________
//! learning pointer in deep
/* #include <stdio.h>
int main()
{
  int a[3], b[3];
  int *q[2]; // Array of pointers
  q[0] = a;  // q[0] points to array 'a'
  q[1] = b;  // q[1] points to array 'b'

  // Taking input for both arrays
  printf("Enter 3 numbers for array a: ");
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", (*(q + 0) + i)); // Input for array 'a'
  }

  printf("Enter 3 numbers for array b: ");
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", (*(q + 1) + i)); // Input for array 'b'
  }

  // Displaying values
  printf("Array a: ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", *(*(q + 0) + i)); // Print values of array 'a'
  }

  printf("\nArray b: ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", *(*(q + 1) + i)); // Print values of array 'b'
  }
  return 0;
} */
// **************************************

//! arithmatic pointer
// swapping assignment

/* #include <stdio.h>
void swappingValue(int a, int b)
{
  int c;
  c=a;
  a=b;
  b=c;
}
// after this function ended a,b is vanished bcz of local variable
int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("entered value a=%d b=%d\n", a, b);
  swappingValue(a, b);
  printf("after swapping a=%d b=%d\n", a, b);
  // a,b both are vanished in above function so what value u r swapping here...?? that is a main prblm
  return 0;
} */
/* //! solution of above code
#include <stdio.h>
void swappingValue(int *a, int *b)
{
  int c;
  c = *a;
  *a = *b;
  *b = c;
}
int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("entered value a=%d b=%d\n", a, b);
  swappingValue(&a, &b);
  printf("after swapping a=%d b=%d\n", a, b);
  return 0;
} */

//! pointers in array
// yaha hm pointer padh rhe h isiliye waha s array bhejne par pointer reciever kr rha
// agr array padh rhe hote to array bhejne pr empty array recieve krta ya fir use bhi pointer s hi recieve kr lete..... pointer wala use krna wo jyada sahi rhta h
// agr above line smjh nahi aae to assignment 18 ka 1st question k both solution dekho

/* #include <stdio.h>
void input(int *p, int size)
 // waha s array bheja hai to yaha pointer recieve krega na to *p ya fir *a likh lo , ab waha (a, 10) likha h, a mtlb array ka naam , or array ka naam likhna mtlb uske phle block ka address hai.
{
  int i;
  printf("Enter %d numbers", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", p + i);   //p+0 mtlb , 'a' array k phle block ka address hai ab i++ to p+1....till size
    // scanf("%d", &p[i]);   ✅
    // scanf("%d", p[i]);    ❌  bcz
    // you cannot write scanf("%d", p[i]); because p[i] represents the value stored at the i-th position, not its address. The scanf function requires a pointer (memory address) as an argument to store the input.
    //? p + i and &p[i] both give the memory address of the i-th element.
    //? p[i] gives the value at the i-th position, which is why it cannot be used directly with scanf.
  }
}
int main()
{
  int a[10];
  input(a, 10); // yefunc user s 10 value ka input lega or a naam k array m rakh dega
  return 0;
} */

//! now adding one more function to display the input from user, so i am going to write same code again but without comment
/* #include <stdio.h>
void input(int *p, int size)
{
  int i;
  printf("Enter %d numbers: ", size);
  for (i = 0; i < size; i++)
  {
   scanf("%d ", (p + i));
    // scanf("%d ", &p[i]);
  }
}
void display(int *p, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d ", *(p + i));
  }
}
int main()
{
  int a[10];
  input(a, 10);   // yefunc user s 10 value ka input lega or a naam k array m rakh dega
  display(a, 10); // ye us input ko print krega
  return 0;
} */

//! pointers and strings
// calculating the length of string give making seperate function for it

/* #include <stdio.h>
int length(char *p)
{
  int i;
  for (i = 0; *(p + i); i++)
    ;
  return i;
}
int main()
{
  int l;
  char str[10];
  fgets(str, 10, stdin);
  l = length(str);
  printf("Length of the string: %d\n", l);
  return 0;
}
 */

//! array of pointers
/* #include <stdio.h>
void display(int *q, int size)
{
  int i;
  printf("\n");
  for (i = 0; i < size; i++)
    printf("%d ", *(q + i));
}
void input(int **q, int n, int size[])
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    printf("\nEnter %d numbers: ", size[i]);
    for (j = 0; j < size[i]; j++)
      // Both expressions are equivalent
      scanf("%d", (*(q + i) + j));
      // Using (*(q + i) + j)
      // scanf("%d", (q[i] + j));
      // Using q[i] + j
  }
}
int main()
{
  int a[5], b[6], c[3], d[8];
  int *p[4], i;
  int size[] = {5, 6, 3, 8};
  // p[0] = &a[0];
  // or
  p[0] = a;
  p[1] = b;
  p[2] = c;
  p[3] = d;
  // in charon array m data input kaise krwau
  // input nam ka func banate hai
  input(p, 4, size);
  // input ho gya ab display krwate hai to for loop lagate h or p pr chala denge
  // iske liye ek i variable banayenge *p[4] k side m hi likh diya h
  for (i = 0; i < 4; i++)
    display(p[i], size[i]); // display ek func h new func
  // p[i] s p k andr 4 array h sequence m print honge or unka size size nam k arr s pta chl jayega
  return 0;
} */

//! now making 2d array and recieving in function without pointer using same above code
#include <stdio.h>
/* void display(int *q, int size)
{
  int i;
  printf("\n");
  for (i = 0; i < size; i++)
    printf("%d ", *(q + i));
} */
/* void input(int **q, int n, int size[])
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    printf("\nEnter %d numbers: ", size[i]);
    for (j = 0; j < size[i]; j++)
      scanf("%d", (*(q + i) + j));
  }
} */
void f1(int y[][4], int row)
{
  // we cant leave [][] both array empty, atleast we have to fill coloum block
  //? we can leave row array empty but not column
  // if we have 3d array [][][] we cant leave 3 empty array we have to fill last 2
  //? now we have to print those value from int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int i, j;
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%d ", y[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int a[5], b[6], c[3], d[8];
  int *p[4], i;
  int size[] = {5, 6, 3, 8};
  // ********** here i made changes ok
  int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  f1(x, 3); //? we want to pass above 2d array in that f1 function
  // **********
  /*p[0] = a;
  p[1] = b;
  p[2] = c;
  p[3] = d;
  input(p, 4, size);
  for (i = 0; i < 4; i++)
    display(p[i], size[i]); */
  return 0;
}

//! pointers to array
//? means pointer that stores array's of address
