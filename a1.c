#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the number abc");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
printf("\n the a is greater");
}
else if(a<c)
{
printf("\n the b is greater");
}
else
{
printf("\n the c is greater");
}
getch();
}
