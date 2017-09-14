#include<stdio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("Enter the positive interger\n");
scanf("%d",&n);
for(i=0;i<=n;++i)
{
sum+=i;
}
printf("sum=%d",sum);
getch();
}
