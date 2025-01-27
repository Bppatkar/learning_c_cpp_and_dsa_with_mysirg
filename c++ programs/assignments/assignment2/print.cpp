// TODO: C++ Assignment 2

// TODO: Assignment-30: Functions in C++

/* //! 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
using namespace std;
void checkPrime(int a)
{
  int i;
  for (i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      cout << "Not Prime";
      return;
    }
  }
  cout << "Prime";
}
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  checkPrime(a);
  return 0;
} */

/* //! 2. Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
void heighestDigit(int a)
{
  // Handle negative numbers manually
  if (a < 0)
    a = -a; // Convert to positive

  int i, b, rem, heigher = 0, j;
  b = a;
  for (i = 0; a; i++)
    a /= 10;

  a = b;
  for (j = 0; j < i; j++)
  {
    rem = a % 10;
    if (rem > heigher)
    {
      heigher = rem;
    }
    a /= 10;
  }
  cout << " Heighest value is " << heigher;
}
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  heighestDigit(a);
  return 0;
} */

/* //! 3. Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
void powerRaised(int a)
{
  int power, i, result = 1;
  cout << "Enter power for calculation: ";
  cin >> power;

  if (power > 0)
  {
    for (i = 1; i <= power; i++)
      result *= a;

    cout << a << " raised to the power " << power << " is " << result << endl;
  }
  else if (power < 0)
  {
    for (i = 1; i <= -power; i++)
      result *= a;

    cout << a << " raise to the power " << power << " is " << 1.0 / result << endl;
    return;
  }
   else
    cout << a << " raised to the power " << power << " is 1" << endl;
}
int main()
{
  int a;
  cout << "Enter a base number: ";
  cin >> a;
  powerRaised(a);
  return 0;
}*/

//! 4. Define a function to print Pascal Triangle up to N lines.

//! 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

//! 6. Define a function to swap data of two int variables using call by reference.

//! 7. Write a function using the default argument that is able to add 2 or 3 numbers.

//! 8. Define overloaded functions to calculate the area of a circle, the area of a rectangle, and the area of a triangle.

//! 9. Write functions using function overloading to find the maximum of two numbers where both numbers can be integers or real.

//! 10. Write functions using function overloading to add two numbers having different data types.
