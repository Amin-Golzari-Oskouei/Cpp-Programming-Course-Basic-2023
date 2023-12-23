#include <iostream>
#include <conio.h>

using namespace std;

// f(x,y)=x+y

int  f(int , int );

main()
{
  int x,y;
  
  cout<<"enter x,y:";
  cin>>x>>y;
  
  cout<<"sum="<<f(x,y);  
  
  getch();
}

int  f(int a , int b)
{
	return a+b;
}






