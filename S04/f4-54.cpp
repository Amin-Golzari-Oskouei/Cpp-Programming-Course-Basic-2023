//namespace
#include <string> 
#include <conio.h>
#include <iostream> 
using namespace std;

namespace  a
{
	string s = "aSpace";
	void   f( ) 
	  { s = "farshid"; }
}


namespace b
{
	string  s = "bSpace";
	int     c = 3; 
	int     f( )
	  { return ++c; }
}


int main()
{
	cout << a::s << endl ;  //aspace 
	a::f();
	cout << a::s << endl;  //farshid  
    cout << b::f(); //4  
	
   getch();
}
