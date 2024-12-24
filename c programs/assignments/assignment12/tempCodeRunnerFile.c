void f6()
{
  int k;
  for (int i = 1; i <= 4; i++)
  {
    k = 'A';
    for (int j = 1; j <= 7; j++)
    {
      if (j >= 5 - i && j <= 3 + i)
      {
        printf("%c", 64 + k);
        j < 4 ? k++ : k--;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
}