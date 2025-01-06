// TODO: Assignment-18: Arrays

/* //! 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int sum_of_array(int newArr[], int n)
{
  int i, sum = 0;
  printf("Enter numbers for the array:\n");
  for (i = 0; i < n; i++)
      scanf("%d", &newArr[i]);
  for (i = 0; i < n; i++)
      sum += newArr[i];
  return sum;
}
int main()
{
  int arr[10];
  int sum = sum_of_array(arr, 10);
  printf("sum of array is %d\n", sum);
  return 0;
}
//? Enter numbers for the array:
//? Input -1 2 3 4 5 6 7 8 9 10
//? output -sum of array is 55
*/
/* //! when u complete the chapter of pointer in array then u can write same code like this
 #include <stdio.h>
int sum_of_array(int *newArr, int n) {
    int i, sum = 0;
    printf("Enter numbers for the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", (newArr + i)); // Using pointer arithmetic for input

    for (i = 0; i < n; i++)
        sum += *(newArr + i); // Using pointer dereferencing for sum

    return sum;
}

int main() {
    int arr[10];
    int sum = sum_of_array(arr, 10); // Passing the array as a pointer
    printf("Sum of array is %d\n", sum);
    return 0;
}
 */
//?If the user inputs the numbers 1 2 3 4 5 6 7 8 9 10, the output will be:

//?Enter numbers for the array:
//?Sum of array is 55

/* //! 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int avg_of_array(int newArr[], int n)
{
  int i, sum = 0, avg = 0;
  printf("Enter a number: ");
  for (i = 0; i < n; i++)
    scanf("%d", &newArr[i]);
  for (i = 0; i < n; i++)
    sum += newArr[i];
  return avg = sum / n;
}
int main()
{
  int arr[10];
  int avg = avg_of_array(arr, 10);
  printf("average of array is %d\n", avg);
  return 0;
} */

/* //! 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int calculate_even_sum(int newArr[], int n)
{
  int i, even_sum = 0;
  for (i = 0; i < n; i++)
    if (newArr[i] % 2 == 0)
      even_sum += newArr[i];

  return even_sum;
}
int calculate_odd_sum(int newArr[], int n)
{
  int i, odd_sum = 0;
  for (i = 0; i < n; i++)
    if (newArr[i] % 2 != 0)
      odd_sum += newArr[i];

  return odd_sum;
}

int main()
{
  int arr[10], i;

  printf("Enter numbers for the array:\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  int even_sum = calculate_even_sum(arr, 10);
  int odd_sum = calculate_odd_sum(arr, 10);

  printf("Sum of even numbers is %d\n", even_sum);
  printf("Sum of odd numbers is %d\n", odd_sum);
  return 0;
}
 */

//! 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int find_greatest_number(int newArr[], int n)
{
  int i;
  printf("Enter 10 numbers: ");
  for (i = 0; i < n; i++)
    scanf("%d", &newArr[i]);
}
int main()
{
  int arr[10];
  int find = find_greatest_number(arr, 10);
  printf("greatest number in array is %d", find);
  return 0;
}

//! 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

//! 6. Write a program to sort elements of an array of size 10. Take array values from the user.

//! 7. Write a program to find the second largest number in an array. Take array values from the user.

//! 8. Write a program to find the second smallest number in an array. Take array values from the user.

//! 9. Write a program to sort an array of 10 elements in descending order.

//! 10. Write a program in C to copy the elements of one array into another array. Take array values from the user.

// TODO: Questions From Other Source
//! 11. Create a program to find the sum and average of all elements in an array.

//! 12. Create a program to find the number of occurrences of an elements in an array.

//! 13. Create a program to find the maximum and minimum elements in an array.

//! 14. Create a program to check if the given array is sorted.

//! 15. Create a program to return a new array deleting a specific elements.

//! 16. Create a program to reverse an array.

//! 17. Create a program to check is the array is palindrome or not.

//! 18. write a function that uses pointer arithmetic to copy and array of char into another.

//! 19. Create a program to merge two sorted arrays.

//! 20. Create a program to search an elements in a 2-D array.

//! 21. Create a program to find the sum of two diagonal elements.