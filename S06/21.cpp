// PASSING ARGUMENTS THROUGH POINTERS 

#include <iostream>
#include <conio.h>
using namespace std;

void f(int *);
main()
{
  int a=2;
  f(&a);
  cout<<a;   //5
  
  getch();
}

void f(int *n)
{
	*n=*n+3;
}


/*

main()
{
  int a=2;
  f(a);
  cout<<a;   //5
  
  getch();
}

void f(int &n)
{
	n=n+3;
}

*/

