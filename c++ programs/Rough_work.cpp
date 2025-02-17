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

//! syntax of class
/* class className
{
  // variables
  // functions
  // operators
}; */

//! example
//? Define a class to represent a complex number. store real and imaginary part. also define methods to set values of real and imaginary part of a complex number.define one more method to display complex number.
// rule - whenever we are writing like setData means (set)  don't take input data from user ok

/* #include <iostream>
using namespace std;
class Complex_num
{
private:
  int a, b; // instance member variable (instance means object simple)

public:
  void setData(int x, int y)
  {
    a = x;
    b = y;
  }
  void showData()
  {
    cout << "\na=" << a << " b=" << b << endl;
  }
}; */
//? it will not run because in question they don't say to make main function

//! types of variable (scope)
//? local variable and global variable both are available in c and c++ (one more variable is available in C-> static local variable)
//? but in c++ - there is member variable but member variable has two types - statice member variable and instance member variable - we use instance member variable in above code
//! instance member means --> members of objects

//! defining instance member function outside the class body
/* class X{
  // function declaration
};
// returntype className::functionName(){}
*/
// :: called scope resolution operator and [::classname] write like this means - membership label
//! example with above code and we write normal main function and defining objects
//? Rule 1 - declare function inside class
//? Rule 2 - use scope resolution operator and get membership using membership label

/* #include <iostream>
using namespace std;
class Complex_num
{
private:
  int a, b; // instance member variable (instance means object simple)

public:
  void setData(int x, int y)
  {
    a = x;
    b = y;
  }
  void showData();
};
void Complex_num::showData()
{
  cout << "\na=" << a << " b=" << b << endl;
}
int main()
{
  Complex_num c1, c2;
  c1.setData(3, 4);
  c2.setData(7, 8);
}
 */

//! static keyword
//? in C lang it is not allowed to write like this
/* struct x{
  static int a;   // not allowed
}; */
//? but in c++ it is allowed to use static keyword

//! static local variable
/* void f1()
{
  int x;        // local variable (because they are inside the function body not in structure body)
  static int y; // static local variable
} */
//! diff btw local variable and static local variable --->  life of x is destroyed when f1 execution complete but the life of y is still remained even after destroyed f1.
//? In simple words: - life of local variable is limited to the execution of function. but life of static local variable is equal to the life of program.
//? scope - both are limited to the function block
//? default value --> in local variable there is a garbage value but in static there are 0.

//? Example
/* #include <stdio.h>
void f1();
int main()
{
  f1();
  f1(); // it is still using the previous value of y
  return 0;
}
void f1()
{
  int x = 5;
  static int y; // this is a static variable so bydefault it's value is 0
  x++;
  y++;
  printf("x=%d y=%d\n", x, y);
} */

//! static member variable
//? example
/* #include <iostream>
using namespace std;
class Item
{
public:
  int a, b; // Instance variable (they are inside structure so these variable are of instance variable  and bydefault it is private in class but for learning we make them public)
};
int main()
{
  Item i1, i2;
  i1.a = 5;
  cout << i2.a << endl; // we get garbage value because i1 has diff a and b and i2 has diff so i2.a has garbage value
  return 0;
} */

//? one more example with new  instance variable 'K'
/* #include <iostream>
using namespace std;
class Item
{
public:
  int a, b;     // instance variable/ instance member variable (both r same ok)
  static int k; // static member variable/class variable  (for this it is necessary to say - static member variable otherwise there might be confusion that it is static local variable or static member variable)
  // (static local variable inside function body but static member variable is inside struture body)
};
int main()
{
  Item i1, i2;
  i1.a = 5;
  // now we want to assign data to that above 'k'
  i1.k = 10;
  cout << "k=" << i2.k << endl;      // error is coming because 'k' variable is not declared
  // (because it is not sufficient to declare static member variable  inside class , so it is necessary to define outside the body)
  return 0;
} */
// i am writing same code for better clarity
/* #include <iostream>
using namespace std;
class Item
{
public:
  int a, b;
  static int k;
};
int Item::k; // finally defined k variable now we can use it (bydefault the value in it is 0)
// int Item::k=2; //now the value in it is 2 (yes u can overwrite)
int main()
{
  Item i1, i2;
  i1.a = 5;
  i1.k = 10;
  cout << "k=" << i2.k << endl; // k variable is inside class (it is not a object variable ok) so u can print it by using i1 or i2 dose not matter
  return 0;
} */

//? now i want to access k without using creating object i1 or i2 how can we access 'k' because i1 and i2 is not available when we don't create them by the help of object Item ---> [Item i1, i2;]
//? but 'k' is available so how we can access it let see
// using above code
/* #include <iostream>
using namespace std;
class Item
{
public:
  int a, b;
  static int k;
};
int Item::k; // finally defined k variable now we can use it (bydefault the value in it is 0)
// int Item::k=2; //now the value in it is 2 (yes u can overwrite)
int main()
{
  // Item i1, i2;
  // i1.a = 5;
  // we want to access 'k'
  Item::k = 10;
  cout << "k=" << Item::k << endl; // k variable is inside class (it is not a object variable ok) so u can print it by using i1 or i2 dose not matter
  return 0;
} */

