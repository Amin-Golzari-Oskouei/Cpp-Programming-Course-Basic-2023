// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;

/*
3*5=?
3*5=3 + 3*4
prod(a,b)=a+prod(a,b-1)
*/

int prod(int ,int );

int main()
{
  int a=3,b=1;
  cout<<prod(a,b);
  getch() ;
} 

int prod(int x,int y)
{
   if (y==1)	
      return x;
   return x+prod(x,y-1);      
}



