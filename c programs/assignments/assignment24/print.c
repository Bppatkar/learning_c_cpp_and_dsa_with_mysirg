// TODO: Assignment-24: Handling Multiple Strings

/* //! 1. Write a function to store strings, taken from the user, into the given 2D char array.
#include <stdio.h>
#include <string.h>
void storeStr(char arr[][15], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("Enter a string %d: ", i + 1);
    fgets(arr[i], 15, stdin);
    // arr[i][strcspn(arr[i], "\n")] = '\0'; // Removing the newline character if it's read by fgets
    if (arr[i][strlen(arr[i]) - 1] == '\n')
      arr[i][strlen(arr[i]) - 1] = '\0';
  }
}
void displayStr(char arr[][15], int n)
{
  int i;
  printf("You Entered:\n");
  for (i = 0; i < n; i++)
    printf("%s\n", arr[i]);
}
int main()
{
  char arr[3][15];
  storeStr(arr,3);
  displayStr(arr, 3);
  return 0;
} */
//? fgets is designed to work with a string (1D array), not a 2D array directly.n the case of a 2D array like arr[3][5], fgets will read the entire line of input and store it in the first row of the array (essentially arr[0]), but that is not what we want because each row in the array should contain individual strings.

/* //! 2. Write a program to find the number of vowels in each of the 5 strings stored in a two-dimensional array, taken from the user.
#include <stdio.h>
#include <string.h>
void storeStr(char str[5][20])
{
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a string %d): ", i + 1);
    fgets(str[i], 20, stdin);
    if (str[i][strlen(str[i]) - 1] == '\n')
      str[i][strlen(str[i]) - 1] = '\0';
    // or we can use strcspn
    // str[i][strcspn(str[i], '\n')] = '\0';
  }
}
void printingStr(char str[5][20])
{
  int i, j, k, count;
  char vowel[] = "aeiouAEIOU";
  for (i = 0; i < 5; i++)
  {
    count = 0;
    // str[i] is a string (a pointer to the first character) and not an integer representing the length of the string. You should use strlen(str[i]) instead.
    for (j = 0; j < strlen(str[i]); j++)
    {
      for (k = 0; k < 10; k++) // loop through all vowels
      {
        if (str[i][j] == vowel[k])
        {
          count++;
          break;
        }
      }
    }
    printf("Number of vowels in string %d: %d\n", i + 1, count);
  }
}
int main()
{
  char str[5][20];
  storeStr(str);
  printingStr(str);
  return 0;
} */

/* //! 3. Write a program to sort 10 city names stored in a two-dimensional array, taken from the user.
 #include <stdio.h>
#include <string.h>
void storingCity(char city[10][20])
{
  int i, j;
  printf("Enter 10 cities name: ");
  for (i = 0; i < 10; i++)
  {
    fgets(city[i], 20, stdin);
    // if (city[i][strlen(city[i]) - 1] == '\n')
    // city[i][strlen(city[i]) - 1] = '\0';
    // we can also write like this
    city[i][strcspn(city[i], "\n")] = '\0';
  }
  char temp[20];
  // sorting cities
  for (i = 0; i < 9; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      int result = strcmp(city[i], city[j]);
      if (result > 0)
      {
        strcpy(temp, city[i]);
        strcpy(city[i], city[j]);
        strcpy(city[j], temp);
      }
    }
  }

  // printing 2d array
  for (i = 0; i < 10; i++)
  {
    printf("%s\n", city[i]);
  }
}

int main()
{
  char city[10][20];
  storingCity(city);
  return 0;
} */

/* //! 4. Write a function to store each word of a string in a 2D char array.
#include <stdio.h>
#include <string.h>

// using assignment 23 question logic for removing leading and trailing space
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

// using assignment 23 question logic for counting words
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

void splitWord(char str[], char word[][50])
{
  int j, i, k, word_count;
  word_count = wordCounter(str);
  char s[word_count][30]; // creating new 2d array and then i want to assign every word (which we get from wordCounter ) from str to in 2d arr

  for (i = 0, j = 0, k = 0; str[i]; i++, k++)
  {
    if (str[i] != ' ')
      word[j][k] = str[i];
    else
    {
      word[j][k] = '\0';
      j++;
      k = -1;
    }
  }
  word[j][k] = '\0';
}
int main()
{
  char str[] = "mysirg education services private limited";
  char word[5][50]; // 5 word, each up to 19 character's long
  int i;
  splitWord(str, word);

  // printing sorted words
  for (i = 0; i < 5; i++)
  {
    printf("word %d) %s\n", i + 1, word[i]);
  }
  return 0;
} */

/* //! 5. Write a function to remove duplicate names stored in a list of names in a 2D char array.
#include <stdio.h>
#include <string.h>
void removeDuplicate(char str[10][50])
{
  int i, j;
  int flag;

  for (i = 0; i < 10; i++)
  {
    flag = 0; // reseting flag for each word
    for (j = 0; j < i; j++)
    {
      if (strcmp(str[i], str[j]) == 0)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
      printf("%s \n", str[i]);
  }
}
int main()
{
  char str[10][50];
  int i;
  printf("Enter 10 words: \n");
  for (i = 0; i < 10; i++)
  {
    fgets(str[i], 50, stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  printf("\nUnique words:\n");
  removeDuplicate(str);
  return 0;
} */

