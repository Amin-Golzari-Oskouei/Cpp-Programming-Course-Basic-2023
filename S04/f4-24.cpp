#include <iostream>
#include <conio.h>
using namespace std;

int f(int a=1,int b=2,int c=3);

main()
{
  int x=4,y=5,z=6;
  cout<<f(x,y,z)<<endl;
  cout<<f(x,y)<<endl;
  cout<<f(x)<<endl;
  cout<<f();
  
  getch();
}

int f(int a,int b,int c)
{
	return a+b+c;
}

