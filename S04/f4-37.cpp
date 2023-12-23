//overload   -   template
#include <iostream>
#include <conio.h>
using namespace std;

template <class  T>
T reverse (T x)
{
   return -x;	
}


int main()
{
  int    a=3;
  double d=2.7;
   
  cout<<reverse(a)<<endl;   //-3
  cout<<reverse(d)<<endl;   //-2.7
  
  getch() ;
} 



