#include<iostream.h>
#include<conio.h>
#include<string.h>

void reversit(char rev[]){
char ch;
int mx=strlen(rev);
for(int i=0;i<=(mx/2);i++)
{
 ch=rev[i];
 rev[i]=rev[mx-i];
 rev[mx-i]=ch;
}
 for(int j=0;j<=mx;j++)
  cout<<rev[j];
}

void main(){
clrscr();
char str[40];
cout<<"\t\t\t R E V E R S E\n\n";
cout<<"Enter the string: =>";
cin.getline(str,40);
reversit(str);
getche();
}

