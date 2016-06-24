#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,a[100];
 int max,min;
 printf("\n enter the array size");
 scanf("%d",&n);
 printf("\n enter the elements of array");
 for(i=0;i<n;i++)
 scanf("%d",a[i]);
 max=a[0];
 for(i=1;i<n;i++)
 {
  if(max<a[i])
  max=a[i];
 }
 printf("\n the highest element is%d",max);
 min=a[0];
 for(i=1;i<n;i++)
 {
  if(min>a[i])
  min=a[i];
 }
 printf("\n the lowest element is%d",min);
 return 0;
} 
