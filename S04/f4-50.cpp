// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;

void f(int , int);

int main()
{
  f(4,1);
  
  getch() ;
} 

void f(int x , int y)
{
   if (x>=3)	
      {
      	f(x-1,y+1);
        cout<<x;   
        cout<<y;
      }
}

// A: f(4,1)   f(3,2)  f(2,3)=exit      ouput : 4132
// B: f(4,1)   f(3,2)  f(2,3)=exit      ouput : ?
