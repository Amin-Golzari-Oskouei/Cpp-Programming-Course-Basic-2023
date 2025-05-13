//  array2D + function 
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void f( int [][ 2 ] );

int main()
{
   int a[ 3 ][ 2 ] = { {1,2} , {3,4} , {5,6} };
   
   int b[ 3 ][ 2 ] = { {1,2} , {3} , {5,6} };

   cout << "array a:" << endl;
   f( a );

   cout << "array b:" << endl;
   f( b );

   getch();
} 


void f( int x[ ][ 2 ] )
{
   for ( int i = 0; i < 3; i++ ) 
   {    
      for ( int j = 0; j < 2; j++ )   
         cout << x[ i ][ j ] << ' ';

      cout << endl<<endl;  
   } 
} 
