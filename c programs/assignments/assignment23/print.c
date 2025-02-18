// TODO: Assignment-23: Strings and Functions

/* //! 1. Write a function to check whether a given string is a palindrome or not.
#include <stdio.h>
#include <string.h>
void palindromeChecker(char str[])
{
  int i;
  int l = strlen(str) ;
  for (i = 0; i < l / 2; i++)
  {
    if (str[i] != str[l -1- i])
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
//_________________New Approach {using pointer}________________
/* #include <stdio.h>
#include <string.h>
//{The char * in the function's return type indicates that the function will return a pointer to a character, specifically the first character of the modified string after trimming.}
char *removingSpaces(char str[])
{
  int i = 0, j, k, count = 0;

  // Count the number of trailing spaces
  // Start from the end of the string and move backwards
  for (k = strlen(str) - 1; str[k] == ' '; k--)
    count++;

  // Store the length of the string in 'k'
  k = strlen(str);

  // Skip leading spaces by incrementing 'i' until a non-space character is found
  while (str[i] == ' ')
    i++;

  // Shift the string to the left to remove leading spaces
  // Copy characters from position 'i' to the beginning of the string
  for (j = 0; str[j + i]; j++)
    str[j] = str[i + j]; // Move non-space characters to the front

  // Null-terminate the string at the correct position to remove trailing spaces
  str[k - count - i] = '\0';

  // Return the modified string thats why we use pointer above
  return str;
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  printf("Length before trimming: %d\n", strlen(str));
  printf("%s", removingSpaces(str));
  printf("\nLength after trimming: %d\n", strlen(str));
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
//__________________New Approach______________
/* #include <stdio.h>
#include <string.h>
// using above question logic for removing leading and trailing space
char *removingSpaces(char str[])
{
  int i = 0, j, k, count = 0;

  for (k = strlen(str) - 1; str[k] == ' '; k--)
    count++;
  k = strlen(str);

  while (str[i] == ' ')
    i++;

  for (j = 0; str[j + i]; j++)
    str[j] = str[i + j];

  str[k - count - i] = '\0';
  return str;
}
int wordCounter(char str[])
{
  int i, count = 0;
  removingSpaces(str); // using here
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
    {
      if (str[i] == str[i + 1])
        continue;
      else
        count++;
    }
  }

  return count + 1;
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  int result = wordCounter(str);
  printf("%s \ncontains %d words", str, result);
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
//_________New Approach {using above 2 logic wordCount+removingSpace}__________
/* #include <stdio.h>
#include <string.h>
// using above question logic for removing leading and trailing space
char *removingSpaces(char str[])
{
  int i = 0, j, k, count = 0;

  for (k = strlen(str) - 1; str[k] == ' '; k--)
    count++;
  k = strlen(str);

  while (str[i] == ' ')
    i++;

  for (j = 0; str[j + i]; j++)
    str[j] = str[i + j];

  str[k - count - i] = '\0';
  return str;
}
// using above question logic for counting words
int wordCounter(char str[])
{
  int i, count = 0;
  removingSpaces(str); // using here
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
    {
      if (str[i] == str[i + 1])
        continue;
      else
        count++;
    }
  }

  return count + 1;
}

char *reverse_word_wise(char str[])
{
  int j, i, k, word_count;
  word_count = wordCounter(str);
  char s[word_count][30]; // creating new 2d array and then i want to assign every word (which we get from wordCounter ) from str to in 2d arr

  for (i = 0, j = 0, k = 0; str[i]; i++, k++)
  {
    if (str[i] != ' ')
      s[j][k] = str[i];
    else
    {
      s[j][k] = '\0';
      j++;
      k = -1;
    }
  }
  // { The strcat function appends the second string to the first string, but it assumes that the first string is properly null-terminated. If the first string is not null-terminated }

  s[j][k] = '\0'; // Null-terminate the last word
  str[0] = '\0';  // reset the string
  for (j = word_count - 1; j >= 0; j--)
  {
    if (str[0] != '\0')
      strcat(str, " ");
    strcat(str, s[j]);
  }

  return str;
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  printf(" : %s", reverse_word_wise(str));
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
//____________New Approach {same as above just change lower to uppercase}____________
/* #include <stdio.h>
#include <string.h>
char toUpper(char ch)
{
  if (ch >= 'a' && ch <= 'a')
  {
    return ch - 32;
  }
  return ch;
}
int caseInSensitiveComparision(char str[], char newStr[])
{
  int i;

  for (i = 0; str[i] && newStr[i]; i++)
    if (toUpper(str[i]) != toUpper(newStr[i]))
      return str[i] - newStr[i]; // Return the difference

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
//__________________New Approach______________
// using ASCII table from 0 to 127
/* #include <stdio.h>
#include <string.h>
void strFrequencyCounter(char str[])
{
  int i, f[128] = {0}; // Array to store frequency of characters (ASCII 0 to 127)

  for (i = 0; str[i]; i++)
    f[str[i]]++; // Increment the count for the character at str[i]

  // Print the frequency of each character that appears in the string
  for (i = 0; i <= 127; i++)
    if (f[i] != '\0')
      // Check if the character with ASCII value 'i' appeared in the string
      printf("%c - %d\n", i, f[i]); // Print the character and its frequency
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
  char str[50], word[20];
  printf("Enter a string: ");
  fgets(str, 50, stdin);

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
//__________________New Approach______________**********************************************
/* #include <stdio.h>
#include <string.h>
int wordInStringFinder(char str[], char word[])
{

  int i, l, j;
  for (l = 0; word[l]; l++) // Find the length of the string
    ;
  for (i = 0; str[i + l - 1]; i++)
  { // Loop through the string to find the word
    for (j = 0; word[j]; j++)
    { // Compare each character of the word
      // printf("%c %c", str[i + l], word[j]);
      if (str[i + j] != word[j])
        break;
    }
    // printf("\n \n");
    // If a match is found, check the surrounding boundaries
    if (!word[j])
      if ((i == 0 && (str[i + l] == ' ' || str[i + l] == '\0')) || (str[i - 1] == ' ' && (str[i + l] == ' ' || str[i + l] == '\0')))
        return i;
  }
  return -1;
}
int main()
{
  char str[50] = "Mysirg Education Services";

  printf("%d", wordInStringFinder(str, "Services"));
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
}  */
//__________________New Approach______________
/* #include <stdio.h>
#include <string.h>
char *capitalizeFirstLetter(char str[])
{
  int i = 0;
  if (str[i] >= 'a' && str[i] <= 'z')
    str[i] -= 32;

  for (i = 1; str[i]; i++)
    if (str[i] == ' ' || i == 0)
      if (str[i + 1] != '\0' && str[i + 1] != ' ')
        if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
          str[i + 1] -= 32;

  return str;
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
//_________New Approach {using above 2 logic wordCount+removingSpace}__________
/* #include <stdio.h>
#include <string.h>
// using above quesetion logic for removing leading and trailling space
char *removingSpaces(char str[])
{
  int i = 0, j, k, count = 0;

  for (k = strlen(str) - 1; str[k] == ' '; k--)
    count++;
  k = strlen(str);

  while (str[i] == ' ')
    i++;

  for (j = 0; str[j + i]; j++)
    str[j] = str[i + j];

  str[k - count - i] = '\0';
  return str;
}
// using above quesetion logic for counting words
int wordCounter(char str[])
{
  int i, count = 0;
  removingSpaces(str); // using here
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
    {
      if (str[i] == str[i + 1])
        continue;
      else
        count++;
    }
  }

  return count + 1;
}

char *fullNameToAcronymConverter(char str[])
{
  int j, i, k, word_count;
  word_count = wordCounter(str);
  char s[word_count][30]; // creating 2d array

  for (i = 0, j = 0, k = 0; str[i]; i++, k++)
  {
    if (str[i] != ' ')
      s[j][k] = str[i];
    else
    {
      s[j][k] = '\0';
      j++;
      k = -1;
    }
  }

  s[j][k] = '\0'; // Null-terminate the last word
  str[0] = '\0';  // reset the string
  for (k = 1, i = 0; k < word_count; k++, i++)
  {
    str[i] = s[k - 1][0];
    i++;
    str[i] = ' ';
  }
  strcpy(str + i, s[word_count - 1]);
  return str;
}
int main()
{
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  printf("%s", fullNameToAcronymConverter(str));
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
//__________________New Approach______________
/* #include <stdio.h>
#include <string.h>
char *concatenate_strings(char str1[], char str2[])
{
  int i, j;
  for (i = 0; str1[i]; i++)
    ;
  for (j = 0; str2[j]; j++)
    str1[i + j] = str2[j];
  str1[i + j] = '\0';
  return str1;
}
int main()
{
  char str1[30] = "Bhanu Pratap";
  char str2[30] = " Seeta Ram";

  printf("Concatenated String: %s\n", concatenate_strings(str1, str2));
  return 0;
} */