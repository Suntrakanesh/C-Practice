#include<stdio.h>
#include<conio.h>
void main()
{
FILE *a;
a=fopen("E:\\documents\\gct.txt","r");
int word=0,line=0;
char ch;
while((ch=fgetc(a))!='#')
{
if(ch==' '||ch=='\n')
{
word+=1;
}
if(ch=='\n')
{
line+=1;
}
}
printf("%d %d",word,line);
fclose(a);
_getch();
}
