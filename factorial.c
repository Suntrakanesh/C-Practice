#include<stdio.h>
#include<conio.h>
void fact(int x);
void main()
{
 int a;
 printf("enter any number ");
 scanf("%d",&a);
 fact(a);
 getch();



}
void fact(int x)
{
int b=1,i;
for(i=1;i<=x;i++)
{
  b*=i;


}
printf("the factorial of the number is :%d",b);
}
