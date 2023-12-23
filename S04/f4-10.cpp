#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

// ax^2+bx+c=0    x^2+5x+6=0    root1= -2   root2= -3

void  f(int ,int ,int );
main()
{
  double a,b,c;
  
  cout<<"enter a,b,c:";
  cin>>a>>b>>c;
  
  f(a,b,c);
  
  getch();
}

void  f(int a,int b,int c)
{
  double root1,root2,d;
 
  if(a!=0)
  {
  	d=b*b-4*a*c;
  	if(d>=0)
  	{
  		root1=(-b+sqrt(d)) / (2*a);
  		root2=(-b-sqrt(d)) / (2*a);
    	cout<<"root1="<<root1<<endl;
		cout<<"root2="<<root2;
    }
  	else 
  	   cout<<"error";
  }
}
