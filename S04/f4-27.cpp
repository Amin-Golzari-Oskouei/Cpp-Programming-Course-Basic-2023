/*
call by value
call by reference
*/

#include <iostream>
#include <conio.h>

using namespace std;

void f(int &);

main()
{
   int x=2;
   f(x);
   cout<<x;
   
   getch();
}

void f(int &a)
{
	a=a+1;
}




