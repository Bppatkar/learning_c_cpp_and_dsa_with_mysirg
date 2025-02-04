// TODO: Assignment-24: Handling Multiple Strings

/* //! 1. Write a function to store strings, taken from the user, into the given 2D char array.
#include <stdio.h>
#include <string.h>
void storeStr(char arr[3][15])
{
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("Enter a string %d: ", i + 1);
    fgets(arr[i], 15, stdin);
    // arr[i][strcspn(arr[i], "\n")] = '\0'; // Removing the newline character if it's read by fgets
    if (arr[i][strlen(arr[i]) - 1] == '\n')
      arr[i][strlen(arr[i]) - 1] = '\0';
  }
}
void displayStr(char arr[3][15])
{
  int i;
  printf("You Entered:\n");
  for (i = 0; i < 3; i++)
    printf("%s\n", arr[i]);
}
int main()
{
  char arr[3][15];
  storeStr(arr);
  displayStr(arr);
  return 0;
} */
//? fgets is designed to work with a string (1D array), not a 2D array directly.n the case of a 2D array like arr[3][5], fgets will read the entire line of input and store it in the first row of the array (essentially arr[0]), but this is not what you want because each row in the array should contain individual strings.

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

//! 3. Write a program to sort 10 city names stored in a two-dimensional array, taken from the user.
/* #include <stdio.h>
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
void sortingWord(char word[5][50])
{
  int i, j;
  char temp[50];
  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (strcmp(word[i], word[j]) > 0)
      {
        strcpy(temp, word[i]);
        strcpy(word[i], word[j]);
        strcpy(word[j], temp);
      }
    }
  }
  // printing sorted words
  for (i = 0; i < 5; i++)
  {
    printf("word %d) %s\n", i + 1, word[i]);
  }
}
int main()
{
  char word[5][50]; // 5 word, each up to 19 character's long
  int i;
  printf("Enter 5 words: \n");
  for (i = 0; i < 5; i++)
  {
    fgets(word[i], 50, stdin);
    word[i][strcspn(word[i], "\n")] = '\0';
  }
  sortingWord(word);
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

//! 7. Write a function to return the most repeating character in a list of strings.

//! 8. Write a function to check whether a pair of strings are anagrams or not.
// Both strings are stored in a 2D char array.

//! 9. Write a function to store all the words in a given string that start with 'a' in a two-dimensional char array.

//! 10. A 2D array is filled with 10 email IDs. Write a function to find how many of them belong to gmail.com.
