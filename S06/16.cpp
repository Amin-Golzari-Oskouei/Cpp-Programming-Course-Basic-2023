//  Pointeres  to  Functions

#include <iostream>
#include <conio.h>
using namespace std;

int f1(int );
int f2(int );

main()
{
  int  (*p)(int );
  
  p=f1;
  cout<<p(3)<<endl;  //3*3=9
  
  p=f2;
  cout<<p(3);        //3*3*3=27
  
  getch();
}

int f1(int a)
{
	return a*a;
}

int f2(int b)
{
	return b*b*b;
}






