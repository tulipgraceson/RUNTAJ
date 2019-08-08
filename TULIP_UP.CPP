#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

void main(){
clrscr();

char low[20];
cout<<"\t\t\tC A S E  C O N V E R S I O N\n\n";

cout<<"Enter your desired string =>";                 //INPUT
gets(low);

cout<<"The case converted is     =>";
 for(int i=0;low[i]!='\0';i++)                       //LOOP FOR CONVERSION
  if((low[i]>=97)&&(low[i]<=122))
   low[i]=low[i]-32;

cout<<low;                                           //OUTPUT
getche();
}