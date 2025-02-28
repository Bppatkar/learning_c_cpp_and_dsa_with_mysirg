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
  char name[30];
  char collegeName[30];
};
struct Team
{
  struct Student s1, s2;
};

int main()
{
  return 0;
} */

/* //! 6. In question 5, define a method to dynamically create a Student type variable and initialize it with the values received in the arguments. Return the address of the Student type variable.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Students
{
  int roll_number;
  char name[30];
  char collegeName[30];
};

struct Students *createStudent(int roll_number, char *name, char *collegeName)
{

  // allocating memory for student
  struct Students *student = (struct Students *)malloc(sizeof(struct Students));

  if (student == NULL)
  {
    printf("Memory allocation failed!!!!!");
    return NULL;
  }

  (*student).roll_number = roll_number;
  strcpy((*student).name, name);
  strcpy((*student).collegeName, collegeName);

  return student;
}

struct Team
{
  struct Students s1, s2;
};

int main()
{
  int roll_number;
  char name[30], collegeName[30];

  printf("Enter roll number: ");
  scanf("%d", &roll_number);
  getchar(); // to consume the newline left by scanf

  printf("Enter name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Enter college name: ");
  fgets(collegeName, sizeof(collegeName), stdin);
  collegeName[strlen(collegeName) - 1] = '\0';

  // creating student dynamically
  struct Students *student = createStudent(roll_number, name, collegeName);

  if (student != NULL)
  {
    printf("\nStudent Details:\n");
    printf("Roll number: %d\n", (*student).roll_number);
    printf("Name of student: %s\n", (*student).name);
    printf("college name: %s\n", (*student).collegeName);
  }

  free(student);

  return 0;
} */

/* //! 7. In question 5, define a method to dynamically create a Team variable, initialize it with the received arguments. Return the address of the Team variable.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Students
{
  int roll_number;
  char name[30];
  char collegeName[30];
};
struct Team
{
  struct Students s1, s2;
};

struct Students *createStudent(int roll_number, char *name, char *collegeName)
{
  // allocating memory for student
  struct Students *student = (struct Students *)malloc(sizeof(struct Students));

  if (student == NULL)
  {
    printf("Memory allocation failed!!!!!");
    return NULL;
  }

  (*student).roll_number = roll_number;
  strcpy((*student).name, name);
  strcpy((*student).collegeName, collegeName);

  return student;
}

struct Team *createTeam(struct Students *s1, struct Students *s2)
{

  struct Team *teamMember = (struct Team *)malloc(sizeof(struct Team));

  if (teamMember == NULL)
  {
    printf("Memory allocation failed!!!!!");
    return NULL;
  }

  (*teamMember).s1 = *(s1);
  (*teamMember).s2 = *(s2);
  return teamMember;
}

int main()
{
  int roll_number1;
  int roll_number2;
  // When using fgets(), you are reusing the same name and collegeName arrays for both students.
  // Since C does not copy strings automatically when assigning, the second student's data overwrites the first student's data in memory.

  // Solution
  // Use separate arrays for each student's details before calling createStudent().
  char name1[30], collegeName1[30];
  char name2[30], collegeName2[30];

  // Creating first student
  printf("Enter details for first student:\n");
  printf("Enter roll number: ");
  scanf("%d", &roll_number1);
  while (getchar() != '\n')
    ; // Clear input buffer

  printf("Enter name: ");
  fgets(name1, sizeof(name1), stdin);
  name1[strcspn(name1, "\n")] = '\0'; // Remove newline

  printf("Enter college name: ");
  fgets(collegeName1, sizeof(collegeName1), stdin);
  collegeName1[strcspn(collegeName1, "\n")] = '\0'; // Remove newline

  // creating student dynamically
  struct Students *student1 = createStudent(roll_number1, name1, collegeName1);

  // creating second student
  printf("\nEnter details for second student:\n");

  printf("Enter roll number: ");
  scanf("%d", &roll_number2);
  while (getchar() != '\n')
    ; // Clear input buffer

  printf("Enter name: ");
  fgets(name2, sizeof(name2), stdin);
  name2[strcspn(name2, "\n")] = '\0';

  printf("Enter college name: ");
  fgets(collegeName2, sizeof(collegeName2), stdin);
  collegeName2[strcspn(collegeName2, "\n")] = '\0';

  // creating student dynamically
  struct Students *student2 = createStudent(roll_number2, name2, collegeName2);

  struct Team *TeamStore = createTeam(student1, student2);

  // free allocated memory
  free(student1);
  free(student2);
  free(TeamStore);

  return 0;
} */

