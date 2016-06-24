#include <stdio.h> 

  main() 
 { 
   int num,i=0;
   printf("\n enter any number");
   scanf("%d",&num);
   printf("\n MULTIPLICATION TABLE");
   while(i<=10)
   {
   printf("%d*%d=%d",num,i,num*i);
   i++;
   }
   return 0;
  }
   
