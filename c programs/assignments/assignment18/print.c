// TODO: Assignment-18: Arrays

/* //! 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int sum_of_array(int a[], int n)
{
  int i, sum = 0;
  printf("Enter 10 numbers for array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    sum += a[i];
  }
  return sum;
}
int main()
{
  int a[10];
  int sum = sum_of_array(a, 10);
  printf("sum of array is %d\n", sum);
  return 0;
} */

/* //! 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int avg_of_array(int a[], int n)
{
  int i, sum = 0;
  float avg = 0;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
    sum += a[i];

  return avg = sum / n;
}
int main()
{
  int a[10];
  float avg = avg_of_array(a, 10);
  printf("average of array is %0.2f\n", avg);
  return 0;
} */

/* //! 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int sum_of_even(int a[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
      sum += a[i];
  }
  return sum;
}
int sum_of_odd(int a[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 != 0)
      sum += a[i];
  }
  return sum;
}
int main()
{
  int a[10], i;
  printf("Enter numbers for array: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  int even = sum_of_even(a, 10);
  int odd = sum_of_odd(a, 10);
  printf("sum of even array is %d\n", even);
  printf("sum of odd array is %d\n", odd);
  return 0;
} */

/* //! 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int greatest_of_array(int a[], int n)
{
  int i;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int large = a[0];
  for (i = 1; i < n - 1; i++)
  {
    if (a[i] > large)
      large = a[i];
  }
  return large;
}
int main()
{
  int a[10];
  int large = greatest_of_array(a, 10);
  printf("greatest number of array is %d\n", large);
  return 0;
} */

/* //! 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int smallest_of_array(int a[], int n)
{
  int i;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int small = a[0];
  for (i = 1; i < n - 1; i++)
  {
    if (a[i] < small)
      small = a[i];
  }
  return small;
}
int main()
{
  int a[10];
  int small = smallest_of_array(a, 10);
  printf("smallest number of array is %d\n", small);
  return 0;
}
 */

/* //! 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>
void sorted_of_array(int a[], int n)
{
  int i, j, temp;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}
int main()
{
  int a[10];
  sorted_of_array(a, 10);
  // printf("greatest number of array is %d\n", sort);
  return 0;
} */

/* //! 7. Write a program to find the second largest number in an array. Take array values from the user.
#include <stdio.h>
void second_largest(int a[], int n)
{
  int i, j, temp;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("second largest number %d ", a[n - 2]);
}
int main()
{
  int a[10];
  second_largest(a, 10);
  return 0;
} */
// _____________New Approach_______________
/* #include <stdio.h>
int main()
{
  int i, max, second_max;
  int a[10];
  printf("Enter numbers for array: ");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  if (max > second_max)
  {
    max = a[0];
    second_max = a[1];
  }
  else
  {
    max = a[1];
    second_max = a[0];
  }
  for (i = 2; i <= 9; i++)
  {
    if (a[i] > max)
    {
      second_max = max;
      max = a[i];
    }
    else
    {
      if (a[i] > second_max)
        second_max = a[i];
    }
  }
  printf("\nSecond Largest Number is %d", second_max);
  return 0;
} */

/* //! 8. Write a program to find the second smallest number in an array. Take array values from the user.
#include <stdio.h>
void second_smallest(int a[], int n)
{
  int i, j, temp;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("second smallest number %d ", a[1]);
}
int main()
{
  int a[10];
  second_smallest(a, 10);
  return 0;
} */
// _____________New Approach_______________
/* #include <stdio.h>
int main()
{
  int i, min, second_min;
  int a[10];
  printf("Enter numbers for array: ");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  if (min > second_min)
  {
    min = a[0];
    second_min = a[1];
  }
  else
  {
    min = a[1];
    second_min = a[0];
  }
  for (i = 2; i <= 9; i++)
  {
    if (a[i] < min)
    {
      second_min = min;
      min = a[i];
    }
    else
    {
      if (a[i] < second_min)
        second_min = a[i];
    }
  }
  printf("\nSecond Smallest Number is %d", second_min);
  return 0;
} */

