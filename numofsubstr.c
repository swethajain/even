#include<stdio.h>
#include<string.h>
char str[100],sub[100];
int c=0,c1=0;
void main()
{
 int i,j,l,l1,l2;
 printf("\n enter a string");
 scanf("%[^\n]s,str);
 l1=strlen(str);
 printf("\n enter the sub string");
 scanf("%[^\n]s,sub);
 l2=strlen(sub);
 for(i=0;i<l1;)
 {
  j=0;
  c=0;
  while((str[i]==sub[i]))
  {
   c++;
   i++;
   j++;
  }
  if(c==l2)
  {
   c1++;
   c=0;
  }
  else
  i++;
 }
 printf("\n occurence of substring in the given string is%d",c1);
}

  
  
