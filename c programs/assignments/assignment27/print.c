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

char *inputVariableLengthString(char **str)
{
  char temp[30];
  printf("Enter a string: ");
  fgets(temp, 30, stdin);
  temp[strlen(temp) - 1] = '\0';

  // allocating actual memory
  *str = (char *)malloc(strlen(temp) + 1);

  if (*str == NULL)
  {
    printf("Memory allocation failed\n");
    return NULL;
  }

  strcpy(*str, temp);
  return *str;
}
int main()
{
  char *str = NULL;

  inputVariableLengthString(&str);
  int len = strlen(str);
  if (str)
  {
    printf("you Entered: %s\n and its length is %d: ", str, len);

    free(str);
  }
  return 0;
} */

/* //! 2. Write a program to ask the user to input the number of data values they would like to enter,then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of the data values.
#include <stdio.h>
#include <stdlib.h>

void averageCalc(int *arr, int size)
{
  if (arr == NULL || size == 0)
  {
    printf("Error: invalid input\n");
    return;
  }

  int i, total = 0;
  float avg;
  for (i = 0; i < size; i++)
  {
    total += arr[i];
  }
  avg = (float)total / size;
  printf("average is: %0.2f", avg);
}
int main()
{
  int n;
  printf("Enter the length of array: ");
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));

  if (arr == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter %d value for array ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  averageCalc(arr, n);
  free(arr);
  return 0;
} */

/* //! 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("how many numbers you want to summing up: ");
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL)
  {
    printf("memory allocation failed!!");
    return 1;
  }

  printf("enter %d numbers: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int total = 0;
  for (int i = 0; i < n; i++)
    total += arr[i];
  printf("sum is %d\n", total);

  free(arr);
  return 0;
} */

/* //! 4. Write a function to merge two array elements and store them in a dynamically created array. Return the address of this dynamically created array.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *setArr(int *arr, int size)
{
  int i;
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  return arr;
}

int *mergingArr(int *arr1, int size1, int *arr2, int size2)
{
  // merging that two array into single array
  int *newArr = (int *)malloc((size1 + size2) * sizeof(int));
  if (newArr == NULL)
  {
    printf("Memory creation failed!!!");
    return NULL;
  }
  int i, j;

  for (i = 0; i < size1; i++)
    newArr[i] = arr1[i];
  for (j = 0; j < size2; j++)
    newArr[size1 + j] = arr2[j];
  return newArr;
}
int main()
{
  int n, m;
  printf("Enter the length of arr1: ");
  scanf("%d", &n);
  printf("Enter the length of arr2: ");
  scanf("%d", &m);

  int arr1[n], arr2[n];

  printf("Enter %d numbers in arr1:\n", n);
  setArr(arr1, n);

  printf("Enter %d numbers in arr2:\n", m);
  setArr(arr2, m);

  int *returnedAddress = mergingArr(arr1, n, arr2, n);
  free(returnedAddress);
  return 0;
} */

/* //! 5. Define a structure Student with name, roll number, and college name as members. Define another structure Team with two Student type variables as members.
#include <stdio.h>
struct Student
{
  int roll_number;
  char name[20];
  char collageName[30];
};
struct Team
{
  struct Student s1, s2;
};

int main()
{
  return 0;
} */

//! 6. In question 5, define a method to dynamically create a Student type variable and initialize it with the values received in the arguments. Return the address of the Student type variable.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Students
{
  int roll_number;
  char name[20];
  char collageName[30];
};

struct Students *createStudent(int roll_number, char *name, char *collageName)
{

  // allocating memory for student
  char *name = (char *)malloc(strlen(name) + 1 * sizeof(char));
  if (name == NULL)
  {
    printf("Memory allocation is failed");
    return -1;
  }
  // taking input for name
  printf("Enter name: ");
  fgets(name, strlen(name), stdin);
  name[strlen(name) - 1] = '\0';

  char *collageName = (char *)malloc(strlen(collageName) + 1 * sizeof(char));
  if (collageName == NULL)
  {
    printf("Memory allocation is failed");
    return -1;
  }
  // taking input fro collage name
  printf("Enter collage name: ");
  fgets(collageName, strlen(collageName), stdin);
  name[strlen(name) - 1] = '\0';

  return student;
}

struct Team
{
  struct Students s1, s2;
};

int main()
{
  int roll_number;
  char name[20], collageName[30];

  printf("Enter roll number: ");
  scanf("%d", &roll_number);
  getchar(); // to consume the newline left by scanf

  printf("Enter name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Enter college name: ");
  fgets(collageName, sizeof(collageName), stdin);
  collageName[strlen(collageName) - 1] = '\0';

  // creating student dynamically
  struct Students *student = createStudent(roll_number, name, collageName);

  if (student != NULL)
  {
    printf("\nStudent Details:\n");
    printf("Roll number: %d\n", student[roll_number]);
    printf("Name of student: %s\n", student[name]);
    printf("college name: %s\n", student[collageName]);
  }

  free(student);

  return 0;
}

//! 7. In question 5, define a method to dynamically create a Team variable, initialize it with the received arguments. Return the address of the Team variable.

//! 8. In question 5, define a method to display data of Student type, also define a method to display data of Team type.

//! 9. In question 5, define a method to dynamically create an array of pointers of type Student. The array size is received as an argument. Return the address of the array.

//! 10. In question 5, define a method to dynamically create an array of pointers of type Team. The array size is received as an argument. Return the address of the array.

//! 11. In question 5, define a driver function to create 6 Students and 3 Teams. Form teams by assigning two students to each team. At last, display the list of teams with students in them.
