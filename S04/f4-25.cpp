#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;


const double PI = 3.14159;

inline double f( const double r ) 
{ 
   return   PI * pow( r, 2 ); 
} 

main()
{
   double r;
   
   cout << "Enter : ";
   cin >> r;  
   cout << "area = " << f( r ) ;
   
   getch();
}




