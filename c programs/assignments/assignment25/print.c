// TODO: Assignment-25: Pointers

/* //! 1. Write a function to swap values of two int variables. (TSRN)
//? this is called call by reference
#include <stdio.h>
void swappingValue(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int a, b;
  printf("Enter value for a and b:");
  scanf("%d %d", &a, &b);
  printf("entered value a=%d b=%d\n", a, b);
  swappingValue(&a, &b);
  printf("after swapping a=%d b=%d\n", a, b);
  return 0;
} */

/* //! 2. Write a function to search all occurrences of a given character in a given string.
// The result of the search is a list of indices to be stored in the given array.
// [void search_all_occurrences(char *str, char ch, int *arr);]
#include <stdio.h>
#include <string.h>
void search_all_occurrences(char *str, char ch, int *arr)
{
  int i, count = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ch)
      arr[count++] = i;
  }

  if (count == 0)
    printf("Character Not found in String");
  else
  {
    printf("Character found at index :\n");
    for (i = 0; i < count; i++)
      printf("%d ", arr[i] + 1);
    printf("\n");
  }
}
int main()
{
  char str[50];
  char ch;
  int arr[10] = {0};
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  str[strcspn(str, "\n")] = '\0';
  printf("Enter a character u want to search in string: ");
  scanf("%c", &ch);
  search_all_occurrences(str, ch, arr);
  return 0;
} */

/* //! 3. Write a function to convert a given string into uppercase.
#include <stdio.h>
#include <string.h>
// void convertUppercase(char str[])
// or
//  void convertUppercase(char *str)
// {
//   int i;
//   // for (i = 0; str[i]; i++)
//   //   if (str[i] >= 'a' && str[i] <= 'z')
//   //     str[i] -= 32;
//   // ___________________________
//   for (i = 0; *(str + i); i++)
//     if (*(str + i) >= 'a' && *(str + i) <= 'z')
//       *(str + i) -= 32;
// }

// ___________________________
char *convertUppercase(char *str)
{
  int i;
  for (i = 0; str[i]; i++)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  return str;
}
int main()
{
  char str[20];
  printf("Enter string: ");
  fgets(str, 20, stdin);
  printf("you Entered: ");
  printf("%s", str);
  convertUppercase(str);
  printf("\n in uppercase: ");
  printf("%s", str);
  return 0;
} */

/* //! 4. Write a function to convert a given string into lowercase.
#include <stdio.h>
#include <string.h>
// void convertLowercase(char str[])
// or
void convertLowercase(char *str)
{
  int i;
  // for (i = 0; str[i]; i++)
  //   if (str[i] >= 'A' && str[i] <= 'Z')
  //     str[i] += 32;
  // ___________________________
  for (i = 0; *(str + i); i++)
    if (*(str + i) >= 'A' && *(str + i) <= 'Z')
      *(str + i) += 32;
}
int main()
{
  char str[20];
  printf("Enter string: ");
  fgets(str, 20, stdin);
  printf("you Entered: ");
  printf("%s", str);
  convertLowercase(str);
  printf("\n in lowercase: ");
  printf("%s", str);
  return 0;
} */

/* //! 5. Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store the extracted string in another char array.
// [void extract_string(char *str, int start_index, int end_index, char *result);]
#include <stdio.h>
#include <string.h>
void extract_string(char *str, int start_index, int end_index, char *result)
{
  int i, j = 0;
  for (i = start_index; i < end_index; i++, j++)
  {
    result[j] = str[i];
  }
  result[j] = '\0'; // Null-terminate the result string
}
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  str[strcspn(str, "\n")] = '\0';

  // if(str[strlen(str)-1] == '\n')
  //   str[strlen(str)-1] ='\0' ;

  int start = 0,
      end = 0;
  printf("Enter starting index and ending index: ");
  scanf("%d %d", &start, &end);
  // Validate index range

  if (start < 0 || end > strlen(str) || start >= end)
  {
    printf("Invalid indices!\n");
    return 1;
  }

  char result[20];
  extract_string(str, start, end, result);
  printf("substring is: %s", result);
  return 0;
} */

