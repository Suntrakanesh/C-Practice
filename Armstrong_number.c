#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[5],n,i,sum1=0,sum2=0,c,b;
printf("Enter the number of digits in the number "); //prompt to enter the number of digits in the given number
scanf("%d",&n);
printf("Enter the number "); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]); //scans the number as a digit by digit
}
c=n-1;
for(i=0;i<n;i++)
{
b=(int)(pow(a[i],n)+0.5); // cube the each digit of the given number
sum1+=b;
sum2+=(a[i]*(int)(pow(10,c)+0.5)); // sum up the cubed values
c=c-1;
}
if(sum1==sum2) // check the number is an Armstrong number or not
{
printf("Armstrong number");
}
else
{
printf("\nNot a Armstrong number");
}
_getch();
}
