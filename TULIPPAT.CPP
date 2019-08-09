#include<iostream.h>
#include<conio.h>

void main(){
clrscr();

int ln;
char b='A';

cout<<"\t\t\tA L P H A B E T  P A T T E R N\n\n";
cout<<"enter the no. of lines u want in the pattern =>";
cin>>ln;

for(int i=0;i<ln;i++)
 {
   for(int j=0;j<=i;j++)
  { cout<<b++;
    if(b=='Z')
     b='A';
  }
 cout<<endl;
 }
getche();
}