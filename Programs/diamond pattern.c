#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a;
printf("Enter the number ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(j=i+1;j<=a;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
    printf("* ");
}
printf("\n");

}
for(i=a-1;i>=1;i--)
{
for(j=a;j>=i+1;j--)
{
printf(" ");
}
for(k=i;k>=1;k--)
{
    printf("* ");
}
printf("\n");

}
_getch();
}
