#include <iostream>
#include <conio.h>

using namespace std;

// f(x)= x^2-5x+6

int f(int );

main()
{
  int x;
  cout<<"enter x:";
  cin >>x;
  
  int y;
  y=f(x);
  cout<<"f(x)="  <<y;
  
  getch();
}

int f(int x)
{
	return x*x-5*x+6;
}

