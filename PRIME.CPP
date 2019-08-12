#include<iostream.h>
#include<conio.h>

void prime(int x, int y){
int flg;
for(int i=x;i<=y;i++)
{
 flg=0;
 if(i<=1)
 continue;
 for(int j=2;j<=(i/2);j++)
  if(i%j==0)
   { flg=1;
     break;
   }
 if(flg==0)
  cout<<i<<"\t";
}
}

void main(){
clrscr();
int a,b;
cout<<"\t\t\tP R I M E  N U M B E R S\n\n";
cout<<"enter the 2 numbers between which wanna find the prime no. => ";
cin>>a>>b;
cout<<"\n\n\t\t\t=>the numbers are<=\n";

prime(a,b);
getche();
}
