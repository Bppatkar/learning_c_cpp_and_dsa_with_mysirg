
  if (num < 0)
    printf("you are using negative value\n");
  else
  {
    long long int result = calcFact(num);
    printf("Factorial is %lld\n", result);
  }
  // lld means long long int
  // llu means unsigned long long
  // long m % nahi %ld , long sirf int or double k sath hota h or short sirf int k sath
  /*The issue you're encountering is that the factorial of 18 is a very large number (6.4023737e+15), exceeding the capacity of a long int data type in many C implementations. This leads to integer overflow, where the result exceeds the maximum representable value for that data type, causing unexpected behavior like negative values.

  Here's how you can fix it:

  Use a Larger Data Type:
  Consider using long long int or unsigned long long int if your compiler supports them. These data types can typically hold larger integer values.*/
  return 0;
}