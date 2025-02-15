// TODO: Assignment-26: Structure

/* //! 1. Define a structure Employee with member variables id, name, salary.
#include <stdio.h>
struct Employee
{
  int id;
  char name[30];
  float salary;
};

int main()
{
  return 0;
} */

/* //! 2. Write a function to take input employee data from the user.
// [Refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct Employee
{
  int id;
  char name[30];
  float salary;
};
struct Employee inputdata()
{
  struct Employee x;
  printf("Enter employee id, name and salary: ");
  scanf("%d", &x.id);
  while (getchar() != '\n')
    ;
  fgets(x.name, 30, stdin);
  x.name[strcspn(x.name, "\n")] = '\0';  // Remove trailing newline
  scanf("%f", &x.salary);
  return x;
}

int main()
{
  // taking input from user
  struct Employee e1;
  e1 = inputdata();
  return 0;
} */

/* //! 3. Write a function to display employee data.
// [Refer structure from question 1]

#include <stdio.h>
#include <string.h>
struct Employee
{
  int id;
  char name[30];
  float salary;
};

struct Employee inputdata()
{
  struct Employee x;
  printf("Enter employee id, name and salary: ");
  scanf("%d", &x.id);
  while (getchar() != '\n')
    ;
  fgets(x.name, 30, stdin);
  x.name[strcspn(x.name, "\n")] = '\0'; // Remove trailing newline
  scanf("%f", &x.salary);
  return x;
}

void displayData(struct Employee x)
{
  printf("\n%d %s %.2f", x.id, x.name, x.salary);
}

int main()
{
  struct Employee e1;
  e1 = inputdata();
  displayData(e1);
  return 0;
} */

/* //! 4. Write a function to find the highest salary employee from a given array of 10 employees.
// [Refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct Employee
{
  int id;
  char name[30];
  float salary;
};
void inputEmployee(struct Employee emp[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter id, and name of Employee %d:\n ", i + 1);
    scanf("%d", &emp[i].id);

    while (getchar() != '\n')
      ;
    fgets(emp[i].name, 30, stdin);
    emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

    printf("Enter salary: ");
    scanf("%f", &emp[i].salary);
  }
}
void highestSalary(struct Employee emp[], int size)
{
  float highest = -1.0;
  int i, highestIndex = -1;
  for (i = 0; i < size; i++)
  {
    if (emp[i].salary > highest)
    {
      highest = emp[i].salary;
      highestIndex = i;
    }
  }
  if (highestIndex != -1)
  {
    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\n", emp[highestIndex].id);
    printf("Name: %s\n", emp[highestIndex].name);
    printf("Salary: %.2f\n", emp[highestIndex].salary);
  }
}

int main()
{
  struct Employee emp[10];
  inputEmployee(emp, 10);
  highestSalary(emp, 10);
  return 0;
} */

/* //! 5. Write a function to sort employees according to their salaries.
// [Refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct Employee
{
  int id;
  char name[30];
  float salary;
};
void inputEmployee(struct Employee emp[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter id, and name of Employee %d:\n ", i + 1);
    scanf("%d", &emp[i].id);

    while (getchar() != '\n')
      ;
    fgets(emp[i].name, 30, stdin);
    emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

    printf("Enter salary: ");
    scanf("%f", &emp[i].salary);
  }
}
void sortingEmpBySalary(struct Employee emp[], int size)
{
  int i, j;
  struct Employee temp;
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - i - 1; j++)
    {
      if (emp[j].salary > emp[j + 1].salary)
      {
        temp = emp[j];
        emp[j] = emp[j + 1];
        emp[j + 1] = temp;
      }
    }
  }
  printf("\nSorting Salary of Employees\n");
  for (i = 0; i < size; i++)
    printf("ID: %d, Name: %s , Salary: %0.2f\n", emp[i].id, emp[i].name, emp[i].salary);
}

int main()
{
  struct Employee emp[10];
  inputEmployee(emp, 10);
  sortingEmpBySalary(emp, 10);
  return 0;
} */