/* //! 6. Write a program to find words ending with the letter 's' and store each such word in a 2D char array.
#include <stdio.h>
#include <string.h>
void findLetterS(char str[5][20])
{
  int i;
  char words[10][20]; // to store words ending in 's'
  int wordCount = 0;
  for (i = 0; i < 5; i++)
  {
    int len = strlen(str[i]); // getting length of each word
    if (len > 0 && str[i][len - 1] == 's')
    {
      strcpy(words[wordCount], str[i]);
      wordCount++;
    }
  }

  // printing collected words
  printf("Words Ending with 's'\n");
  for (i = 0; i < wordCount; i++)
    printf("%s\n", words[i]);
}
int main()
{
  int i;
  char str[5][20];
  printf("Enter 5 strings: ");
  for (i = 0; i < 5; i++)
  {
    fgets(str[i], 20, stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  findLetterS(str);
  return 0;
} */

/* //! 7. Write a function to return the most repeating character in a list of strings.
#include <stdio.h>
#include <string.h>
void repeatingChar(char str[5][20])
{
  int i, j, count[26] = {0};
  for (i = 0; i < 5; i++)
    for (j = 0; str[i][j] != '\0'; j++)
      if (str[i][j] >= 'a' && str[i][j] <= 'z')
        count[str[i][j] - 'a']++;

  // find most repeating character
  int maxIndex = 0;
  for (i = 1; i < 26; i++)
  {
    if (count[i] > count[maxIndex])
      maxIndex = i;
  }

  // printing the frequency of all letters
  printf("Character frequencies:\n");
  for (i = 1; i < 26; i++)
    if (count[i] > 0)
      printf("%c -%d times\n", 'a' + i, count[i]);

  // print most repeating character
  printf("\n%c the most repeating character is :%d times\n", 'a' + maxIndex, count[maxIndex]);
}

int main()
{
  char str[5][20];
  printf("Enter 5 string: ");
  for (int i = 0; i < 5; i++)
  {
    fgets(str[i], 20, stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  repeatingChar(str);

  return 0;
} */

/* //! 8. Write a function to check whether a pair of strings are anagrams or not. Both strings are stored in a 2D char array.
#include <stdio.h>
#include <string.h>
void checkAnagram(char str[][20])
{
  int i, j, len, count[26] = {0};
  int len1 = strlen(str[0]); // length of first string
  int len2 = strlen(str[1]); // length of second string

  // printf("length of first string: %d\n", len1);
  // printf("length of second string: %d\n", len2);

  // Step 1: If lengths are different, they are NOT anagrams
  if (len1 != len2)
  {
    printf("No, They are not anagram\n");
    return;
  }
  // Step 2: Count characters in first string and subtract for second string
  for (i = 0; i < len1; i++)
  {
    count[str[0][i] - 'a']++; // increment for first string
    count[str[1][i] - 'a']--; // decrement for second string
  }
  // Step 3: check if all counts are zero (meaning both string are balanced)
  for (i = 0; i < 26; i++)
  {
    if (count[i] != 0)
    {
      printf("No, They are not anagram\n");
      return;
    }
  }
  printf("Yes, they are anagrams.\n");
}
int main()
{
  char str[2][20];
  printf("Enter string: ");
  for (int i = 0; i < 2; i++)
  {
    fgets(str[i], 20, stdin);
    // str[i][strcspn(str[i], "\n")] = '\0';
    if (str[i][strlen(str[i]) - 1] == '\n')
      str[i][strlen(str[i]) - 1] = '\0';
  }

  checkAnagram(str);
} */

/* //! 9. Write a function to store all the words in a given string that start with 'a' in a two-dimensional char array.
#include <stdio.h>
#include <string.h>
void storeWordsStartingWithA(char str[100])
{
  int i = 0, wordIndex = 0, charIndex = 0;
  char words[10][20];

  while (str[i] != '\0')
  { // skip spaces
    while (str[i] == ' ')
      i++;
    // if end of string , break
    if (str[i] == '\0')
      break;

    if (str[i] == 'a')
    {
      charIndex = 0; // reset character index for new word

      // copy the word
      while (str[i] != ' ' && str[i] != '\0')
        words[wordIndex][charIndex++] = str[i++];

      words[wordIndex][charIndex] = '\0'; // null terminate the word
      wordIndex++;                        // move to the next word slot
    }
    else
    {
      // skip the current word if it doesn't start with 'a'
      while (str[i] != ' ' && str[i] != '\0')
        i++;
    }
  }
  // printing stored words
  printf("WOrds starting with 'a':\n");
  for (int j = 0; j < wordIndex; j++)
    printf("%s\n", words[j]);
}
int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  // if (str[strlen(str) - 1] == '\n')
  //   str[strlen(str) - 1] = '\0';
  str[strcspn(str, "\n")] = '\0';
  storeWordsStartingWithA(str);
  return 0;
} */

/* //! 10. A 2D array is filled with 10 email IDs. Write a function to find how many of them belong to gmail.com.
#include <stdio.h>
#include <string.h>
void gmailFinder(char str[10][50])
{
  int i, len, count = 0;
  char gmail[] = "@gmail.com";

  for (int i = 0; i < 10; i++)
  {
    len = strlen(str[i]);

    if (len > 10)
    {
      int match = 1;

      for (int j = 0; j < 10; j++)
      {
        if (str[i][len - 10 + j] != gmail[j])
        {
          match = 0;
          break;
        }
      }
      if (match)
        count++;
    }
  }
  printf("Number of gmail address :%d\n", count);
}
int main()
{
  char str[10][50];
  printf("Enter a string: ");
  for (int i = 0; i < 10; i++)
  {
    fgets(str[i], 50, stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  gmailFinder(str);
  return 0;
} */