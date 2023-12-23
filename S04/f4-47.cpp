// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;

int p(int ,int );

int main()
{
  int a=2,b=10;
  cout<<p(a,b);
  getch() ;
} 

int p(int x,int y)
{
   if (y==1)	
      return x;
   return x*p(x,y-1);      
}
/*
 p(2,3)=2*p(2,2)=2*4=8
 p(2,2)=2*p(2,1)=2*2=4
 
*/


