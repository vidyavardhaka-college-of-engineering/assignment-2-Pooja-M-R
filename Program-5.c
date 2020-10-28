/* Write a program to insert an element at a specified position in an array
Enter number of elements in array
3
Enter 3 elements
45
78
98
Enter the location where you wish to insert an element
2
Enter the value to insert
60
Resultant array is
45
60
78
98
*/

//INSERT THE MISSING CODE 

#include <stdio.h>
 
#include <stdio.h>
 
int main()
{
   int a[10],i,sum;
   printf("Enter number of elements in array and the array elements");
   scanf("%d", &n);
 
  // printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
      sum=sum+a[i]; 
   }
 printf("Sum of elements=%d",sum);
 
  return 0;
}
