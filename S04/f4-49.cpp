// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;

void f(int , int);

int main()
{
  f(2,6);
  
  getch() ;
} 

void f(int x , int n)
{
   if (x<=n)	
      {
      	f(x+1,n);
      	cout<<x<<endl;
      }
}
// f(2,6)   f(3,6)  f(4,6)  f(5,6)  f(6,6)  f(7,6)

