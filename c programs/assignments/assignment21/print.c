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
// _______New Approach__________ (Run loop till str[i]!='\0')
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
// _______New Approach__________ (taking input from scanf and %c)-[but u have to input string without space- Ex: bhanupratap]
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
//____________New Approach_____________{using switch case}
/* #include <stdio.h>
#include <string.h>
void countAlphabetsDigitsSpecial(char str[])
{
  int i, alpha = 0, digit = 0, special = 0;
  for (i = 0; str[i]; i++)
  {
    switch (str[i])
    {
    case 'a' ... 'z':
    case 'A' ... 'Z':
      alpha++;
      break;
    case '0' ... '9':
      digit++;
      break;
    default:
      special++;
      break;
    }
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

// TODO: Questions from Other Source

/* //! 11. Read a line of text from the user using fgets and then print it using puts.
#include <stdio.h>

int main()
{
  char usingPut[100];

  printf("Enter a line of text: ");
  fgets(usingPut, sizeof(usingPut), stdin); // Read a line of text

  printf("You entered: ");
  puts(usingPut); // Print the line of text

  return 0;
} */

/* //! 12. Use printf with format specifiers to format and print a date string (day, month, year).
#include <stdio.h>
int main()
{
  int date = 1;
  int month = 2;
  int year = 2025;
  printf("Formateed Date: %02d/%02d/%04d\n", date, month, year);
  return 0;
} */

/* //! 13. Write a program to convert an input string to uppercase.
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
  printf("String in uppercase: \n%s", str);
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  uppercaseStringConverter(str);
  return 0;
} */

/* //! 14. Create a simple text-based user login system that compares a stored password string using strcmp.
#include <stdio.h>
#include <string.h>
void passwordConfirmation(char pass[], char correctPass[])
{
  int result = strcmp(pass, correctPass);
  if (result == 0)
    printf("Login SuccessFull");
  else
    printf("Password does not matched..try again later");
}
int main()
{
  char pass[30];
  char correctPass[30];

  printf("Enter a password: ");
  fgets(pass, 30, stdin);
  // strcspn(pass, "\n") finds the position of the newline character (\n) in the string pass  - ["string complement span"].
  pass[strcspn(pass, "\n")] = '\0';

  printf("confirm your password: ");
  fgets(correctPass, 30, stdin);
  correctPass[strcspn(correctPass, "\n")] = '\0';

  passwordConfirmation(pass, correctPass);
  return 0;
} */

/* //! 15. Use a 2-D character array to store and display a tic-tac-toe board.
#include <stdio.h>

int main()
{
  char board[3][3] = {
      {'_', '_', '_'}, // row 1
      {'_', '_', '_'}, // row 2
      {'_', '_', '_'}  // row 3
  };

  printf("Tic-Tac-Toe Board: \n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %c", board[i][j]);
      if (j < 2)
        printf(" |");
    }
    printf("\n");
    if (i < 2)
      printf("------------\n");
  }

  return 0;
} */
//? Extended Example with user input
/* #include <stdio.h>

// Function to display the board
void displayBoard(char board[3][3])
{
  printf("Tic-Tac-Toe Board:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %c ", board[i][j]);
      if (j < 2)
        printf("|");
    }
    printf("\n");
    if (i < 2)
      printf("-----------\n");
  }
}

// Function to check if a player has won
int checkWin(char board[3][3], char player)
{
  // Check rows
  for (int i = 0; i < 3; i++)
  {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
      return 1; // Player wins
  }

  // Check columns
  for (int j = 0; j < 3; j++)
  {
    if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
      return 1; // Player wins
  }

  // Check diagonals
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    return 1; // Player wins
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    return 1; // Player wins

  return 0; // No winner yet
}

int main()
{
  char board[3][3] = {
      {'_', '_', '_'},
      {'_', '_', '_'},
      {'_', '_', '_'}};

  int row, col;
  char player = 'X';
  int turn;

  for (turn = 0; turn < 9; turn++)
  {
    displayBoard(board);

    printf("Player %c's turn. Enter row (0-2) and column (0-2): ", player);
    scanf("%d %d", &row, &col);

    // Validate input
    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != '_')
    {
      printf("Invalid move! Try again.\n");
      turn--; // Repeat the turn
      continue;
    }

    // Place the player's symbol on the board
    board[row][col] = player;

    // Check if the current player has won
    if (checkWin(board, player))
    {
      displayBoard(board);
      printf("Player %c wins!\n", player);
      return 0; // End the game
    }

    // Switch players
    player = (player == 'X') ? 'O' : 'X';
  }

  // If no one wins after 9 turns, it's a draw
  displayBoard(board);
  printf("It's a draw!\n");

  return 0;
} */

/* //! 16. Write a function that takes a string and reverses it in place.
#include <stdio.h>
#include <string.h>
void reverseString(char str[])
{
  int i, j;
  int len = strlen(str);
  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    // Swap characters at position i and j
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}
void reverseStrInPlace(char *str)
{
  reverseString(str);
  printf("Reversed String is: %s\n", str);
}
int main()
{
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  printf("You Entered: %s\n", str);
  reverseStrInPlace(str);
  return 0;
} */

/* //! 17. Implement a trim function that removes leading and trailing spaces from a string.
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
  char str[30];
  printf("Enter a string: ");
  fgets(str, 30, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  removingSpaces(str);
  return 0;
} */

/* //! 18. Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result.
#include <stdio.h>
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

/* //! 19. Create a program using do-while to find a password checker until a valid password is entered.
#include <stdio.h>
#include <string.h>

int main()
{
  char correctPass[] = "secure123"; // Stored correct password
  char userPass[30];

  do
  {
    printf("Enter the password: ");
    fgets(userPass, 30, stdin);
    userPass[strcspn(userPass, "\n")] = '\0'; // Remove newline character

    if (strcmp(userPass, correctPass) == 0)
    {
      printf("Login Successful!\n");
      break; // Exit the loop if the password is correct
    }
    else
    {
      printf("Incorrect password. Try again.\n");
    }
  } while (1);

  return 0;
} */

/* //! 20. Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.
#include <stdio.h>
#include <string.h>
int main()
{
  char input[100];
  const char keyword[] = "exit";

  while (1)
  {
    printf("Enter a string (or 'exit' to quit): ");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, keyword) == 0)
    {
      printf("Exiting the loop. GoodBye!!!\n");
      break;
    }
    else
      printf("you entered %s\n", input);
  }

  return 0;
} */