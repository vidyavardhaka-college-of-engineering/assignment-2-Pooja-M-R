
/*Write a program to read an array of integers (with max size 10) and print the total number of even numbers and odd numbers in that array.
At the time of execution, the program should print the message on the console as:
Enter array size: 
For example, if the user gives the input as:
Enter array size: 4
Next, the program should print the message on the console as:
Enter 4 elements: 
If the user gives the input as:
Enter 4 elements : 23 45 22 61
then the program should print the result as:
Total number of even numbers in the array : 1
Total number of odd numbers in the array : 3*/

//INSERT THE MISSING CODE 

int main()
{
    int arr[10];
    int i, num, evennum, oddnum;

    // Reads size and elements in array
    printf("Enter the number of elements and the elements");
    scanf("%d",&num);
    //printf("Enter %d elements in array: ", num);
        //printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//missing code
    }

    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers

    for(i=0; i<n; i++)
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[i]%2 == 0) //missing code
        {
            evennum++;
        }
        else
        {
            oddnum++; // increment oddnumber count
        }
}
printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum  );//missing code
//printf("Total number of odd numbers in the array : %d\n",   );//missing code

return(0);    
}
