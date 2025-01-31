// TODO: Assignment-23: Strings and Functions

/* //! 1. Write a function to check whether a given string is a palindrome or not.
#include <stdio.h>
#include <string.h>
void palindromeChecker(char str[])
{
  int i;
  int l = strlen(str) - 1;
  for (i = 0; i < l / 2; i++)
  {
    if (str[i] != str[l - i])
    {
      printf("Not Palindrome");
      return;
    }
  }
  printf("Palindrome");
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  palindromeChecker(str);
  return 0;
} */
//_____________New Approach___________________
/* #include <stdio.h>
#include <string.h>
void palindromeChecker(char str[])
{
  char newStr[50];
  int i, j;

  int length = strlen(str) - 1;

  for (i = length, j = 0; i >= 0; i--, j++)
    newStr[j] = str[i];
  newStr[j] = '\0';
  // printing reverse string for debugging
  printf("reverse String: %s\n", newStr);

  if (strcmp(str, newStr) == 0)
    printf("Palindrome");
  else
    printf("Not Palindrome");
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  palindromeChecker(str);
  return 0;
} */

/* //! 2. Write a function to trim a string (removing leading and trailing spaces).
#include <stdio.h>
#include <string.h>
void removingSpaces(char str[])
{
  int i, start = 0, end = strlen(str) - 1;
  while (str[start] == ' ')
    start++;
  while (end > start && str[end] == ' ')
    end--;
  for (i = start; i <= end; i++)
    printf("%c", str[i]);
  printf("\n");
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  removingSpaces(str);
  return 0;
} */

/* //! 3. Write a function to count words in a given string.
#include <stdio.h>
#include <string.h>
void wordCounter(char str[])
{
  int i, count, start = 0, end = strlen(str) - 1;
  while (str[start] == ' ')
    start++;

  while (end > start && str[end] == ' ')
    end--;

  count = 1;

  if (start > end)
    count = 0;

  for (i = start; i < end; i++)
  {
    if (str[i] == ' ' && str[i + 1] != ' ')
      count++;
  }
  printf("%s contains %d words", str, count);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  wordCounter(str);
  return 0;
} */

//! 4. Write a function to reverse a string word-wise.
// (For example, if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg")
/* #include <stdio.h>
#include <string.h>
void reverse(char str[], int start, int end)
{
  while (start < end)
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
}
void reverseStringWordWise(char str[])
{
  // Reverse the entire string
  reverse(str, 0, strlen(str) - 1);

  // Reverse each word individually
  int start = 0;
  for (int i = 0; i <= strlen(str); i++)
  {
    if (str[i] == ' ' || str[i] == '\0')
    {
      reverse(str, start, i - 1);
      start = i + 1;
    }
  }
  printf("%s", str);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  printf("You Entered: %s\n", str);
  printf("After Reversing\n");
  reverseStringWordWise(str);
  return 0;
} */

/* //! 5. Write a function to do a case-insensitive comparison of two strings.
#include <stdio.h>
#include <string.h>
char toLower(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    return ch + 32; // Convert uppercase to lowercase
  }
  return ch;
}
int caseInSensitiveComparision(char str[], char newStr[])
{
  int i;

  // Compare each character after converting to lowercase
  for (i = 0; str[i] != '\0' && newStr[i] != '\0'; i++)
    if (toLower(str[i]) != toLower(newStr[i]))
      return str[i] - newStr[i]; // Return the difference

  // Handle strings of different lengths
  if (str[i] != '\0' || newStr[i] != '\0')
    return str[i] - newStr[i]; // Return the difference

  return 0; // Strings are equal
}

int main()
{
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';

  char newStr[30];
  printf("Enter a string for comparision from 1st string: ");
  fgets(newStr, 30, stdin);
  if (newStr[strlen(newStr) - 1] == '\n')
    newStr[strlen(newStr) - 1] = '\0';

  int result = caseInSensitiveComparision(str, newStr);
  printf("%s\n", result == 0 ? "Both are equal" : "Both are Not Equal");
  return 0;
} */