/* //! 8. In question 5, define a method to display data of Student type, also define a method to display data of Team type.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Students
{
  int roll_number;
  char name[30];
  char collegeName[30];
};
struct Team
{
  struct Students s1, s2;
};

struct Students *createStudent(int roll_number, char *name, char *collegeName)
{
  // allocating memory for student
  struct Students *student = (struct Students *)malloc(sizeof(struct Students));

  if (student == NULL)
  {
    printf("Memory allocation failed!!!!!");
    return NULL;
  }

  (*student).roll_number = roll_number;
  strcpy((*student).name, name);
  strcpy((*student).collegeName, collegeName);

  return student;
}

struct Team *createTeam(struct Students *s1, struct Students *s2)
{

  struct Team *teamMember = (struct Team *)malloc(sizeof(struct Team));

  if (teamMember == NULL)
  {
    printf("Memory allocation failed!!!!!");
    return NULL;
  }

  (*teamMember).s1 = *(s1);
  (*teamMember).s2 = *(s2);
  return teamMember;
}

void printStudents(struct Students *student)
{
  printf("\nStudent Details:\n");
  printf("Roll Number: %d\n", (*student).roll_number);
  printf("Name: %s\n", (*student).name);
  printf("College: %s\n", (*student).collegeName);
}
void printTeam(struct Team *team)
{

  printf("\n--- Team Details ---\n");
  printf("First Student:\n");
  printStudents(&(*team).s1);
  printf("\nSecond Student:\n");
  printStudents(&(*team).s2);
}

int main()
{
  int roll_number1;
  int roll_number2;
  // When using fgets(), you are reusing the same name and collegeName arrays for both students.
  // Since C does not copy strings automatically when assigning, the second student's data overwrites the first student's data in memory.

  // Solution
  // Use separate arrays for each student's details before calling createStudent().
  char name1[30], collegeName1[30];
  char name2[30], collegeName2[30];

  // Creating first student
  printf("Enter details for first student:\n");
  printf("Enter roll number: ");
  scanf("%d", &roll_number1);
  while (getchar() != '\n')
    ; // Clear input buffer

  printf("Enter name: ");
  fgets(name1, sizeof(name1), stdin);
  name1[strcspn(name1, "\n")] = '\0'; // Remove newline

  printf("Enter college name: ");
  fgets(collegeName1, sizeof(collegeName1), stdin);
  collegeName1[strcspn(collegeName1, "\n")] = '\0'; // Remove newline

  // creating student dynamically
  struct Students *student1 = createStudent(roll_number1, name1, collegeName1);

  // creating second student
  printf("\nEnter details for second student:\n");

  printf("Enter roll number: ");
  scanf("%d", &roll_number2);
  while (getchar() != '\n')
    ; // Clear input buffer

  printf("Enter name: ");
  fgets(name2, sizeof(name2), stdin);
  name2[strcspn(name2, "\n")] = '\0';

  printf("Enter college name: ");
  fgets(collegeName2, sizeof(collegeName2), stdin);
  collegeName2[strcspn(collegeName2, "\n")] = '\0';

  // creating student dynamically
  struct Students *student2 = createStudent(roll_number2, name2, collegeName2);

  struct Team *TeamStore = createTeam(student1, student2);
  printTeam(TeamStore);

  // free allocated memory
  free(student1);
  free(student2);
  free(TeamStore);

  return 0;
} */

