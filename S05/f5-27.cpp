// Array2D
using namespace std;
#include <iostream>
#include <iomanip>  
#include  <conio.h> 

int     maximum( int [][ 2 ], int, int );
double  average( int [], int );

int main()
{
   int a[ 3 ][ 2 ] =  { { 13, 17 }  ,  { 7, 18 } ,  { 15, 20 } };

   cout  << "\n\n       [0]      [1]";

   for ( int i = 0; i < 3; i++ ) 
   {
      cout << "\n  [" << i << "] ";
      for ( int j = 0; j < 2; j++ )
         cout << '\t' << a[ i ][ j ];
   } 
  

   cout << "\n\n\n\nHighest: "<< maximum( a, 3, 2 ) << endl<<endl;

   cout << fixed << setprecision( 1 );
   
   cout << "Average: " <<endl<<endl;
   for ( int i = 0; i < 3; i++ )
      cout << "student " << i << " = " << average( a[ i ], 2 )  << endl<<endl;

   getch()  ;
} 


int maximum( int g[][ 2 ], int row, int col )
{
   int h = 0;  

   for ( int i = 0; i < row; i++ )
      for ( int j = 0; j < col; j++ )
         if ( g[ i ][ j ] > h )
            h = g[ i ][ j ];

   return h;

} 

double average( int b[], int len )
{
   int total = 0;

   for ( int i = 0; i < len ; i++ )  
      total += b[ i ];

   return static_cast< double >( total ) / len;  

} 



