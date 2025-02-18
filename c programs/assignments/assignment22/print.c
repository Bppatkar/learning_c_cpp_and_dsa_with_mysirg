// TODO: Assignment-22: Strings and Functions

/* //! 1. Write a function to calculate the length of the string.
#include <stdio.h>
#include <string.h>
void stringLengthCalc(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    ;
  printf("Length of string is: %d", i);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  stringLengthCalc(str);
  return 0;
} */

/* //! 2. Write a function to reverse a string.
#include <stdio.h>
#include <string.h>
void reverseString(char str[])
{
  int i;
  int length = strlen(str) - 1;
  for (i = length; i >= 0; i--)
    printf("%c", str[i]);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  reverseString(str);
  return 0;
} */
//? we are "printing" reverse string...... only {not actually reversing a actual string}
// if want to reverse a actual string then we have to use swapping
// __________________New Approach____________
/* #include <stdio.h>
#include <string.h>
int main()
{
  int i, l;
  char str[50], ch;
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  str[(strlen(str) - 1)] = '\0';
  l = strlen(str);
  for (i = 0; i < l / 2; i++)
  {
    ch = str[i];
    str[i] = str[l - 1 - i];
    str[l - 1 - i] = ch;
  }
  printf("Reverse of String is %s", str);
  return 0;
} */

/* //! 3. Write a function to compare two strings.
#include <stdio.h>
#include <string.h>
void comparingStrings(char str[], char newStr[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] < newStr[i])
    {
      printf("first string is smaller than second one\n");
      return;
    }
    else if (str[i] > newStr[i])
    {
      printf("first string is greater than second one\n");
      return;
    }
  }
  // If the loop completes, check if lengths are different
  if (str[i] == '\0' && newStr[i] == '\0')
    printf("Both strings are the same\n");
  else if (str[i] == '\0')
    printf("First string is smaller than the second one\n");
  else
    printf("First string is greater than the second one\n");
}
int main()
{
  char str[50];
  char newStr[50];
  printf("Enter a first string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  printf("Enter a second string: ");
  fgets(newStr, 50, stdin);
  if (newStr[strlen(newStr) - 1] == '\n')
    newStr[strlen(newStr) - 1] = '\0';
  comparingStrings(str, newStr);
  return 0;
} */
//_____________New Approach___________
/* #include <stdio.h>
int compare(char s1[], char s2[])
{
  int i;
  for (i = 0; s1[i] && s2[i]; i++)
  {
    if (s1[i] != s2[i])
      break;
    return s1[i] - s2[i];
  }
}
int main()
{
  printf("%d", compare("bhanu", "Bhanu"));
  return 0;
} */

/* //! 4. Write a function to transform a string into uppercase.
#include <stdio.h>
#include <string.h>
void upperCaseStr(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  printf("string in uppercase is :\n %s ", str);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  upperCaseStr(str);
  return 0;
} */

/* //! 5. Write a function to transform a string into lowercase.
#include <stdio.h>
#include <string.h>
void lowerCaseStr(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
  printf("string in lowercase is :\n %s ", str);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  lowerCaseStr(str);
  return 0;
} */

/* //! 6. Write a function to count vowels in a given string.
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
        break; // Exit the inner loop once a match is found
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
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  countingVowels(str);
  return 0;
} */

/* //! 7. Write a function to find a character in a given string. Return the index of the first occurrence of the given character. Return -1 if the character is not found.
#include <stdio.h>
#include <string.h>
int characterFinder(char str[])
{
  int l = strlen(str);
  char x;
  printf("Enter a character u want to find in string:\n ");
  scanf(" %c", &x); // Adding a space before %c to ignore any leading whitespace or newline
  for (int i = 0; i < l; i++)
  {
    if (str[i] == x)
    {
      return i + 1;
    }
  }
  return -1;
}
int main()
{
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  int result = characterFinder(str);
  printf("character found at the index %d", result);
  return 0;
} */

/* //! 8. Write a function to find a character in a given string between specified indices. (Start index inclusive, and end index exclusive)
#include <stdio.h>
#include <string.h>
void charFinderBtwIndices(char str[])
{
  int i, start = 0, end = 0;
  char x;
  int l = strlen(str) - 1;
  printf("Enter the character u want to find in string: ");
  scanf(" %c", &x);
  printf("Enter the first index u want to start searching (but remember indexing start from 0): ");
  scanf(" %d", &start);
  printf("Enter the last index u want to end searching: ");
  scanf(" %d", &end);

  if (end > l)
    end = l;
  if (start >= l)
    return -1;

  for (i = start; i <= end; i++)
  {
    if (str[i] == x)
    {
      printf("Character Found in String!!!");
      return;
    }
  }
  printf("Character Not Found..");
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  charFinderBtwIndices(str);

  return 0;
} */

/* //! 9. Write a function to swap two characters of a given string with specified indices.
#include <stdio.h>
#include <string.h>
void charSwapBtwIndices(char str[])
{
  int i, indx1 = 0, indx2 = 0, temp;

  printf("Enter the first index u want to swap with second index (but remember indexing start from 0): ");
  scanf(" %d", &indx1);
  printf("Enter the last index u want to swap with first index: ");
  scanf(" %d", &indx2);

  if (indx1 < 0 || indx1 >= strlen(str) || indx2 < 0 || indx2 >= strlen(str))
  {
    printf("Invalid indices! Please enter indices within the range of the string.\n");
    return;
  }

  temp = str[indx1];
  str[indx1] = str[indx2];
  str[indx2] = temp;

  printf("After swapping your string is: \n");
  printf("%s", str);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  charSwapBtwIndices(str);
  return 0;
} */
// ***********
/* Enter a string: bhanu pratap patkar
Enter the first index u want to swap with second index (but remember indexing start from 0): 4

Enter the last index u want to swap with first index: 6
After swapping your string is:
bhanp uratap patkar */
// ***********

/* //! 10. Write a function to check whether a given string is an alphanumeric string or not. (An alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>
#include <string.h>
int isAlpha(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      return 1;
  return 0;
}
int isDigit(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    if (str[i] >= '0' && str[i] <= '9')
      return 1;
  return 0;
}
int isAlphaNumeric(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
    {
      return 0; // Found a character that is not alphanumeric
    }
  }
  return 1; // All characters are alphanumeric
}
void charFinderBtwIndices(char str[])
{
  if (isAlphaNumeric(str))
    printf("The string is alphanumeric!\n");

  else if (isAlpha(str) && isDigit(str))
    printf("The string contains both alphabetic and numeric characters.\n");
  else
    printf("The string does not contain both alphabetic and numeric characters.\n");
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  charFinderBtwIndices(str);
  return 0;
} */