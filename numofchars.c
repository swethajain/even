#include<stdio.h>
int main()
{
 char str[100];
 int x=0;count=0;
 printf("\n enter the string");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==' ')
  x++;
  else
  count++;
 }
 printf("\n number of characters in the given string is %d",count-x);
 return 0;
} 

