#include<stdio.h>
int main()
{
int i,j,m,n,a[10][10];
printf("Enter size and elelments");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("MATRIX ELEMENTS");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
//printf("\n");
}
return(0);
}


