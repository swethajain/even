//addition of pointers
#include<stdio.h>
int main()
{
int a,b;
int *p,*q,sum;
printf("enter a and b values");
scanf("%d %d",&a,&b);
p=&a;
q=&b;
sum=*p+*q;
printf("\n the sum of two numbers is %d",sum);
return 0;
}
