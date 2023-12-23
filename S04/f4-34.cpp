//  function overloading

#include <iostream>
#include <conio.h>
using namespace std;

int  f(int , int  );
int  f(int , char );

main()
{
   int  x=2;
   int  y=3;
   char ch='A';    //65
     
   cout<<f(x,y)<<endl;   //6
   cout<<f(x,ch)<<endl;  // 68
   
   getch();
}

int f(int a,int b)
{
	return a*b;
}

int  f(int a,char b)
{
	return a+b;
}


