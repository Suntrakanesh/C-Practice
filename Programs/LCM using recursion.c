#include<stdio.h>
#include<conio.h>
int a,b,c;
void lcm();
void lcm()
{
if(c%a==0&&c%b==0)
{
printf("The LCM is %d",c);
goto x;
}
c+=1;
lcm();
x:
 _getch();
}
void main()
{

printf("Enter the two numbers ");
scanf("%d%d",&a,&b);
c=(a>b)?a:b;
lcm();
_getch();
}
