#include<stdio.h>
#include<string.h>
int main()
{
 char*e,*f;
 char str[100];
 printf("\n enter the file");
 scanf("%s",str);
 e=strchr(str,'.');
 printf("\n extension- %s\n filename-",e+1);
 for(f=str;f!=e;f++)
 {
 printf("%c",*f);
 }
 printf("\n");
 return 0;
} 
  