/* //! 6. Write a function to sort employees according to their names.
// [Refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct Employee
{
  int id;
  char name[30];
  float salary;
};
void inputEmployee(struct Employee emp[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter id, and name of Employee %d:\n", i + 1);
    scanf("%d", &emp[i].id);
    while (getchar() != '\n')
      ;
    fgets(emp[i].name, 30, stdin);
    emp[i].name[strcspn(emp[i].name, "\n")] = '\0';
    // or
    // Use strcspn() when \n might be anywhere in the string. // Use strlen() - 1 if you know \n will always be the last character.
    // if (emp[i].name[strlen(emp[i].name) - 1] == '\n')
    // emp[i].name[strlen(emp[i].name) - 1] = '\0';

    printf("Enter salary: ");
    scanf("%f", &emp[i].salary);
  }
}
void sortingEmpByName(struct Employee emp[], int size)
{
  int i, j;
  struct Employee temp;
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - 1 - i; j++)
    {
      if (strcmp(emp[j].name, emp[j + 1].name) > 0)
      {
        temp = emp[j];
        emp[j] = emp[j + 1];
        emp[j + 1] = temp;
      }
    }
  }
  printf("\nSorting Name of Employees\n");
  for (i = 0; i < size; i++)
    printf("ID: %d, Name: %s , Salary: %0.2f\n", emp[i].id, emp[i].name, emp[i].salary);
}
int main()
{
  struct Employee emp[3];
  inputEmployee(emp, 3);
  sortingEmpByName(emp, 3);
  return 0;
}
 */

/* //! 7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
#include <string.h>
struct Time
{
  int hours;
  int minutes;
  int seconds;
};
struct Time inputTimePeriod()
{
  struct Time t;
  printf("Enter hours, minutes, and seconds: ");
  scanf("%d%d%d", &t.hours, &t.minutes, &t.seconds);
  return t;
}
void diffCalc(struct Time t1, struct Time t2)
{
  struct Time diff;

  // Ensure t2 is always greater than t1 (swap if necessary)
  if (t1.hours > t2.hours ||
      (t1.hours == t2.hours && t1.minutes > t2.minutes) ||
      (t1.hours == t2.hours && t1.minutes == t2.minutes && t1.seconds > t2.seconds))
  {
    struct Time temp = t1;
    t1 = t2;
    t2 = temp;
  }
  // Borrow 1 Min if t1.seconds is greater
  if (t1.seconds > t2.seconds)
  {
    t2.minutes--;
    t2.seconds += 60;
  }
  // Borrow 1 hour if t1.seconds is greater
  if (t1.minutes > t2.minutes)
  {
    t2.hours--;
    t2.minutes += 60;
  }

  // subtract hours, minutes and seconds
  diff.hours = t2.hours - t1.hours;
  diff.minutes = t2.minutes - t1.minutes;
  diff.seconds = t2.seconds - t1.seconds;

  printf("Time Difference: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);
}
int main()
{
  struct Time t1;
  struct Time t2;
  t1 = inputTimePeriod();
  t2 = inputTimePeriod();
  diffCalc(t1, t2);
  return 0;
} */

/*//! 8. Write a program to store information of 10 students and display them using structure.
#include <stdio.h>
#include <string.h>
struct Student
{
  char name[30];
  int roll_number;
  int age;
  float marks;
};
void inputData(struct Student students[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter details for student %d:\n", i + 1);

    // Input name
    printf("Enter name: ");

    fgets(students[i].name, 30, stdin);
    students[i].name[strcspn(students[i].name, "\n")] = '\0';

    // Input roll_number age marks
    printf("Enter roll number: ");
    scanf("%d", &students[i].roll_number);

    printf("Enter age: ");
    scanf("%d", &students[i].age);

    printf("Enter marks: ");
    scanf("%f", &students[i].marks);

    // Clear the buffer after scanf()
    while (getchar() != '\n')
      ;
  }
}
void displayData(struct Student students[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("********************");
    printf("\nDetails of student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].roll_number);
    printf("Age: %d\n", students[i].age);
    printf("Marks: %.2f\n", students[i].marks);
  }
}
int main()
{
  struct Student students[10];
  inputData(students, 10);
  displayData(students, 10);
  return 0;
}*/

