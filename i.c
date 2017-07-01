#include<stdio.h>
#include<conio.h>
void main()
{
long long n;
int count=0;
clrscr();
printf("\n enter the integer");
scanf("%d",&n);
while(n!=0)
{
n/=4;
count++;
printf("\n no of digits %d",count);
}
getch();
}

