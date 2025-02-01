// TODO: Assignment-19: Arrays and Functions

/* //! 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int findGreatestNumber(int a[], int n)
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
  return a[n - 1];
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
  int num = findGreatestNumber(a, n);
  printf("Finally Found.. %d is a Greatest Number", num);
  return 0;
} */

/* //! 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int findSmallestNumber(int a[], int n)
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
  return a[0];
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
  int num = findSmallestNumber(a, n);
  printf("Finally Found.. %d is a Smallest Number", num);
  return 0;
} */

/* //! 3. Write a function to sort an array of any size. (TSRN)
#include <stdio.h>
void sortingArr(int a[], int n)
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
  // printing sorted array
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
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
  sortingArr(a, n);

  return 0;
} */

//! 4. Write a function to rotate an array by n position in d direction.
//? The d is an indicative value for left or right.
//? For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29].
/* #include <stdio.h>
void rotatingWithDiractionArray(int a[], int n, int m, int dir)
{
  int temp[m]; // Temporary array to store elements during rotation
  int i;

  if (dir == 1)
  {
    for (i = 0; i < m; i++)
      temp[i] = a[i]; // Store the first m elements in temp

    for (i = 0; i < n - m; i++)
      a[i] = a[i + m]; // Shift the remaining elements to the left

    for (i = 0; i < m; i++)
      a[n - m + i] = temp[i]; // Copy temp elements to the end of the array
  }
  else if (dir == 2)
  {
    for (i = 0; i < m; i++)
      temp[i] = a[n - m + i]; // Store the last m elements in temp

    for (i = n - 1; i >= m; i--)
      a[i] = a[i - m]; // Shift the remaining elements to the left

    for (i = 0; i < m; i++)
      a[i] = temp[i]; // Copy temp elements to the beginning of the array
  }
  else
  {
    printf("Invalid direction! Use 1 for left and 2 for right.\n");
    return;
  }

  // Print the rotated array
  printf("Rotated array: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main()
{
  int n, m, dir;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int a[n];

  printf("Enter %d elements of the array: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("How many times do you want to rotate the array? ");
  scanf("%d", &m);

  // Handle cases where rotations exceed the array size
  m = m % n;

  // Input direction of rotation
  printf("Enter 1 for left rotation or 2 for right rotation: ");
  scanf("%d", &dir);

  // Call the rotation function
  rotatingWithDiractionArray(a, n, m, dir);
  return 0;
}  */
//__________New Approach____________
/* #include <stdio.h>
void rotate(int A[], int size, int n, int d)
{
  int i, temp;
  if (d == 1)
  {
    while (n)
    {
      temp = A[size - 1];
      for (i = size - 2; i >= 0; i--)
        A[i + 1] = A[i];
      A[0] = temp;
      n--;
    }
  }
  else
  {
    while (n)
    {
      temp = A[0];
      for (i = 1; i <= size - 1; i++)
        A[i - 1] = A[i];
      A[size - 1] = temp;
      n--;
    }
  }
  printf("\nrotated array is: ");
  for (i = 0; i < size; i++)
    printf("%d ", A[i]);
}
int main()
{
  int i, l, n, d;
  printf("Enter the size of array: ");
  scanf("%d", &l);
  int a[l];
  printf("Enter %d numbers for array: ", l);
  for (i = 0; i < l; i++)
    scanf("%d", &a[i]);
  printf("How many times u want to rotate array: ");
  scanf("%d", &n);
  printf("if want to rotate right press 1 otherwise press -1: ");
  scanf("%d", &d);
  printf("Your Entered array is: ");
  for (i = 0; i < l; i++)
    printf("%d ", a[i]);
  rotate(a, l, n, d);
  return 0;
} */

/* //! 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include <stdio.h>
int duplicateOccurrence(int a[], int n)
{
  int i;
  for (i = 0; i < n - 1; i++)
    // Stop at n - 1 to prevent out-of-bounds access.
    // When i == n - 1, a[i + 1] will try to access an element beyond the last index
    if (a[i] == a[i + 1])
      return a[i];
  return -1; // means no duplicate found
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n], i;
  printf("Enter %d elements for array:", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("You Entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  int value = duplicateOccurrence(a, n);
  printf("first occurrence of adjacent duplicate values in array is: %d", value);
  return 0;
} */
//__________New Approach____________
/* #include <stdio.h>
int duplicateOccurrence(int a[], int size)
{
  int i;
  for (i = 0; i < size - 2; i++)
    if (a[i] == a[i + 1])
      return a[i];
  return; // means no duplicate found
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n], i;
  printf("Enter %d elements for array:", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("You Entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  int value = duplicateOccurrence(a, n);
  printf("first occurrence of adjacent duplicate values in array is: %d", value);
  return 0;
} */

