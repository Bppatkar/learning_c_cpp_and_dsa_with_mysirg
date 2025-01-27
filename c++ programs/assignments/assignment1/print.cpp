// TODO: C++ Assignment 1

// TODO: Assignment-29: Basics of C++

/* //! 1. Write a C++ program to print Hello MySirG on the screen.
#include <iostream>
using namespace std;
int main()
{
  cout << "Hello MySirG" << endl;
  return 0;
} */

/* //! 2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.
#include <iostream>
using namespace std;
int main()
{
  cout << "Hello" << endl;
  cout << "MySirG";
  return 0;
} */

/* //! 3. Write a C++ program to calculate the sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter two number: ";
  cin >> a >> b;
  cout << "Sum of " << a << " and " << b << " is " << a + b;
  return 0;
} */

/* //! 4. Write a C++ program to calculate the area of a circle.
#include <iostream>
using namespace std;
int main()
{
  int r;
  cout << "Enter radius: ";
  cin >> r;
  cout << "Area fo circle is: " << 3.14 * r * r;
  return 0;
} */

/* //! 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
  int length, width, height;
  cout << "Enter length width and height: ";
  cin >> length >> width >> height;
  cout << "Volume of cuboid is: " << length * width * height;
  return 0;
} */

/* //! 6. Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;
  cout << "Average of " << a << "," << b << " and " << c << " is: " << (a + b + c) / 3;
  return 0;
} */

/* //! 7. Write a C++ program to calculate the square of a number.
#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  cout << "Square of " << a << " is: " << a * a;
  return 0;
} */

/* //! 8. Write a C++ program to swap values of two int variables without using a third variable.
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  cout << "Before swapping: " << endl;
  cout << "a=" << a << "," << "b=" << b << endl;
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "After swapping: " << endl;
  cout << "a=" << a << "," << "b=" << b << endl;
  return 0;
} */

/* //! 9. Write a C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  cout << "Maximum of " << a << " and " << b << " is: " << (a < b ? b : a);
  return 0;
} */

/* //! 10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;
void addingNumbers(int arr[], int n)
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum += arr[i];
  cout << "Sum is: " << sum;
}
int main()
{
  int arr[10], i;
  cout << "Enter 10 Number: ";
  for (i = 0; i < 10; i++)
    cin >> arr[i];
  addingNumbers(arr, 10);
  return 0;
} */
