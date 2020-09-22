#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
system("COLOR fd");
int sum=0,mul=1,n,a[100];
printf("enter the number of elements ");
scanf("%d",&n);
printf("\nenter the elements\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum+=a[i];
    mul*=a[i];
}
printf("\nThe sum of array  %d\nThe product of array  %d",sum,mul);
getch();
}
