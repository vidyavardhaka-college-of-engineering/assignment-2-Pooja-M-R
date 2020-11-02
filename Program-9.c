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

#include<stdio.h>
int main()
{
    int a[5][5],i,j,m,n;
    printf("Enter the order of matrix  and the elements");
    scanf("%d%d",&m,&n);
    
    //printf("Enter the elements : ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);//missing code
    
   /*printf("The given matrix is");
    
          for(i=0;i<m;i++){
    
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);}//missing code
        
        //printf(" ");//missing code*/
    }   
    printf("Transpose of the given matrix is");
    
    for(i=0;i<n;++i)//missing code
    {
        for(j=0;j<m;++j)//missing code
        {
            printf("%d ",a[j][i]);//missing code
        }
        
        //printf("\n");
    }
 return(0);
          }