/* //! 6. Write a function to count the frequency of each character in the given string.
#include <stdio.h>
#include <string.h>
void strFrequencyCounter(char str[])
{
  int i, j, length = strlen(str);
  for (i = 0; i < length; i++)
  {
    if (str[i] == '\0') // skip the character which is already counted
      continue;

    int count = 1;
    for (j = i + 1; j < length; j++)
    {
      if (str[i] == str[j])
      {
        count++;
        // marking the character as processed by setting it to '\0'
        str[j] = '\0';
      }
    }
    printf("%c: %d\n", str[i], count);
  }
}
int main()
{
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  // preserving the original array from modification
  char str_copy[30];
  strcpy(str_copy, str);
  strFrequencyCounter(str_copy);
  return 0;
} */

/* //! 7. Write a function to find a word in a given string.
#include <stdio.h>
#include <string.h>
int wordInStringFinder(const char str[], const char word[])
{
  int strLen = strlen(str);
  int wordLen = strlen(word);
  int i, j;
  for (i = 0; i <= strLen - wordLen; i++)
  {
    int found = 1;
    for (j = 0; j < wordLen; j++)
    {
      if (str[i + j] != word[j])
      {
        found = 0;
        break;
      }
    }
    if (found)
      return 1;
  }
  return 0;
}
int main()
{
  char str[30], word[20];
  printf("Enter a string: ");
  fgets(str, 30, stdin);

  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';

  printf("Enter a word you want to find in string: \n");
  fgets(word, 20, stdin);

  if (word[strlen(word) - 1] == '\n')
    word[strlen(word) - 1] = '\0';

  if (wordInStringFinder(str, word))
    printf("%s is available in the given string.\n", word);
  else
    printf("%s is not available in the given string.\n", word);

  return 0;
} */

/* //! 8. Write a function to make the first character of each word in the string capital.
#include <stdio.h>
#include <string.h>
void capitalizeFirstLetter(char str[])
{
  int i = 0;
  if (str[i] >= 'a' && str[i] <= 'z')
  {
    str[i] -= 32;
  }
  i++;

  while (str[i] != '\0')
  {
    // if the current character is the space,capitalize the next string
    if (str[i] == ' ')
    {
      i++;
      if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    }
    i++;
  }
}

int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  capitalizeFirstLetter(str);

  printf("Modified String: %s\n", str);

  return 0;
} */

/* //! 9. Write a function to make an acronym name from a given name. For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", and "Bhavesh Gupta" becomes "B Gupta".
#include <stdio.h>
#include <string.h>

void fullNameToAcronymConverter(char str[])
{
  int len = strlen(str);

  int lastSpaceIndex = -1;
  for (int i = 0; i < len; i++)
  {
    if (str[i] == ' ')
    {
      lastSpaceIndex = i; // Find the index of the last space
    }
  }

  // Iterate through the string
  for (int i = 0; i < lastSpaceIndex; i++)
  {
    if (str[i] == ' ' && str[i + 1] != ' ')
    {
      printf("%c", str[i + 1]);
    }
    else if (i == 0)
    {
      printf("%c ", str[i]); // Print the first letter of the next word
    }
  }

  for (int i = lastSpaceIndex; i < len; i++)
  {
    printf("%c", str[i]);
  }
}

int main()
{
  char str[50];

  printf("Enter a string: ");
  fgets(str, 50, stdin);

  // Remove the newline character added by fgets
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';

  fullNameToAcronymConverter(str);

  return 0;
} */

/* //! 10. Write a function to concatenate two strings.
#include <stdio.h>
#include <string.h>

void concatenate_strings(char str1[], char str2[], char result[])
{
  int i = 0, j = 0;

  // Copy the first string into result
  while (str1[i] != '\0')
  {
    result[i] = str1[i];
    i++;
  }

  // Append the second string to result
  while (str2[j] != '\0')
  {
    result[i] = str2[j];
    i++;
    j++;
  }

  // Null-terminate the result string
  result[i] = '\0';
}

int main()
{
  char str1[50];
  char str2[50];

  printf("Enter a string: ");
  fgets(str1, 50, stdin);
  fgets(str2, 50, stdin);

  // Remove the newline character added by fgets
  if (str1[strlen(str1) - 1] == '\n')
    str1[strlen(str1) - 1] = '\0';
  if (str2[strlen(str2) - 1] == '\n')
    str2[strlen(str2) - 1] = '\0';

  char result[100]; // Ensure this is large enough to hold the concatenated result

  concatenate_strings(str1, str2, result);
  printf("Concatenated String: %s\n", result);

  return 0;
}
 */