/* //! 9. Write a program to store information of n students and display them using structure.
#include <stdio.h>
#include <string.h>
struct Student
{
  char name[30];
  int roll_number;
  int age;
  float marks;
};
void inputData(struct Student students[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter details for student %d:\n", i + 1);

    // Clear the input buffer before fgets
    while (getchar() != '\n')
      ;

    // Input name
    printf("Enter name: ");

    fgets(students[i].name, 30, stdin);
    students[i].name[strcspn(students[i].name, "\n")] = '\0';

    // Input roll_number age marks
    printf("Enter roll number: ");
    scanf("%d", &students[i].roll_number);

    printf("Enter age: ");
    scanf("%d", &students[i].age);

    printf("Enter marks: ");
    scanf("%f", &students[i].marks);
  }
}
void displayData(struct Student students[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("\nDetails of student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].roll_number);
    printf("Age: %d\n", students[i].age);
    printf("Marks: %.2f\n", students[i].marks);
  }
}
int main()
{
  int n;
  printf("Enter the number of student: ");
  scanf("%d", &n);
  struct Student students[n];
  inputData(students, n);
  displayData(students, n);
  return 0;
} */

/* //! 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks, and phy_marks, and then display the percentage of each student.
#include <stdio.h>
#include <string.h>
struct Marks
{
  int roll_num;
  char name[30];
  float chem_marks;
  float maths_marks;
  float phy_marks;
};
void inputdata(struct Marks student[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter roll number %d: ", i + 1);
    scanf("%d\n", &student[i].roll_num);

    while (getchar() != '\n')
      ;
    printf("Enter name: ");
    fgets(student[i].name, 30, stdin);
    student[i].name[strcspn(student[i].name, "\n")] = '\0';

    // Input chemistry marks with validation
    do
    {
      printf("Enter chemistry marks (0 -100): ");
      scanf("%f\n", &student[i].chem_marks);
      if (student[i].chem_marks < 0 || student[i].chem_marks > 100)
        printf("Invalid Input! Marks should be between 0 to 100.\n");
    } while (student[i].chem_marks < 0 || student[i].chem_marks > 100);

    // Input maths marks with validation
    do
    {
      printf("Enter maths marks (0-100): ");
      scanf("%f\n", &student[i].maths_marks);
      if (student[i].maths_marks < 0 || student[i].maths_marks > 100)
        printf("Invalid input! Marks should be between 0 and 100.\n");
    } while (student[i].maths_marks < 0 || student[i].maths_marks > 100);

    // Input physics marks with validation
    do
    {
      printf("Enter physics marks (0-100): ");
      scanf("%f\n", &student[i].phy_marks);
      if (student[i].phy_marks < 0 || student[i].phy_marks > 100)
        printf("Invalid input! Marks should be between 0 and 100.\n");
    } while (student[i].phy_marks < 0 || student[i].phy_marks > 100);
  }
  // percentage calculating
}
void displayData(struct Marks student[], int size)
{
  int i;
  float percentage;
  for (i = 0; i < size; i++)
  {
    percentage = (student[i].chem_marks + student[i].maths_marks + student[i].phy_marks) / 300 * 100;

    // printing student percentage
    printf("***********************");
    printf("Student details of\n");
    printf("Roll No. %d\n", student[i].roll_num);
    printf("%s\n", student[i].name);
    printf("Percentage: %.2f%%\n", percentage);
  }
}

int main()

{
  struct Marks student[5];
  inputdata(student, 5);
  displayData(student, 5);
  return 0;
}
 */