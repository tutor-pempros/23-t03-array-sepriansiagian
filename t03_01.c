// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int unsigned number;
  int bigger;
  int smaller;
  int i;
  
  
  scanf("%i\n", &number);

  int press[number];
  

  for (int i=0; i<number; ++i)
  {
    scanf("%d", &press[i]);
  }
 
  smaller = press[0];
  bigger = press[0];

  for (int i=0; i<number; ++i)
 
     if (smaller > press[i])
    {
      smaller = press[i];
    }
    else if (bigger>press[0])
    {

    }
  
  
  for (int i=0; i<number; ++i)
 
 {
    if (bigger > press[i])
    {

    }
    else if (bigger < press[i]) 
    {
      bigger = press[i];
    }
  
  }
  
  printf("%d\n", smaller);
  printf("%d\n", bigger);
 


  
  return 0;
}