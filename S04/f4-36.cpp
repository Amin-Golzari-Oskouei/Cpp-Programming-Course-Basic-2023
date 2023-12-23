//template

#include <iostream>
#include <conio.h>
using namespace std;


template < class T > 
T maximum( T x, T y )
{
   T max ;
   if ( x > y )
      max = x;
   else
      max = y;
   return max;
} 

int main()
{
   int  a,b;
   cout << "Input two integer values: ";
   cin >> a >> b ;
   cout << " maximum = "<< maximum( a,b);        
   
   double d1, d2;
   cout << "\n\n Input two double values: ";
   cin >> d1 >> d2 ;
   cout << " maximum = "  << maximum( d1, d2);

   char ch1, ch2;
   cout << "\n\n Input two characters: ";
   cin >> ch1 >> ch2 ;
   cout << " maximum = " << maximum( ch1, ch2) << endl;


   getch() ;
} 


