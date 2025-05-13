//   Reference
#include <iostream>
#include <conio.h>
using namespace std;

int  &f(int  );
int  x[2] ;
main()
{
  f(1) = 5;    // x[0]=5
  f(2) = 8;    // x[1]=8
  
  cout << x[0];
  cout << x[1];
  
  getch();
}

int  &f(int  n)
{
	return  x[n-1];
}
