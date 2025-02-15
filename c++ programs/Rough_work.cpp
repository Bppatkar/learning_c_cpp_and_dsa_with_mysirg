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
//! two  functions must have different names, even if their prototype different.

//? prototypes means- 1)function name
//?                   2)function argument
//?                   3)function return type

//! in 'C' lang... function name not be sameeeeeeeeeeeeeeee
//! in 'C++'  function name maybe same at sometime but """signature""" must be unique

//? signature means- 1)function name
//?                  2)function argument
//>                 "But Not Return Type"

// Summary- in 'c' - two function name not be same
//          in 'c++' - two function signature not be same
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
//? in book.title -- we are putting string in char array so we use strcpy (string.h) (we read this in c lang tutorial -(pointer topic)-> + structure topic)
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
//   flush --> ignore(); and fgets --> getline
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
// TODO: Writing complete clear code again without any comment
/* #include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Book
{
  int bookid;
  char title[20];
  float price;
};
struct Book inputBook()
{
  struct Book b;
  cout << "Enter bookid, title, and price: ";
  cin >> b.bookid;
  cin.ignore();
  cin.getline(b.title, 20);
  cin >> b.price;
  return b;
}
void displayBook(struct Book b)
{
  cout << b.bookid << " " << b.title << " " << b.price << endl;
}
int main()
{
  struct Book b1 = {02, "C language in Depth", 340.45}, b2, b3;
  b2.bookid = 12;
  strcpy(b2.title, "C++ in depth");
  b2.price = 422.80;
  b3 = inputBook();
  displayBook(b3);
  return 0;
} */

//? we use structure in c++ by using knowledge of c lang
//! Advanced version of structure
//? now we are going to use new concepts in structure which is in C++

//! NOTE:--***********ENCAPSULATION**************

//? FIXME: Rule 1 -  in  C lang whenever u want to write a datatype example Book so it was a rule to write struct before Book like - struct Book,  but in C++ - writing struct before datatype is optional not compulsory
//? FIXME: Rule 2 - in c lang - we can't initialize function inside structure body,  but in c++ we can use function as well
//? FIXME: Rule 3 - we can control the access of member variable defined in structure body by using access specifier (private, protected and public)

// TODO: again using above clear code for using advanced version of structure
//? we are not going to use struct again and again but while defining it is necessary to write struct 😁
//? when u make function inside structure , it is not necessary to define function outside, or as a global variable
/* #include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Book
{
  int bookid;
  char title[20];
  float price;
  // making function inside structure body
  void displayBook()
  {
    cout << bookid << " " << title << " " << price << endl;
  }
  void inputBook()
  {
    cout << "Enter bookid, title, and price: ";
    cin >> bookid;
    // checking bookid is always positive
    if (bookid < 0)
      bookid = -bookid;
    cin.ignore();
    cin.getline(title, 20);
    cin >> price;
  }
};

// void displayBook(Book b){ cout << b.bookid << " " << b.title << " " << b.price << endl;}   // this is written inside structure variable
// same for inputBook

int main()
{
  Book b1 = {02, "C language in Depth", 340.45}, b2, b3;
  b2.bookid = 12;
  strcpy(b2.title, "C++ in depth");
  b2.price = 422.80;
  b3.inputBook();
  // displayBook(b3); then we can access that displayBook member function using (.)
  b3.displayBook();
  return 0;
} */

//! Data Hiding with access specifier(3-type) (private, public and protected)
/* #include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Book
{
private:
  int bookid;
  char title[20];
  float price;

public:
  void displayBook()
  {
    cout << bookid << " " << title << " " << price << endl;
  }
  void inputBook()
  {
    cout << "Enter bookid, title, and price: ";
    cin >> bookid;
    // checking bookid is always positive
    if (bookid < 0)
      bookid = -bookid;
    cin.ignore();
    cin.getline(title, 20);
    cin >> price;
  }
};

// void displayBook(Book b){ cout << b.bookid << " " << b.title << " " << b.price << endl;}   // this is written inside structure variable
// same for inputBook

int main()
{
  // Book b1 = {02, "C language in Depth", 340.45}, b2, b3;
  // b2.bookid = 12;
  // strcpy(b2.title, "C++ in depth");
  // b2.price = 422.80;
  // b3.inputBook();
  // // displayBook(b3); then we can access that displayBook member function using (.)
  // b3.displayBook();

  //? we cant write like this because we cant access member variable using (.) because it is private now but structure member function can use it so how let see

  Book b1, b2, b3;
  b3.inputBook();
  b3.displayBook();

  return 0;
} */

//! Encapsulation is - making a group of properties and methods
//! Data-Hiding is not allowing you to access some of the member variables of the structure or making them private
//! Abstraction is hiding implementation details of any method

//! classes and object
//? i am using same above code just change struct to class and that's it - it is class.
/* #include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Book
{
private:
  int bookid;
  char title[20];
  float price;

public:
  void displayBook()
  {
    cout << bookid << " " << title << " " << price << endl;
  }
  void inputBook()
  {
    cout << "Enter bookid, title, and price: ";
    cin >> bookid;
    // checking bookid is always positive
    if (bookid < 0)
      bookid = -bookid;
    cin.ignore();
    cin.getline(title, 20);
    cin >> price;
  }
};
 */

//? class is end yes... for performing encapsulation there is only two way - struct and class
//? if they both are same then why we have two choices - struct for backward compatibility and class for accepting upcoming update but the main diff is:
//! struct → Everything is public by default.
//! class → Everything is private by default.

//! now class is complete and what about object so- for what we called structure variable actually it is object means in above code (b1,b2,b3) is object.
