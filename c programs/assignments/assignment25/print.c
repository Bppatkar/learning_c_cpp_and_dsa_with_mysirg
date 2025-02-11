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
void convertUppercase(char *str)
{
  int i;
  // for (i = 0; str[i]; i++)
  //   if (str[i] >= 'a' && str[i] <= 'z')
  //     str[i] -= 32;
  // ___________________________
  for (i = 0; *(str + i); i++)
    if (*(str + i) >= 'a' && *(str + i) <= 'z')
      *(str + i) -= 32;
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
}
 */

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

/* //! 5. Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive),
// and store the extracted string in another char array.
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
// [void sort(int *ptr, int size);]
#include <stdio.h>
void sort(int *ptr, int size)
{
  int i, j, temp;
//?out-of-bounds access.
//?Fix: Use nested loops for proper sorting.

  for (i = 0; i < size; i++)
    for (j = i + 1; j < size; j++)
      if (ptr[i] > ptr[j])
      {
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
      }
}
int main()
{
  int size, i;
  printf("Enter a size for array: ");
  scanf("%d", &size);
  int ptr[size];
  printf("Enter %d value for arr: ", size);
  for (i = 0; i < size; i++)
    scanf("%d", &ptr[i]);

  sort(ptr, size);
  printf("\nSorted array: ");
  for (i = 0; i < size; i++)
    printf("%d ", ptr[i]);
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

//! 9. Write a function to move the first value of the array to the position where all smaller values will be on the left and greater values will be on the right.

//! 10. There are five classes with a different number of students in them.
// Five arrays contain marks of students of each class.
// Write a function to receive an address of an array of pointers to access marks of all the students.
// The job of the function is to find the highest marks among all the classes.
