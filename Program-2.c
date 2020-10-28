//Write a C program to print first n natural numbers using while loop
//At the time of execution, the program should print the message on the console as:
//Enter upper limit : 
//For example, if the user gives the input as :
//Enter upper limit : 3
//then the program should print the result as:
//The natural numbers from 1 - 3 : 1 2 3
//Note: Do use the printf() function with a newline character (\n) at the end.




#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter upper limit : ");
	scanf("%d",&n);
	printf("The natural numbers are ");
	for(i=1;i<=n;i++)
		printf("%d ",i);
	//Fill the missing code here
 }
