#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
char a[10];
clrscr();
printf("Enter the String \n");
scanf("%s",a);
if(isdigit(a[0])==0)
{
printf("False \n");
}
else
{
printf("True");
}
getch();
}
