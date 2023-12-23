#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

/*
 A(x1,y1)   
 B(x2,y2)
 
 distance=sqrt((x2-x1)^2 + (y2-y1)^2)
 */

double  distance(double ,double ,double , double );
main()
{
  double x1,y1,x2,y2;
  cout<<"enter A:";
  cin>>x1>>y1;
  
  cout<<"enter B:";
  cin>>x2>>y2;
  
  cout<<distance(x1,y1,x2,y2);
  
 getch();
}

double f(double n)
{
	return n*n;
}

double  distance(double x1,double y1,double x2, double y2)
{
	return sqrt(f(x2-x1)+ f(y2-y1) );
}


