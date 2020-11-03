/*Write a program to find the transpose of a given matrix.
[Hint: A transpose matrix writes the rows of a given matrix as the columns of the matrix.]
At the time of execution, the program should print the message on the console as:
Enter the order of matrix : 
For example, if the user gives the input as:
Enter the order of matrix : 2 3
Next, the program should print the message on the console as:
Enter 6 elements : 
if the user gives the input as:
Enter 6 elements : 1 2 3 4 5 6 
then the program should print the result as:
The given matrix is
1 2 3 
4 5 6 
Transpose of the given matrix is
1 4 
2 5 
3 6 */


//INSERT THE MISSING CODE 

#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in the array, array elements and the key");
  scanf("%d", &n);

  
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

 
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not present in the array", search);

  return 0;
}
