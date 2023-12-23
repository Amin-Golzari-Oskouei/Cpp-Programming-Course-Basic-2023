//template
#include <iostream>
#include <conio.h>
using namespace std;

template <class  T>
T f (T x)
{
   x+=3;
   return x;	
}


int main()
{
  int    a=1;
  double d=2.7;
  char   ch='A';
   
  cout<<f(a)<<endl;         // 4
  cout<<f(d)<<endl;         // 5.7
  cout<<f<int>(d)<<endl;    // 5
  cout<<f(ch)<<endl;        //?
  
  getch() ;
} 



