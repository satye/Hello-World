#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int a,y,bro1,bro2,x,sum=0;
  cout<<"Enter a Number";
  cin>>a;
  y=a;
  x=a;
label2:while(x!=0)
 {
 bro1=x%10;
 x=x/10;
 bro2=x%10;
 if(bro1==(bro2+1))
 goto label2;
 else
 goto label1;
 }

 while(y!=0)
 {  sum=sum*10;
 sum=sum+y%10;
 y=y/10;
 }


 cout<<"\n"<<a+sum;

 label1: cout<<"Applicable for 2 digits";



getch();
}
