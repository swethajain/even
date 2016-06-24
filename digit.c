#include<iostream.h>
#include<conio.h>
int main()
{
 bool flag;
 char str[10];
 cout<<"\n enter the value";
 cin>>str;
 if((str[0]=='0')||(str[0]=='1')||(str[0]=='2')(str[0]=='3')||(str[0]=='4')||(str[0]=='5')||(str[0]=='6')||(str[0]=='7')||(str[0]=='8')||(str[0]=='9'))
 flag=1;
 else 
 flag=0;
 if(flag==1)
 {
 cout<<"TRUE";
 }
 else
 cout<<"FALSE";
 return 0;
}
