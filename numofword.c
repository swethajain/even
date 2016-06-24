#include<stdio.h>
int main()
{
int count=0,i;
char str[20];
printf("\n enter the string");
scanf("%c",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
count++;
}
printf("\n number of words in given string are:%d",count+1);
return 0;
}
