#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
system("COLOR 3f");
int i,j,n,m,a[15][15],b[15][15],c;
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
printf("multiplication of the matrix is\n");
for(int k=0;k<n;k++)
{
for(i=0;i<n;i++)
{c=0;
for(j=0;j<m;j++)
{
c=c+(a[k][j]*b[j][i]);
}
printf("%d\t",c);
}
printf("\n");
}
getch();
}
