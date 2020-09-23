#include<stdio.h>
#include<conio.h>
struct add
{
float inch,feet;
}a;
void main()
{float c,d;
printf("Enter the feet and inches ");
scanf("%f%f",&a.feet,&a.inch);
c=12*a.feet;
d=c+a.inch;
printf("The sum of the distance are \nIn Inches %f\nIn feet %f",d,d/12);
_getch();
}
