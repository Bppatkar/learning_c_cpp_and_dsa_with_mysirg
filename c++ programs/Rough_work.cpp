//! Default Argument
/* #include <iostream>
using namespace std;
int add(int a, int b, int c = 0)
{
  int result = a + b + c;
  return result;
}
int main()
{
  int a, b, c, y;
  cout << "Enter two number: ";
  cin >> a >> b;
  y = add(a, b);
  cout << "Sum of " << a << " and " << b << " is " << y << endl;
  cout << "Enter three number: ";
  cin >> a >> b >> c;
  y = add(a, b, c);
  cout << "Sum of " << a << " ," << b << " and " << c << " is " << y << endl;
  return 0;
} */

//! in 'C' lang - function """name""" must be unique
//! two  functions must have different names, even if their prototype  different.

//? protoypes means- 1)function name
//?                  2)function argument
//?                  3)function return type

//! in 'C' lang... function name not be sameeeeeeeeeeeeeeee
//! in 'C++'  function name maybe same at sometime but """signature""" must be unique

//? signature means- 1)function name
//?                  2)function argument
//>                 "But Not Return Type"

// Summary- in 'c' - two function name not same
//          in 'c++' - two function signature not same
// example
/* #include <iostream>
using namespace std;
int add(int, int);
int add(int, int, int);
int main()
{
  int x, y, z;
  cout << "Enter two numbers: ";
  cin >> x >> y;
  int result = add(x, y);
  cout << "Sum of" << x << " and " << y << " is " << result << endl;
  cout << "Enter three numbers: ";
  cin >> x >> y >> z;
  result = add(x, y, z);
  cout << "Sum of " << x << " ," << y << " and " << z << " is " << result << endl;
  return 0;
}
int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; } */

//! 👆🏻 above example is called function overloading/polymorphism
//? when one function name is overloaded with diff job -
//?             1) a+b;
//?             1) a+b+c;

//! write a C++ program to define a structure to handle book record (book_id,title, price), also define function input book and display book to take input data form user and display book data on the screen..
//? in book.title -- we are putting string in char array so we use strcpy (string.h) (we read this in c lang tutorial - structure topic)
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Book
{
  int bookid;
  char title[20];
  float price;
};
struct Book inputBook();       // declaration of input function... we cant declare inside BOOK bcz book is not created yet so firstly we have to create book data type then we use any function for it
void displayBook(struct Book); // declaration of display function...

int main()
{
  struct Book b1 = {01, "C Lang in Depth", 340.45}, b2;
  b2.bookid = 02;
  // now putting title in b2 (so we use strcpy bcz we are putting string in char array)
  strcpy(b2.title, "C++ Lang in depth");
  b2.price = 422.80;
  // creating b3 bcz input function return a value so we store in b3 variable
  struct Book b3;
  b3 = inputBook();
  // creating display book function to display book
  displayBook(b3);
  return 0;
}
// data taking from user [based on only knowledge of 'C lang'] so we make input book function
// struct Book inputBook()
// {
//   struct Book b;
//   cout << "Enter bookid, title and price: ";
//   cin >> b.bookid;
//   // fgets we used in "C" lang to take input from user and fflush for memory clearance but we are in "C++" so we use getline and ignore();
//   // we are taking input from user to we use fgets so we use stdio.h but we have to clear memory before using fgets wo we use fflush
//   // fflush(stdin);
//   cin.ignore();
//   // fgets(b.title, 20, stdin);
//   cin.getline(b.title, 20); // in getline , stdin is not need to write it
//   cin >> b.price;
//   return b; // return that b so return type of that function should be struct Book and we have to declare that input func in struct Book data type
// }
// using oops knowledge for taking user input (above code is messy so i write again simple crisp and clear code)
struct Book inputBook()
{
  struct Book b;
  cout << "Enter bookid, title and price: ";
  cin >> b.bookid;
  cin.ignore();
  cin.getline(b.title, 20);
  cin >> b.price;
  return b;
}
// we can write that input function before main function so we don't have to initialize it
// now we are calling that input function from main function
// creating fuction display book and its return type is void bcz it is printing only in input func ... its returning b so return type is struct book

void displayBook(struct Book b)
{
  cout << b.bookid << " " << b.title << " " << b.price << endl;
}
*/
//? we use structure in c++ by using knowledge of c lang
//! Advanced version of structure
//? now we are going to use new concepts in structure which is in C++
