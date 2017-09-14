#include<stdio.h>
void main()
{
long long n;
int count=0;
clrscr();
printf("Enter a interger\n");
scanf("%11d",&n);
 while(n != 0)
 {
 n /10;
 ++count;
 }
 printf("Number of digits: %d", count);
 getch();
}
