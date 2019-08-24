#include<stdio.h>
void
main ()
{
  int i, n, sum = 0;
  printf ("Enter The Size Of Array\n");
  scanf ("%d", &n);

  for (i = 0; i < n; i++)
    {
      sum = sum + i;
    }
  printf ("sum=%d", sum);
}