// summary:- we can access instance variable by using [object(dot)static member variable]
// and for class object/static member variable we can access by [object(dot)static member variable] and [class name::(scope resolution operator)static member variable]
//? simply means
//! how to access public static member variable...?
// 1) objectName.staticMemberVariable
// 2) className::staticMemberVariable

// 2nd way to access public static member variable is good bcz u cant use 1st one with creating object

//! how to access private static member variable...?
// we use above code wait ok
// (for accessing it we have to create public function simple)
/* #include <iostream>
using namespace std;
class Item
{
private:        // we use private here
  int a, b;     // instance variable
  static int k; // static member variable

public:
  void set_a(int x) { a = x; } // instance member function/ instance method
  void set_b(int y) { b = y; } // instance method

  // function for display data
  int get_a() { return a; } // instance method
  int get_b() { return b; } // instance method

  void set_k(int x) { k = x; } // instance method
  int get_k() { return k; } // instance method
};
int Item::k; // defining static member variable
int main()
{
  Item i1, i2;
  i1.set_a(5); // i1 is calling set_a [so i1 is collar object]
  // printing using get function
  cout << "it will print the value of a: " << i1.get_a() << endl;
  cout << "it will print garbage value: " << i2.get_a() << endl;
  // Item::k = 10;  (we cant set value of k like that because it is private so we have to use a function)
  i1.set_k(10);
  cout << "the value of k: " << i2.get_k() << endl;
  return 0;
} */

//? if we don't create object Item i1 or i2 then we cant use set_a and set_b bcz they are instance method and instance method need a object/ a instance, and we want to run set_k but it is also a instance method and we don't have object means we don't create it yet then how we can access it
// using above code again
/* #include <iostream>
using namespace std;
class Item
{
private:        // we use private here
  int a, b;     // instance variable
  static int k; // static member variable

public:
  void set_a(int x) { a = x; } // instance member function/ instance method
  void set_b(int y) { b = y; } // instance method

  // function for display data
  int get_a() { return a; } // instance method
  int get_b() { return b; } // instance method

  //? when a function is not doing any object specific work then why u are making it object/instance method
  // make it static if it is only doing static specific work
  static void set_k(int x) { k = x; } // static method/ static member function
  static int get_k() { return k; }    // static method/ static member function
};
int Item::k; // defining static member variable
int main()
{
  // Item i1, i2;
  // i1.set_a(5); // i1 is calling set_a [so i1 is collar object]
  // printing using get function
  // cout << "it will print the value of a: " << i1.get_a() << endl;
  // cout << "it will print garbage value: " << i2.get_a() << endl;
  // Item::k = 10;  (we cant set value of k like that because it is private so we have to use a function)
  // i1.set_k(10);
  //? changes made here
  Item::set_k(10);
  // cout << "the value of k: " << i2.get_k() << endl;
  cout << "the value of k: " << Item::get_k() << endl;
  return 0;
} */

//? so how we can access private static member variable
// by making member function
// 1) objectName.instanceMethod()
//    objectName.staticMethod()
// 2) className::staticMethod()
// [instance method can use both members static member and instance member ok]

//! call by object and returning object
//! call by object
//? --> ReturnType functionName(className object);
// for better learning we see example
//! Define complex class with appropriate members. Also define a function to add two complex numbers.

/* #include <iostream>
using namespace std;
class Complex
{
private:
  int a, b; // instance member variable (instance means object simple)

public:
  void addData(int, int);
  void showData();
  Complex add(Complex);
};
Complex Complex::add(Complex newC)
{
  Complex temp;
  temp.a = a + newC.a;
  temp.b = b + newC.b;
  return temp;
}
void Complex::addData(int x, int y)
{
  a = x;
  b = y;
}
void Complex::showData()
{
  cout << "\na=" << a << " b=" << b << endl;
}

int main()
{
  Complex c1, c2;
  c1.addData(4, 5);
  c2.addData(6, 9);

  // changes made here
  Complex c3;
  // c3 = c1 + c2;   // this line is showing error because operator "+"  not matches these operands means they both are not a normal variable , we are trying to add: Complex + Complex, so for solution we are going to make add();
  c3 = c1.add(c2);
  //? explain this like - c1 is a collar object which called own add function and passing c2 as an argument and whatever that add function will return that thing will store in c3 thats it.

  c3.showData();

  return 0;
} */
//? so what we learn here - a function that want a object as an argument and it is returning a object [call by object and returning object]
