#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("\n enter the positive integer");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n sum=%d",sum);
getch();
}
