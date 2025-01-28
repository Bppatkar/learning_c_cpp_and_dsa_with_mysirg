//! 9. Write a function to make an acronym name from a given name. For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", and "Bhavesh Gupta" becomes "B Gupta".
#include <stdio.h>
#include <string.h>
void fullNameToAcronymConverter(char str[])
{
  int i = 0;
  int len = strlen(str);

  // printing the first letter of the first world
  if (str[i] != ' ')
    printf("%c", str[i]);

  i++;

  while (i < len)
  {
    if (str[i] == ' ')
    {
      i++;
      if (i < len && str[i] != ' ')
        printf(" %c", str[i]);
    }
    i++;
  }
  // print last word in full
  int lastSpaceIndex = -1;
  for (i = 0; i < len; i++)
    if (str[i] == ' ')
      lastSpaceIndex = i;

  if (lastSpaceIndex != -1)
    printf(" %s", &str[lastSpaceIndex + 1]);
}

int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, 50, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  fullNameToAcronymConverter(str);
  return 0;
}