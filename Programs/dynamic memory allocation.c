#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *a,*b,n,m,i;
printf("Enter the size of array ");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
b=(int*)calloc(n,sizeof(int));
if(a==NULL&&b==NULL)
{
printf("The memory is not allocated");
}
else
{
printf("the memory is successfully allocated dynamically\n");
printf("Enter the resized value ");
scanf("%d",&m);
a=realloc(a,m*sizeof(int));
printf("the memory is successfully resized by realloc ");
}
free(a);
free(b);
printf("\nThe memory is successfully freed");
_getch();
}
