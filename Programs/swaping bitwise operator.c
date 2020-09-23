#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter the two numbers ");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("The swapped values of bitwise operator is %d %d",a,b);
_getch();
}
