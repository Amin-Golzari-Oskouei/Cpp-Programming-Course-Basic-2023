#include <iostream>
#include <conio.h>
using namespace std;
int  f(int &,int & );
main()
{
   int x=2;
   int y=5;
   int z;
   z=f(x,y);
   cout<<"x="<<x<<endl;   // value
   cout<<"y="<<y<<endl;   //reference
   cout<<"z="<<z<<endl;
   
   getch();
}
int  f(int &a,int &b)
{
	a++;
	b++;
	return a+b;
}




