#include<stdio.h>
int main()
{
 char str[100];
 int x=0;count=0;
 printf("\n enter the string");
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==' ')
  x++;
  else
  count++;
 }
 printf("\n number of characters in the given stringis %d",count-x);
 return 0;
} 
