/*Write a program to print the given integer elements of an array (with max size 10) in reverse order.
At the time of execution, the program should print the message on the console as:
Enter size of the array : 
For example, if the user gives the input as:
Enter size of the array : 3
Next, the program should print the message on the console as:
Enter array elements : 
If the user gives the input as:
Enter array elements : 10 20 30
then the program should print the result as:
Array elements in reverse order : 30 20 10*/

//INSERT THE MISSING CODE 
#include<stdio.h>
	int main()
	{
	  int a[10],i,n;
	  printf("Enter size of the array and the array elements");
	  scanf("%d",&n);
	  
	  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);//missing code
	  printf("Array elements in the reverse order : ");
	  for(i=n-1;i>=0;i--) //missing code
	  printf("%d ",a[i]);
	  return(0);
	}
