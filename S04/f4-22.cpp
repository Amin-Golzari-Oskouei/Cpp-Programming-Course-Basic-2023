#include <iostream>
#include <conio.h>
using namespace std;


void f();

main()
{
   f();
   f();
   f();
   
   getch();
}

void f()
{
  int x=1;
  cout<<x<<endl;
  x++;	
}

