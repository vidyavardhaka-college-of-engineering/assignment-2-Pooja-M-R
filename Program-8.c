
/*Write a program that iterates over the array and counts the number of times the element occurs in the array (with max size 10), and finally prints the value of the count.
At the time of execution, the program should print the message on the console as:
Enter size of the array : 
For example, if the user gives the input as:
Enter size of the array : 5
Next, the program should print the message on the console as:
Enter array elements : 
If the user gives the input as:
Enter array elements : 10 20 20 30 10
Next, the program should print the message on the console as:
Enter an integer value : 
If the user gives the input as:
Enter an integer value : 10
then the program should print the result as:
Number of times element 10 is repeated : 2*/

//INSERT THE MISSING CODE 
#include<stdio.h>
int main(){
  int n,flag=0,i,key,a[10],c=0;
  printf("Enter the size of the array,  array elemnts and the key");
  scanf("%d",&n);
  //printf("Enter array elements");
  for(i=0;i<n;i++)//missing code
  scanf("%d",&a[i]);//missing code
  //printf("Enter an integer value : ");
  scanf("%d",&key);
  
    for(i=0;i<n;i++){
  if(key==a[i]) //missing code
  {
    //flag=1;
    c++;
  }
    }
   printf("The number of times the  key element  is repeated  is %d",c);//missing code
  
    
    return(0);
}


