#include<stdio.h>
int compare(char[],char[]);
int main()
{
 int flag;
 char a[100],b[100];
 printf("\n input first string");
 gets(a);
printf("\n input second string");
 gets(b);
 flag=compare(a,b);
 if(flag==0)
 printf("\n EQUAL");
 else
 printf("\n NOT EQUAL");
 return 0;
 }
 int compare(char a[],char b[])
 {
  int i=0;
  while(a[i]==b[i])
  {
   if (a[i]=='\0'||b[i]=='\0')
   break;
   i++;
  }
  if(a[i]=='\0' && b[i]=='\0')
  return 0;
  else
  return -1;
}
 
