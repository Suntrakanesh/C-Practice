#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
system("COLOR f4");
char a[100];
printf("\nEnter the array elements  ");
gets(a);
printf("\nThe reverse array elements are  ");
for(int i=strlen(a)-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
