//  Array of Pointeres  to  Functions

#include <iostream>
#include <conio.h>
using namespace std;

int sum ( int , int );
int prod( int , int );

main()
{
  int  (*p[2])(int,int)={sum,prod};
  
  cout<<(*p[0])(2,3)<<endl;   //5
    
  cout<<(*p[1])(2,3)<<endl;   //6
  
  getch();
}

int sum(int a , int b)
{
	return a+b;
}

int prod(int a , int b)
{
	return a*b;
}





