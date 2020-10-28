//Write a C program to find sum and mean of n numbers.

//At the time of execution, the program should print the message on the console as:
//Enter how many numbers do you want : 
//For example, if the user gives the input as :
//Enter how many numbers do you want : 4
//Now, the program should print the message on the console as:
//Enter 4 numbers : 
//For example, if the user gives the input as :
//Enter 4 numbers : 3 5 7 8
//then the program should print the result as:
//Sum = 23
//Mean = 5.750000
//Note: Do use the printf() function with a newline character (\n) at the end.



#include<stdio.h>

int main()
{
  int i,n,Sum=0,numbers,a[20];
  float Average;
// Fill the code in printf()
// Fill the code in scanf()

printf("Enter the number of elements and the elements");
  scanf("%d",&numbers);
  for(i=0;i<n;++i)
   {
     scanf("%d",&a[i]);
     //write the code to calculate sum
   }
//write the code to calculate Average 
   for(i=0;i<n;++i)
   {
     Sum=Sum+a[i];
     //write the code to calculate sum
   }
  printf("Sum = %d",Sum);
  printf("Average = %f",Average);

  return 0;
}



