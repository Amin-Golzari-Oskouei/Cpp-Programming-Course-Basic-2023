//  function overloading

#include <iostream>
#include <conio.h>
using namespace std;

int    f(int  , int  );
char   f(int  , int );

main()
{
   cout<<f(2,3)<<endl;   //6 
   cout<<f(1,4);       //B
   
   getch();
}

int f(int a,int b)
{
	return a*b;
}

char  f(int a,int b)
{
	return a+b;
}