/* //! 6. Write a function to swap two elements of a given array with specified indices.
#include <stdio.h>
void swappingArrayValue(int a[], int n)
{
  int temp, i, index_1, index_2;
  printf("\nEnter first index you want to swap: ");
  scanf("%d", &index_1);
  printf("\nEnter second index you want to swap with first one: ");
  scanf("%d", &index_2);

  temp = a[index_1];
  a[index_1] = a[index_2];
  a[index_2] = temp;

  printf("After Swapping Here is Your Array: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
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
  printf("You Entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  swappingArrayValue(a, n);
  return 0;
} */

/* //! 7. Write a function to count a total number of duplicate elements in an array. (Means elements that occur 2 times in an array)
//? Question do not saying for adjacent duplicate ok so be carefull
#include <stdio.h>
void countElementsWithTwoOccurrences(int a[], int n)
{
  int i, j, count, total = 0;
  printf("\nNumber of elements with exactly two occurrences: ");
  for (i = 0; i < n; i++)
  {
    if (a[i] == -1) // Skip already counted elements
      continue;

    count = 0;
    for (j = 0; j < n; j++)
    {
      if (a[i] == a[j])
        count++;
    }
    if (count == 2)
    {
      total++;
      printf("%d ", a[i]); // Print the element
    }

    for (j = 0; j < n; j++)
    {
      if (a[i] == a[j])
        a[j] = -1;
    }
  }
  if (total == 0)
    printf("None");
  else
    printf("\nIt means total %d numbers are founded duplicate in array", total);
  printf("\n");
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n], i;
  printf("Enter %d elements for array:", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("You Entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  countElementsWithTwoOccurrences(a, n);
  return 0;
} */
// ________ - New Approach____________
/* #include <stdio.h>
void array(int a[], int n)
{
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int j, count = 0;
    for (j = 0; j < n; j++)
    {
        if (a[j] != -1)
        {
            for (int i = j + 1; i < n; i++)
            {
                if (a[j] == a[i])
                {
                    a[i] = -1;
                    count += 1;

                }
            }
        }
    }
    printf("Total number of duplicate elements in an array is %d", count);
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0) // Ensure the array size is valid
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int a[n], i;
    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    array(a, n);
    return 0;
} */
//__________New Approach____________
/* #include <stdio.h>
void sortedArr(int a[], int n)
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
}
int count_duplicate(int a[], int n)
{
  int i = 0, j = 1, count = 0;
  sortedArr(a, n); // Sort the array first

  while (i < n - 1)
  {
    if (a[i] == a[j])
    {
      count++; // Increment count for duplicate
      while (j < n && a[i] == a[j])
      { // Skip all duplicates
        j++;
      }
      i = j; // Move i to the next unique element
      j = j + 1;
    }
    else
    {
      i++;
      j++;
    }
  }
  return count; // Return the count of duplicates
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
  int duplicateFound = count_duplicate(a, n);
  printf("There are total %d duplicates", duplicateFound);
  return 0;
} */

/* //! 8. Write a function to print all unique elements in an array.
#include <stdio.h>
void uniqueElements(int a[], int n)
{
  int i, j, count;
  for (i = 0; i < n; i++)
  {
    count = 0;
    for (j = 0; j < n; j++)
    {
      if (a[i] == a[j])
        count++;
    }

    if (count == 1)
      printf("%d ", a[i]);
  }
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
  printf("You Entered in a:");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  uniqueElements(a, n);
  return 0;
} */

/* //! 9. Write a function to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
void mergingSortedArray(int a[], int b[], int n)
{
  int i, j, temp, result[n + n];
  for (i = 0; i < n; i++)
    result[i] = a[i];
  for (i = 0; i < n; i++)
    result[n + i] = b[i];

  // sorting in descending order
  for (i = 0; i < n + n; i++)
  {
    for (j = i + 1; j < n + n; j++)
    {
      if (result[i] < result[j])
      {
        temp = result[i];
        result[i] = result[j];
        result[j] = temp;
      }
    }
  }
  printf("Merged and sorted array in descending order:\n");
  for (i = 0; i < n + n; i++)
    printf("%d ", result[i]);
  printf("\n");
}
int main()
{
  int i, n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n], b[n];
  printf("Enter %d numbers for 1st array: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter %d numbers for 2nd array: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
  mergingSortedArray(a, b, n);
  return 0;
} */

/* //! 10. Write a function to count the frequency of each element of an array.
#include <stdio.h>
void arrayFrequencyCounter(int a[], int n)
{
  int i, j, count;
  for (i = 0; i < n; i++)
  {
    if (a[i] == -1)
      continue;
    count = 0;
    for (j = 0; j < n; j++)
    {
      if (a[i] == a[j])
      {
        count++;    // Increment count if a match is found
        if (i != j) // Mark duplicate elements as processed
          a[j] = -1;
      }
    }
    printf("\n Element %d - Frequence %d", a[i], count);
  }
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
  printf("You Entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  arrayFrequencyCounter(a, n);
  return 0;
} */