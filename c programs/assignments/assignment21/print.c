// TODO: Assignment-21: String Basics

/* //! 1. Write a program to calculate the length of the string.
// (Without using a built-in method)
#include <stdio.h>
void lengthOfString(char str[], int size)
{
  int i, length = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] != '\n')
      length++;
  }
  printf("%d ", length);
}
int main()
{
  char str[20];
  printf("Enter a string: ");
  fgets(str, 20, stdin);
  printf("%s", str);
  lengthOfString(str, 20);
  return 0;
} */
// _______New Approch__________ (Run loop till str[i]!='\0')
/* #include <stdio.h>
void lengthOfString(char str[], int size)
{
  int i, length = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] != '\n')
      length++;
  }
  printf("%d ", length);
}
int main()
{
  char str[20];
  printf("Enter a string: ");
  fgets(str, 20, stdin);
  printf("%s", str);
  lengthOfString(str, 20);
  return 0;
} */
// _______New Approch__________ (taking input from scanf and %c)-[but u have to input string without space- Ex: bhanupratap]
/* #include <stdio.h>
void lengthOfString(char str[], int size)
{
  int i, length = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] != '\n')
      length++;
  }
  printf("\nLength of the string: %d\n", length);
}
int main()
{
  char str[20];
  printf("Enter a string: ");
  int i;
  scanf("%19s", str);
  printf("You Entered: ");
  for (i = 0; str[i]; i++)
    printf("%c", str[i]);
  lengthOfString(str, 20);
  return 0;
} */

//! 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
  char str[20];
  printf("Enter a string: ");
  fgets(str, 20, stdin);
  occurrenceChecker(str, 20);
  return 0;
}

//! 3. Write a program to count vowels in a given string.

//! 4. Write a program to count spaces in a given string.

//! 5. Write a program to convert a given string into uppercase.

//! 6. Write a program to convert a given string into lowercase.

//! 7. Write a program to reverse a string.

//! 8. Write a program in C to count the total number of alphabets, digits, and special characters in a string.

//! 9. Write a program in C to copy one string to another char array.

//! 10. Write a program to find the first occurrence of a given character in a given string.

// TODO: Questions from Other Sources

//! 11. Read a line of text from the user using fgets and then print it using puts.

//! 12. Use printf with format specifiers to format and print a date string (day, month, year).

//! 13. Write a program to convert an input string to uppercase.

//! 14. Create a simple text-based user login system that compares a stored password string using strcmp.

//! 15. Use a 2-D character array to store and display a tic-tac-toe board.

//! 16. Write a function that takes a string and reverses it in place.

//! 17. Implement a trim function that removes leading and trailing spaces from a string.

//! 18. Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result.

//! 19. Create a program using do-while to find a password checker until a valid password is entered.

//! 20. Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.
