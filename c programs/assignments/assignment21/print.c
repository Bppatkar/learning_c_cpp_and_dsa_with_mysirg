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

/* //! 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
#include <string.h>
void occurrenceChecker(char str[], int size)
{
  int i, count = 0;
  char x;
  printf("Enter a character u want to count the occurrence in string:\n ");
  scanf(" %c", &x); // Adding a space before %c to ignore any leading whitespace or newline
  for (i = 0; str[i]; i++)
  {
    if (str[i] == x)
      count++;
  }
  printf("Occurrence of Character %c is %d times ", x, count);
}
int main()
{
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);

  // Remove the newline character that fgets captures
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0'; // removing the newline

  occurrenceChecker(str, 30);
  return 0;
} */

/* //! 3. Write a program to count vowels in a given string.
#include <stdio.h>
#include <string.h>
void countingVowels(char str[])
{
  int i, j, count = 0;
  char vowels[] = "aeiouAEIOU";
  for (i = 0; str[i]; i++)
  {
    for (j = 0; vowels[j]; j++)
    {
      if (str[i] == vowels[j])
      {
        printf(" %c", str[i]);
        count++;
        break;   // Exit the inner loop once a match is found
      }
    }
  }
  printf("\n total %d vowels are found in string", count);
}
int main()
{
  char str[50];
  printf("Enter a String: ");
  fgets(str, 50, stdin);
  // Removing Trailling newline if present
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  countingVowels(str);
  return 0;
} */

/* //! 4. Write a program to count spaces in a given string.
#include <stdio.h>
#include <string.h>
void spaceCounting(char str[])
{
  int i, count = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
      count++;
  }
  printf("There %s %d space%s in given string.\n",
         (count == 1) ? "is" : "are", count,
         (count == 1) ? "" : "s");
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  spaceCounting(str);
  return 0;
} */

/* //! 5. Write a program to convert a given string into uppercase.
#include <stdio.h>
#include <string.h>
void uppercaseStringConverter(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  }
  printf("string in uppercase is :\n %s ", str);
}
int main()
{
  char str[25];
  printf("Enter a string: ");
  fgets(str, 25, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  uppercaseStringConverter(str);
  return 0;
} */

/* //! 6. Write a program to convert a given string into lowercase.
#include <stdio.h>
#include <string.h>
void lowercaseStringConverter(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
  }
  printf("string in uppercase is :\n %s ", str);
}
int main()
{
  char str[25];
  printf("Enter a string: ");
  fgets(str, 25, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  lowercaseStringConverter(str);
  return 0;
} */

/* //! 7. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
void stringReverse(char str[])
{
  int i;
  int length = strlen(str) - 1;
  for (i = length; i >= 0; i--)
  {
    printf("%c", str[i]);
  }
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[(strlen(str) - 1)] = '\0';
  stringReverse(str);
  return 0;
} */
//? we are printing reverse string only not actually reversing string

/* //! 8. Write a program in C to count the total number of alphabets, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
void countAlphabetsDigitsSpecial(char str[])
{
  int i, alpha = 0, digit = 0, special = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
      alpha++;
    else if (str[i] >= 48 && str[i] <= 57)
      digit++;
    else
      special++;
  }
  printf("Total Alphabets: %d\n", alpha);
  printf("Total Digits: %d\n", digit);
  printf("Total Special Character: %d\n", special);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    (str[strlen(str) - 1]) = '\0';
  countAlphabetsDigitsSpecial(str);
  return 0;
} */

/* //! 9. Write a program in C to copy one string to another char array.
#include <stdio.h>
#include <string.h>
void copyingArray(char str[])
{
  int i;
  char newstr[50];
  for (i = 0; str[i]; i++)
    newstr[i] = str[i];
  newstr[i] = '\0'; // Adding null terminator to the end of the string
  printf("Destination string: %s\n", newstr);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    (str[strlen(str) - 1]) = '\0';
  printf("Source string: %s\n", str);
  copyingArray(str);
  return 0;
} */
//____________New Approach using sring method strcpy_____________
/* #include <stdio.h>
#include <string.h>
void copyingArrayUsingMethod(char str[])
{
  int i;
  char newstr[50];
  // ************  adding only single line
  strcpy(newstr, str);
  // ************
  printf("Destination string: %s\n", newstr);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    (str[strlen(str) - 1]) = '\0';
  printf("Source string: %s\n", str);
  copyingArrayUsingMethod(str);
  return 0;
} */

/* //! 10. Write a program to find the first occurrence of a given character in a given string.
#include <stdio.h>
#include <string.h>
void findFirstOccurrence(char str[])
{
  int i;
  char x;
  printf("Enter the character to search for: ");
  scanf(" %c", &x);
  for (i = 0; str[i]; i++)
  {
    if (str[i] == x)
    {
      printf("First occurrence of '%c' is at index %d\n", x, i);
      break;
    }
  }
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    (str[strlen(str) - 1]) = '\0';
  findFirstOccurrence(str);
  return 0;
} */

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