/* //! 6. Write a function to swap strings of two char arrays.
#include <stdio.h>
#include <string.h>
void strSwapper(char *str, char *swapStr)
{
  char temp[50];

  strcpy(temp, str);
  strcpy(str, swapStr);
  strcpy(swapStr, temp);
}
int main()
{
  char str[50];
  printf("Enter first string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';

  char swapStr[50];
  printf("Enter second string: ");
  fgets(swapStr, 50, stdin);
  swapStr[strcspn(swapStr, "\n")] = '\0';

  printf("\nBefore swapping:\n");
  printf("str1: %s\n", str);
  printf("str2: %s\n", swapStr);

  strSwapper(str, swapStr);

  printf("\nAfter swapping:\n");
  printf("str1: %s\n", str);
  printf("str2: %s\n", swapStr);
  return 0;
} */

/* //! 7. Write a function to sort an array of int type values.
// [void sort(int *arr, int size);]
#include <stdio.h>
// void sort(int *arr, int size)
// {
//   int i, j, temp;
// //?out-of-bounds access.
// //?Fix: Use nested loops for proper sorting.

//   for (i = 0; i < size; i++)
//     for (j = i + 1; j < size; j++)
//       if (arr[i] > arr[j])
//       {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//       }
// }
//? one more way to write this using simple bubble sort
void sort(int *arr, int size)
{
  int r, i, t;
  for (r = 0; r < size - 1; r++)
  {
    for (i = 0; i < size - 1 - r; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
      }
    }
  }
}

int main()
{
  int size, i;
  printf("Enter a size for array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d value for arr: ", size);
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  sort(arr, size);
  printf("\nSorted array: ");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  return 0;
} */

/* //! 8. Write a function to merge two arrays into a given array.
// [void merge(int *arr1, int size1, int *arr2, int size2, int *arr3);]
#include <stdio.h>
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
  int i, j;
  for (i = 0; i < size1; i++)
    arr3[i] = arr1[i];
  for (j = 0; j < size2; j++)
    arr3[i + j] = arr2[j];
}
int main()
{
  int i, n, m;
  printf("Enter length for arr1: ");
  scanf("%d", &n);

  int arr1[n];

  for (i = 0; i < n; i++)
    scanf("%d", &arr1[i]);

  printf("Enter length for arr2: ");
  scanf("%d", &m);
  int arr2[m];

  for (i = 0; i < m; i++)
    scanf("%d", &arr2[i]);

  int arr3[n + m];
  merge(arr1, n, arr2, m, arr3);
  printf("After merging arr1 and arr 2 resultant array is:\n");
  for (i = 0; i < n + m; i++)
    printf("%d ", arr3[i]);
  return 0;
}
 */

/* //! 9. Write a function to move the first value of the array to the position where all smaller values will be on the left and greater values will be on the right.
#include <stdio.h>
void partitionArray(int *arr, int size)
{
  int i, left = 0, right = size - 1;
  int temp[size]; // temporary arrays
  int pivot = arr[0];
  for (i = 1; i < size; i++)
  {
    if (arr[i] < pivot)
      temp[left++] = arr[i]; // storing small value first
    else
      temp[right--] = arr[i]; // storing greater at the end
  }

  temp[left] = pivot;

  // copying back to the original array
  for (i = 0; i < size; i++)
    arr[i] = temp[i];
}
int main()
{
  int size, i;
  printf("Enter a size for array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d value for arr: ", size);
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  partitionArray(arr, size);

  printf("\narray after partition: ");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);

  return 0;
} */
//________________New Approach________________
/* #include <stdio.h>
void partitionArray(int *ptr, int size)
{
    int pivot = ptr[0];
    int left[size], right[size];  // Temporary arrays to hold values
    int l = 0, r = 0, i;

    // Separate elements into left and right partitions
    for (i = 1; i < size; i++)
    {
        if (ptr[i] < pivot)
            left[l++] = ptr[i];  // Store in left if smaller
        else
            right[r++] = ptr[i]; // Store in right if greater
    }

    // Merge left partition + pivot + right partition into the original array
    for (i = 0; i < l; i++)
        ptr[i] = left[i];

    ptr[l] = pivot;  // Place pivot at its correct position

    for (i = 0; i < r; i++)
        ptr[l + 1 + i] = right[i];  // Place right partition

}

int main()
{
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d values for the array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    partitionArray(arr, size);

    printf("\nArray after partitioning: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}*/
