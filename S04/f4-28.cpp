#include <iostream>
#include <conio.h>
using namespace std;

void  swap(int &,int & );

main()
{
   int x=2;
   int y=5;
   swap(x,y);
   cout<<"x="<<x<<endl;
   cout<<"y="<<y<<endl;
   getch();
}
void  swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}




