#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,minus,mult,div;
clrscr();
printf("enter the value of two numbers with operator");
scanf("%d %d",&a,&b);
switch(a,b,sum,minus,mult,div)
{
case 1:
sum=a+b;
printf("sum=%d",sum);
break;
case 2:
minus=a-b;
printf("subract=%d",minus);
break;
case 3:
mult=a*b;
printf("mult=%d",mult);
break;
case 4:
div=a/b;
printf("div=%d",div);
break;
default:
printf("no operation found");
}
getch();
}
