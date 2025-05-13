//   Reference

#include <iostream>
#include <conio.h>
using namespace std;

void f(int &);

main()
{
  int a=5;
  
  f(&a);
  
  cout << a;

  getch();
}

void f(int &r)
{
	r++;
}