/* //! 9. Write a program to sort an array of 10 elements in descending order.
#include <stdio.h>
void descending_sort(int a[], int n)
{
  int i, j, temp;
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] < a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
    printf("sorting in descending order is: %d\n", a[i]);
}
int main()
{
  int a[10];
  descending_sort(a, 10);
  return 0;
} */

/* //! 10. Write a program in C to copy the elements of one array into another array. Take array values from the user.
#include <stdio.h>
void copying_array(int a[], int n)
{
  int i, b[n];
  printf("Enter numbers for array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n; i++)
    b[i] = a[i];

  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n------Copying Value-------\n");
  for (i = 0; i < n; i++)
    printf("%d ", b[i]);
}
int main()
{
  int a[10];
  copying_array(a, 10);
  return 0;
} */

// TODO: Questions From Other Source
/* //! 11. Create a program to find the sum and average of all elements in an array.
#include <stdio.h>
int sum_and_avg(int a[], int n)
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum += a[i];
  return sum;
}
int main()
{
  int i, n;
  float avg;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  // Declare the array after getting the size
  int a[n];
  printf("Enter %d numbers for array", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int sum = sum_and_avg(a, n);
  printf("Sum of array is:%d\n", sum);
  printf("Average of array is:%0.2f\n", avg = sum / n);
  return 0;
} */

/* //! 12. Create a program to find the number of occurrences of an elements in an array.
#include <stdio.h>
void occurrence_element(int a[], int n)
{
  int i, x, count = 0;
  printf("Enter the number whose occurrence you want to find in the array: ");
  scanf("%d", &x);
  for (i = 0; i < n; i++)
  {
    if (a[i] == x)
      count++;
  }
  printf("\n %d occurs %d times in the array ", x, count);
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  // Declare the array after getting the size
  int a[n];
  printf("Enter %d numbers for array: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  occurrence_element(a, n);
  return 0;
} */

/* //! 13. Create a program to find the maximum and minimum elements in an array.
#include <stdio.h>
void max_min_array(int a[], int n)
{
  int i, j, temp;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("minimum element is: %d\n", a[0]);
  printf("maximum element is: %d\n", a[i - 1]);
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d numbers for array: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  max_min_array(a, n);
  return 0;
} */

/* //! 14. Create a program to check if the given array is sorted.
#include <stdio.h>
void checkSortedArray(int a[], int n)
{
  int i, j, temp, b[n];
  printf("Enter %d numbers for array", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("you stored value in array A is\n");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  for (i = 0; i < n; i++)
    b[i] = a[i];

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (b[i] > b[j])
      {
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
      }
    }
  }
  // printf("\n you stored value in array B is\n");
  // for (i = 0; i < n; i++)
  //   printf("%d ", b[i]);

  for (i = 0; i < n; i++)
  {
    if (a[i] != b[i])
    {
      printf("\nThis array is not sorted");
      return;
    }
  }

  printf("\nThis array is sorted");
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  checkSortedArray(a, n);
  return 0;
} */

/* //! 15. Create a program to return a new array deleting a specific elements.
#include <stdio.h>
void deletingElem(int a[], int n)
{
  int i, x, b[n - 1], j = 0;
  printf("Enter %d numbers for array: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("You Entered : ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\nNow which element you want to deleted: ");
  scanf("%d", &x);

  for (i = 0; i < n; i++)
  {
    if (a[i] != x)
      b[j++] = a[i];
  }
  printf("new array after deleting a specific elements:\n ");
  for (i = 0; i < n - 1; i++)
    printf("%d ", b[i]);
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  deletingElem(a, n);
  return 0;
} */

/* //! 16. Create a program to reverse an array.
#include <stdio.h>
void reverseArr(int a[], int n)
{
  int i = n - 1, b[n], j = 0;

  // now reversing
  for (; i >= 0; i--, j++)
    b[j] = a[i];

  printf("\nYour Reversed Array is: ");
  for (j = 0; j < n; j++)
    printf("%d ", b[j]);
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d numbers for array", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("You Entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  reverseArr(a, n);
  return 0;
} */

/* //! 17. Create a program to check is the array is palindrome or not.
#include <stdio.h>
void palindromeChecker(int a[], int n)
{
  int i;
  for (i = 0; i < n / 2; i++)
  {
    if (a[i] != a[n - 1 - i])
    {
      printf("not Palindrome");
      return;
    }
  }

  printf("Palindrome");
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d numbers for array", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  palindromeChecker(a, n);
  return 0;
} */