/* //! 9. In question 5, define a method to dynamically create an array of pointers of type Student. The array size is received as an argument. Return the address of the array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
  int roll_number;
  char name[20];
  char collegeName[30];
};
struct Team
{
  struct Student s1, s2;
};

// function to dynamically allocate an array of student pointers
struct Student **createStudentsArrayusingCalloc(int size)
{
  struct Student **studentsUsingCalloc = (struct Student **)calloc(size, sizeof(struct Student *));
  if (studentsUsingCalloc == NULL)
  {
    printf("Memory allocation failed!\n");
    return NULL;
  }
  return studentsUsingCalloc;
}

// function to create single student
struct Student *createStudent(int roll_num, char *name, char *college)
{
  struct Student *student = (struct Student *)malloc(sizeof(struct Student));
  if (student == NULL)
  {
    printf("Memory allocation failed!!!");
    return NULL;
  }
  // (*student).roll_number = roll_num;
  student->roll_number = roll_num;
  strcpy(student->name, name);
  strcpy(student->collegeName, college);

  return student;
}

// Function to print student details
void printStudent(struct Student *student)
{
  printf("\nStudent Details:\n");

  // printf("Roll Number: %d\n", (*student).roll_number);
  printf("Roll Number: %d\n", student->roll_number);
  printf("Name: %s\n", student->name);
  printf("College: %s\n", student->collegeName);
}

int main()
{
  int numOfStudents;
  printf("Enter Number of students: ");
  scanf("%d", &numOfStudents);
  while (getchar() != '\n') // clearing input buffer [a \n char left by scanf]
    ;

  struct Student **moreStudents = createStudentsArrayusingCalloc(numOfStudents);
  if (moreStudents == NULL)
    return 1;

  for (int i = 0; i < numOfStudents; i++)
  {
    int roll_number;
    char name[30], collegeName[30];

    printf("\nEnter details for student %d:\n", i + 1);
    printf("Enter roll number: ");
    scanf("%d", &roll_number);
    while (getchar() != '\n')
      ; // Clear input buffer

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline

    printf("Enter college name: ");
    fgets(collegeName, sizeof(collegeName), stdin);
    collegeName[strcspn(collegeName, "\n")] = '\0'; // Remove newline

    moreStudents[i] = createStudent(roll_number, name, collegeName);
  }
  // print student details using above function
  printf("\n_______Student Details_________\n");
  for (int i = 0; i < numOfStudents; i++)
    printStudent(moreStudents[i]);

  // free allocated memory
  for (int i = 0; i < numOfStudents; i++)
    free(moreStudents[i]);

  free(moreStudents);
  return 0;
} */

/* //! 10. In question 5, define a method to dynamically create an array of pointers of type Team. The array size is received as an argument. Return the address of the array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
  int roll_number;
  char name[20];
  char collegeName[30];
};
struct Team
{
  struct Student s1, s2;
};

// function to dynamically allocate an array of team pointers
struct Team **createTeamArrayUsingCalloc(int size)
{
  struct Team **teamUsingCalloc = (struct Team **)calloc(size, sizeof(struct Team *));
  if (teamUsingCalloc == NULL)
  {
    printf("Memory allocation failed!\n");
    return NULL;
  }

  // allocate memory for each team
  for (int i = 0; i < size; i++)
  {
    teamUsingCalloc[i] = (struct Team *)malloc(sizeof(struct Team));
    if (teamUsingCalloc[i] == NULL)
    {
      printf("Memory allocation failed for team!\n");
      return NULL;
    }
  }

  return teamUsingCalloc;
}

// function to dynamically allocate an array of student pointers
struct Student **createStudentsArrayUsingCalloc(int size)
{
  struct Student **studentsUsingCalloc = (struct Student **)calloc(size, sizeof(struct Student *));
  if (studentsUsingCalloc == NULL)
  {
    printf("Memory allocation failed!\n");
    return NULL;
  }
  return studentsUsingCalloc;
}

// function to create single student
struct Student *createStudent(int roll_num, char *name, char *college)
{
  struct Student *student = (struct Student *)malloc(sizeof(struct Student));
  if (student == NULL)
  {
    printf("Memory allocation failed!!!");
    return NULL;
  }
  // (*student).roll_number = roll_num;
  student->roll_number = roll_num;
  strcpy(student->name, name);
  strcpy(student->collegeName, college);

  return student;
}

// Function to print student details
void printStudent(struct Student *student)
{
  printf("\nStudent Details:\n");

  // printf("Roll Number: %d\n", (*student).roll_number);
  printf("Roll Number: %d\n", student->roll_number);
  printf("Name: %s\n", student->name);
  printf("College: %s\n", student->collegeName);
}

// function to print team details
void printTeam(struct Team *team, int team_number)
{
  printf("\n______Team%d______\n", team_number);
  // printStudent(&(*team).s1);
  printStudent(&team->s1);
  printStudent(&team->s2);
}

int main()
{
  int numOfStudents;
  printf("Enter Number of students: ");
  scanf("%d", &numOfStudents);
  while (getchar() != '\n') // clearing input buffer [a \n char left by scanf]
    ;

  struct Student **moreStudents = createStudentsArrayUsingCalloc(numOfStudents);
  if (moreStudents == NULL)
    return 1;

  struct Team **studentCollectTeam = createTeamArrayUsingCalloc(numOfStudents / 2);
  if (studentCollectTeam == NULL)
    return 1;

  for (int i = 0; i < numOfStudents; i++)
  {
    int roll_number;
    char name[30], collegeName[30];

    printf("\nEnter details for student %d:\n", i + 1);
    printf("Enter roll number: ");
    scanf("%d", &roll_number);
    while (getchar() != '\n')
      ; // Clear input buffer

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline

    printf("Enter college name: ");
    fgets(collegeName, sizeof(collegeName), stdin);
    collegeName[strcspn(collegeName, "\n")] = '\0'; // Remove newline

    moreStudents[i] = createStudent(roll_number, name, collegeName);
  }

  // Assign students to teams
  for (int i = 0, team_num = 0; i < numOfStudents; i += 2, team_num++)
  {
    studentCollectTeam[team_num]->s1 = *moreStudents[i];
    studentCollectTeam[team_num]->s2 = *moreStudents[i + 1];
  }

  // print student details using above function
  printf("\n_______Student Details_________\n");
  for (int i = 0; i < numOfStudents; i++)
    printStudent(moreStudents[i]);

  // print team details
  int i;
  printf("\n_______Team Details_________\n");
  for (i = 0; i < numOfStudents / 2; i++)
    printTeam(studentCollectTeam[i], i + 1);

  // free allocated memory
  for (int i = 0; i < numOfStudents; i++)
    free(moreStudents[i]);

  for (int i = 0; i < numOfStudents / 2; i++)
    free(studentCollectTeam[i]);

  free(moreStudents);
  free(studentCollectTeam);
  return 0;
} */

