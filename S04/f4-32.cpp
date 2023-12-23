//  function overloading

#include <iostream>
#include <conio.h>
using namespace std;

int    square(int );
double square(double );

main()
{
   int a=3;
   double b=2.5;
   cout<<square(a)<<endl;
   cout<<square(b)<<endl;
   
   
   getch();
}

int square(int a)
{
	return a*a;
}

double square(double d)
{
	return d*d;
}

