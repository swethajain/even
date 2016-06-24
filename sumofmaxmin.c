#include<stdio.h>
int main()
{
 int a[10];
 int n,i,max=0,min=0,sum=0;
 printf("\n enter the size");
 scanf("%d",&n);
 printf("\n enter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max=a[0];
 for(i=1;i<n;i++)
 {
  if(a[i]>max)
  max=a[i];
 }
 min=a[0];
 for(i=1;i<n;i++)
 {
  if(a[i]<min)
  min=a[i];
 }
 sum=max+min;
 printf("\n sum of maximum and minimum is %d",sum);
 return 0;
}
