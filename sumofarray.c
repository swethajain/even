#include<stdio.h>
int main()
{
int n;
int a[n],b[n],c[n];
printf("\n enter the value of array size");
scanf("%d",&n);
printf("\n enter the array elements of a");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the array elements of b");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
printf("\n sum of the two array is");
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("%d",c[i]);
}
return 0;
}
