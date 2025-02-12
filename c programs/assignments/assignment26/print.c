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

//! 6. Write a function to sort employees according to their names.
// [Refer structure from question 1]
#include <stdio.h>

//! 7. Write a program to calculate the difference between two time periods.

//! 8. Write a program to store information of 10 students and display them using structure.

//! 9. Write a program to store information of n students and display them using structure.

//! 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100)
// using a structure named Marks having elements roll no., name, chem_marks, maths_marks, and phy_marks,
// and then display the percentage of each student.
