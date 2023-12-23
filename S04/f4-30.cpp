#include <iostream>
#include <conio.h>
using namespace std;

int   f( int );         
void  g( int & );  

main()
{
   int x = 2;
   int y = 3;
   cout<<"f(x)="<<f( x ) <<endl;  
   cout << "x = " << x << endl;

   g( y );
   cout << "y = " << y ;

   
   getch();
}

int f( int a )
{
   return  a *= a;  
} 

void g( int &b )
{
   b *= b;   
} 