/* //! 11. In question 5, define a driver function to create 6 Students and 3 Teams. Form teams by assigning two students to each team. At last, display the list of teams with students in them.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
  int roll_number;
  char name[20];
  char collegeName[30];
};

struct Team
{
  struct Student s1, s2;
};

// Function to dynamically allocate an array of team pointers
struct Team **createTeamArrayUsingCalloc(int size)
{
  struct Team **teamUsingCalloc = (struct Team **)calloc(size, sizeof(struct Team *));
  if (teamUsingCalloc == NULL)
  {
    printf("Memory allocation failed!\n");
    return NULL;
  }

  // Allocate memory for each team
  for (int i = 0; i < size; i++)
  {
    teamUsingCalloc[i] = (struct Team *)malloc(sizeof(struct Team));
    if (teamUsingCalloc[i] == NULL)
    {
      printf("Memory allocation failed for team!\n");
      return NULL;
    }
  }

  return teamUsingCalloc;
}

// Function to create a single student
struct Student *createStudent(int roll_num, char *name, char *college)
{
  struct Student *student = (struct Student *)malloc(sizeof(struct Student));
  if (student == NULL)
  {
    printf("Memory allocation failed!!!\n");
    return NULL;
  }

  student->roll_number = roll_num;
  strcpy(student->name, name);
  strcpy(student->collegeName, college);

  return student;
}

// Function to print student details
void printStudent(struct Student *student)
{
  printf("Roll Number: %d\n", student->roll_number);
  printf("Name: %s\n", student->name);
  printf("College: %s\n", student->collegeName);
}

// Function to print team details
void printTeam(struct Team *team, int team_number)
{
  printf("\n_____ Team %d _____\n", team_number);
  printStudent(&team->s1);
  printStudent(&team->s2);
}

int main()
{
  printf("\n---- Creating Students ----\n");

  struct Student *students[6];

  students[0] = createStudent(101, "Alice", "MIT");
  students[1] = createStudent(102, "Bob", "Stanford");
  students[2] = createStudent(103, "Charlie", "Harvard");
  students[3] = createStudent(104, "David", "Oxford");
  students[4] = createStudent(105, "Eve", "Cambridge");
  students[5] = createStudent(106, "Frank", "Yale");

  printf("\n---- Creating Teams ----\n");

  struct Team **teams = createTeamArrayUsingCalloc(3);
  if (teams == NULL)
    return 1;

  // Assign students to teams
  teams[0]->s1 = *students[0];
  teams[0]->s2 = *students[1];

  teams[1]->s1 = *students[2];
  teams[1]->s2 = *students[3];

  teams[2]->s1 = *students[4];
  teams[2]->s2 = *students[5];

  printf("\n---- Displaying Teams ----\n");
  for (int i = 0; i < 3; i++)
    printTeam(teams[i], i + 1);

  // Free allocated memory
  for (int i = 0; i < 6; i++)
    free(students[i]);

  for (int i = 0; i < 3; i++)
    free(teams[i]);

  free(teams);

  return 0;
}
 */