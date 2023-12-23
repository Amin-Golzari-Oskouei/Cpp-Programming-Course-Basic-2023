#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void f();
int y=6;       // global

main()
{
  int x=3;    //local
  cout<<"x in main="<<x<<endl;
  f();
  y++;
   cout<<"y in main="<<y<<endl;
   x+=5;
   cout<<"x in main="<<x<<endl;
  
  getch();
}

void f()
{
	int x=5;   //local
	cout<<"x in f="<<x<<endl;
	cout<<"y in f="<<y<<endl;
}

