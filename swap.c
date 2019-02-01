#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter number");
scanf("%d%d",&a,&b);

c=a;
a=b;
b=c;
printf("swapping is",a,b);
getch();
}
