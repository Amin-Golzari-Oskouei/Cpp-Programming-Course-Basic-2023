//  function overloading

#include <iostream>
#include <conio.h>
using namespace std;

int product(int ,int );
int product(int ,int ,int );
double  product(int ,double );

main()
{
   int x=2;
   int y=3;
   int z=4;
   double d=1.5;
   
   cout<<product(x,y)<<endl;
   cout<<product(x,y,z)<<endl;
   cout<<product(x,d)<<endl;
   
   getch();
}

int product(int a,int b)
{
	return a*b;
}

int product(int a,int b,int c)
{
	return a*b*c;
}

double  product(int a,double b)
{
	return a*b;
}


