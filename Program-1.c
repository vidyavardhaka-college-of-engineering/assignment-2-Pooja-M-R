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



#include <stdio.h>

int main()
{
   int num;
    int count = 0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Run loop till num is greater than 0 */
    do
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d", count);

    return 0;
}

  


