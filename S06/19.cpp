//  Pointeres  to  Function  As parameters of Another function

#include <iostream>
#include <conio.h>
using namespace std;

int   f(int (*) (int  , int ) , int ,int );
int   sum ( int , int );
int   prod( int , int );


main()
{
  cout<< f(sum,2,3) ;
  
  cout<< endl;
  
  cout<< f(prod,2,3) ;
 
  getch();
}



int f(int (*p) (int  , int ) , int c , int d)
{
	return (*p)(c,d);
}





int sum(int a , int b)
{
	return a+b;
}

int prod(int a , int b)
{
	return a*b;
}
