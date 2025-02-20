// TODO: Assignment-27: DMA

//! 1. Define a function to input a variable length string and store it in an array without memory wastage.
/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>
void inputVariableLengthString(char **str)
{
  char *temp = (char *)malloc(40 * sizeof(char)); // Temporary buffer to read input
  if (temp == NULL)
  {
    printf("Memory allocation failed...");
    return;
  }

  printf("Enter a string: ");
  fgets(temp, 40, stdin);
  temp[strlen(temp) - 1] = '\0'; // Remove newline character

  // allocating exact memory
  char *exact = (char *)malloc((strlen(temp) + 1) * sizeof(char));

  if (exact == NULL)
  {
    printf("Memory allocation failed!!\n");
    free(temp);
    return;
  }

  strcpy(exact, temp); // Copy input to the exact-sized memory
  free(temp);          // Free temporary buffer

  *str = exact; // Assign allocated memory to str
}
int main()
{
  char *str = NULL; // Pointer to store the dynamically allocated string
  inputVariableLengthString(&str);
  if (str != NULL)
  {
    printf("You entered: %s\n", str);
    free(str);
  }
  else
  {
    printf("No valid input stored.\n");
  }

  return 0;
} */
//______________shorter and cleaner version of your code______________
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputVariableLengthString(char **str) {
    char temp[40];
    printf("Enter a string: ");
    fgets(temp, 40, stdin);
    temp[strcspn(temp, "\n")] = '\0'; // Remove newline character

    *str = malloc(strlen(temp) + 1);
    if (*str) strcpy(*str, temp);
}

int main() {
    char *str = NULL;
    inputVariableLengthString(&str);

    if (str) {
        printf("You entered: %s\n", str);
        free(str);
    }
    return 0;
} */

//! 2. Write a program to ask the user to input the number of data values they would like to enter,then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of the data values.

//! 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.

//! 4. Write a function to merge two array elements and store them in a dynamically created array.
// Return the address of this dynamically created array.

//! 5. Define a structure Student with name, roll number, and college name as members.
// Define another structure Team with two Student type variables as members.

//! 6. In question 5, define a method to dynamically create a Student type variable and initialize it with
// the values received in the arguments. Return the address of the Student type variable.

//! 7. In question 5, define a method to dynamically create a Team variable,
// initialize it with the received arguments. Return the address of the Team variable.

//! 8. In question 5, define a method to display data of Student type,
// also define a method to display data of Team type.

//! 9. In question 5, define a method to dynamically create an array of pointers of type Student.
// The array size is received as an argument. Return the address of the array.

//! 10. In question 5, define a method to dynamically create an array of pointers of type Team.
// The array size is received as an argument. Return the address of the array.

//! 11. In question 5, define a driver function to create 6 Students and 3 Teams.
// Form teams by assigning two students to each team. At last, display the list of teams with students in them.