/* //! 18. write a function that uses pointer arithmetic to copy and array of char into another.
#include <stdio.h>
void copyingCharArray(char *source, char *destination, int size)
{
  for (int i = 0; i < size; i++)
  {
    *(destination + i) = *(source + i);
  }
}
int main()
{
  int size;
  printf("Enter the size of string: ");
  scanf("%d", &size);

  char source[100]; // Setting upper limit for the array size
  char destination[100];

  if (size > 100)
  {
    printf("Error: Maximum allowed size is 100.\n");
    return 1;
  }
  // input the string from the user
  printf("Enter the string (up to %d characters): ", size - 1);
  getchar(); // this will clear newline character left by scanf
  fgets(source, size, stdin);

  copyingCharArray(source, destination, size);

  printf("Source string: %s", source);
  printf("Destination string: %s", destination);
  return 0;
}
 */

/* //! 19. Create a program to merge two sorted arrays.
#include <stdio.h>
void mergingSortedArray(int a[], int b[], int n, int m)
{
  int i = 0, j = 0, k = 0, result[n + m];

  while (i < n && j < m)  {
    if (a[i] <= b[j])
    {
      result[k] = a[i];
      i++;
    }
    else
    {
      result[k] = b[j];
      j++;
    }
    k++;
  }

  // if any element left in array 'a' so we copy manually
  for (; i < n; i++)
  {
    result[k] = a[i];
    k++;
  }
  // if any element left in array 'b' so we copy manually
  for (; j < m; j++)
  {
    result[k] = b[j];
    k++;
  }

  // printing the merge array
  printf("\nMerged Array: ");
  for (int i = 0; i < n + m; i++)
  {
    printf("%d ", result[i]);
  }
}
int main()
{
  int i, n, m;
  printf("Enter the size for 1st array: ");
  scanf("%d", &n);
  int a[n];

  printf("Enter the size for 2nd array: ");
  scanf("%d", &m);
  int b[m];

  // input elements off the arrays
  printf("Enter %d numbers for 1st array", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Enter %d numbers for 2nd array", m);
  for (i = 0; i < m; i++)
    scanf("%d", &b[i]);

  // print the input arrays
  printf("You Entered in 1st array: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  printf("\nYou Entered in 2nd array: ");
  for (i = 0; i < m; i++)
    printf("%d ", b[i]);

  // call function to merge the arrays
  mergingSortedArray(a, b, n, m);

  return 0;
} */

/* //! 20. Create a program to search an elements in a 2-D array.
#include <stdio.h>
int main()
{
  int n, m;
  printf("Enter size for row: ");
  scanf("%d", &n);
  printf("Enter size for column: ");
  scanf("%d", &m);

  int a[n][m];
  int i, j, x;
  printf("\nNow store value in row and column\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("Enter number you want to search in 2d array: ");
  scanf("%d", &x);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (a[i][j] == x)
      {
        printf("Yes You are Right.. Number Founded 😍");
        return 0;
      }
    }
    printf("\n");
  }
  printf("Sorry!!!.. Number Not Founded 😔");
  return 0;
} */

/* //! 21. Create a program to find the sum of two diagonal elements.
#include <stdio.h>
void sumOfDiagonal(int n, int m, int a[n][m])
{
  int i, primarySum = 0, secondarySum = 0;
  for (i = 0; i < n && i < m; i++)
  {
    primarySum += a[i][i];
    secondarySum += a[i][m - 1 - i];
    // i is the row index (starting from 0).
    // m - 1 is the index of the last column.
    // m - 1 - i calculates the column index for the secondary diagonal corresponding to row i.
  }
  printf("Sum of primary diagonal: %d\n", primarySum);
  printf("Sum of secondary diagonal: %d\n", secondarySum);
}
int main()
{
  int n, m, sum = 0;
  printf("Enter size for row: ");
  scanf("%d", &n);
  printf("Enter size for column: ");
  scanf("%d", &m);

  int a[n][m];
  int i, j, x;
  printf("\nNow store value in row and column\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  sumOfDiagonal(n, m, a);
  return 0;
} */