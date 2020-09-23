#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b=1,j;
printf("Enter the number of rows :");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",b);
b=b+1;
}
printf("\n");
}
_getch();
}
