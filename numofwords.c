#include<stdio.h>
int main()
{
int count=0;
char str[20];
printf("\n enter the string");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]==' ')
count++;
}
printf("\n number of words in given string are:%d",count+1);
return 0;
}
