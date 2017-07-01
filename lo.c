
#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
clrscr();
printf("\n enter an natural number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("\n sum=%d",sum);
getch();
}
