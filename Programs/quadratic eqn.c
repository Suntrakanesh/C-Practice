#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c;
double d,e;
printf("Enter the quadratic equations in the form of :");
scanf("%f%f%f",&a,&b,&c);
d=((-b)+sqrt(b*b-4*a*c))/(2*a);
e=((-b)-sqrt(b*b-4*a*c))/(2*a);
printf("%0.2lf %0.2lf",d,e);
_getch();
}
