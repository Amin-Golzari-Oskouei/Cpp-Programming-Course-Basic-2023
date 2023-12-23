// Overloading Function Templates

#include <iostream>
#include <conio.h>
using namespace std;

template <class T>
void f(T  &x)
{
	x=-x;
}

template <class T>
void f(T  &x,T  &y)
{
	T  temp;
	temp=x;
	x=y;
	y=temp;
}


int main()
{
   int  a1=-2,a2=3;
   f(a1,a2);
   cout<<"a1="<<a1<<'\t'<<"a2="<<a2<<endl;    //a1=3  a2=-2
   
   double d1=4.5,d2=8.3;
   f(d1,d2)  ;
   cout<<"d1="<<d1<<'\t'<<"d2="<<d2<<endl<<endl;  //d1=8.3  d2=4.5
   
   int a3=4;
   f(a3);
   cout<<"a3="<<a3<<endl;   //a3=-4
   
   double d3=-3.4;
   f(d3);
   cout<<"d3="<<d3<<endl;   //d3=3.4
 
  getch() ;
} 



