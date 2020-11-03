//C program to print sum of odd numbers between 0 and 10

#include <stdio.h>
int main ()
{
 int i,sum = 0;
//Fill the missing code
 for(i=1;i<=10;i++)
 {
   
   if ( i % 2 == 0 )
      continue;
  sum = sum + i;
  }
  printf("Sum=%d",sum);
//Fill the missing code
 return 0;
}
