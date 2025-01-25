#include <iostream>
using namespace std;
void checkingLargeNum(int a)
{
  while (a)
  {
    int rem = a % 10;

    a /= 10;
  }
}
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  checkingLargeNum(a);
  return 0;
}