//________________New Approach________________
/* #include <stdio.h>
int partitionArray(int *a, int size)
{
  int left = 0, t;
  int loc = 0;
  int right = size - 1;

  while (left < right)
  {
    while (left < right && a[loc] <= a[right])
      right--;
    if (left == right)
      break;
    t = a[loc];
    a[loc] = a[right];
    a[right] = t;
    loc = right;

    while (left < right && a[left] < a[loc])
      left++;
    if (left == right)
      break;
    t = a[left];
    a[left] = a[loc];
    a[loc] = t;
    loc = left;
  }
  return loc;
}

int main()
{
  int A[] = {23, 67, 89, 11, 23, 42, 59, 16, 8, 81};
  int index;
  index = partitionArray(A, 10);
  printf("\nfirst value at the Index of: i= %d\n", index);
  for (int i = 0; i <= 9; i++)
    printf("%d ", A[i]);
  return 0;
} */

/* //! 10. There are five classes with a different number of students in them. Five arrays contain marks of students of each class. Write a function to receive an address of an array of pointers to access marks of all the students. The job of the function is to find the highest marks among all the classes.
#include <stdio.h>
void findHighestMark(int *arr[], int num_students[], int num_classes)
{
  int i, j, highest = -1; // Initialize highest with a very low value

  // Traverse all students' marks across all classes
  for (i = 0; i < num_classes; i++)
  {
    for (j = 0; j < num_students[i]; j++)
    {
      if (arr[i][j] > highest)
      {
        highest = arr[i][j]; // Update highest mark
      }
    }
  }

  printf("\nHighest marks among all classes: %d\n", highest);
}

int main()
{
  int i, j;
  int num_students[5]; // Stores the number of students in each class

  // Declare an array of pointers (each will point to an array of marks)
  int arr1[10], arr2[10], arr3[10], arr4[10], arr5[10];
  int *arr[5] = {arr1, arr2, arr3, arr4, arr5};

  // Input number of students for each class
  for (i = 0; i < 5; i++)
  {
    printf("Enter number of students in class %d: ", i + 1);
    scanf("%d", &num_students[i]);
  }

  // Input marks for each class
  for (i = 0; i < 5; i++)
  {
    printf("Enter marks for %d students in class %d: ", num_students[i], i + 1);
    for (j = 0; j < num_students[i]; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  // Print marks for verification
  printf("\nMarks entered:\n");
  for (i = 0; i < 5; i++)
  {
    printf("Class %d: ", i + 1);
    for (j = 0; j < num_students[i]; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  findHighestMark(arr, num_students, 5);
  return 0;
} */
//________________New Approach________________
/* #include <stdio.h>
// we want 2 level pointer bcz we are sending a pointer in highestMark
int highestMark(int **arr, int n, int size[])
{
  int max, i, j;
  max = arr[0][0];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < size[i]; j++)
    {
      if (max < arr[i][j])
      {
        max = arr[i][j];
      }
    }
  }
  return max;
}

int main()
{
  int A[] = {23, 67, 89, 11, 23, 42, 59, 16, 8, 81};
  int B[] = {10, 20, 30, 40, 50};
  int C[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int D[] = {13, 24, 36, 47, 53, 68, 70, 88, 91};
  int E[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65};

  // creating size array to know how many students in array means number of students in a class
  int size[] = {10, 5, 10, 9, 13};

  // address of an array of pointers
  int *p[5];
  p[0] = A;
  p[1] = B;
  p[2] = C;
  p[3] = D;
  p[4] = E;

  // we store highest mark in variable
  int hMarks = highestMark(p, 5, size);
  printf("Highest Mark is: %d", hMarks);

  return 0;
} */