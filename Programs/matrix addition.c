#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
system("COLOR fc");
int i,j,n,m,a[15][15],b[15][15],sum[15][15];
printf("Enter order of matrix ");
scanf("%d%d",&n,&m);
printf("Enter the elements of first matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of second matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("sum of the matrix is\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
sum[i][j]=a[i][j]+b[i][j];
printf("%d\t",sum[i][j]);

}
printf("\n");
}
getch();
}
