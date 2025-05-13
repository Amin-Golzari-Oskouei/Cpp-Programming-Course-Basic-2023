// a*x*x + b*x + c = 0

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath> // For the square root sqrt()
#include <conio.h>
using namespace std;

void f( double a, double b, double c);
bool g( double a, double b, double c,double* x1Ptr, double* x2Ptr);

int main()
{
	f( 2.0 , -2.0 , -1.5);
	
	cout<<"\n\n---------------------------------\n\n";
	
	f( 2.0 , 0.0  ,  2.0);
	
	getch();
}


void f( double a, double b, double c)
{
	double  x1 = 0.0, x2 = 0.0; 
	
	cout<<"\n equation:\n\t "<<a<<"*x*x + "<<b<<"*x + "<<c<<" = 0"<<endl;
	
	if( g( a, b, c, &x1, &x2) )
	   cout<<"\n has real solutions:"<<"\n\t x1 = "<<x1<<"\n\t x2 = "<<x2<<endl;
	else
	   cout<<"\n has no real solutions!"<< endl;
}

bool  g( double a, double b, double c,double* x1, double* x2)
// Returns: true, if a solution exists,otherwise false.
{
	bool   f = false;
	double d = b*b - 4*a*c;
	
	if( d >= 0) 
	{
		d = sqrt( d);
		*x1 = (-b + d) / (2*a);
		*x2 = (-b - d) / (2*a);
		f= true;
	}
	return f;
}
