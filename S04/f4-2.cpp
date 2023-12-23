#include <iostream>
#include <conio.h>

using namespace std;

int  f(int  );    //prototype

main()
{
  int a=2;
  int b;
  
  b=f(a);
  
  cout<<b;
  
  getch();
}

int  f(int  x)
{
	return 2*x;
}






