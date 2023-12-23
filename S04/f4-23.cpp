#include <iostream>
#include <conio.h>
using namespace std;
void f();
void g();
main()
{
	cout<<x;
  f(); 
  g();
  f();
  getch();
}
int x=1;  // global

void f(){
	cout<<" x in f:  " <<x<<endl;
	x+=5;
}
void g(){
	cout<<" x in g:  " <<x<<endl;
	x-=2;
}
