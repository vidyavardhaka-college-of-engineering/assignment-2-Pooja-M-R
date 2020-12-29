//Write a program that code accepts an integer input from the user and prints I Love VVCE by number of times as the given integer.


//The below sample code accepts an integer input from the user and prints I Love Earth by number of times as the given integer.

//Fill in the missing code so that it produces the desired output.

//Note: Do use the printf() function with a newline character (\n).

#include <stdio.h>
int main() {
	int i = 1,n;
	printf("Enter  an  integer");
	scanf("%d",&n);

 // Fill the code in scanf()
	do {
		printf("I Love VVCE ");
		i++;
		// complete the statement
	} while(i<=n);
	return(0);// complete the condition
}
