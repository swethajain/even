#include<stdio.h> 
#include<string.h> 
void main(){ 
char str[20]; 
int i,j,count,k; 
printf("Enter the string \n"); 
scanf("%s",&str); 
j=strlen(str); 
count=0; 
for(i=0;i<j;i++){ 
if(str[i]>='0' && str[i]<='9'){ 
count++; 
} 
}
printf(" The number of Numeric character in the string are %d",count); 
getch(); 
} 
