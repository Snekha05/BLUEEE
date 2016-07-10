#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,p,i=0,j=1;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
printf("Enter the pair:");
scanf("%d",&p);
for(i=0;i<2*n;i++)
{
m=2*n-i;
if(p!=m)
{
printf("The pair is%d for days %d is %d\n",p,j++,p);
}
}
getch();
}
