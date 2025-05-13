// mean
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


void   mean( const int [], int );
void   printArray( const int[], int );

int main()
{
   const int size = 15;  
   int a[ size ] =  { 5,1,1,8,7,1,8,0,2,9,3,1,7,7,1} ;

   cout << "\n\n array :";
   printArray( a , size );  
   
   mean( a , size );
   
   getch();
} 

void mean( const int x[], int len )
{
   int sum = 0;

   for ( int i = 0; i < len; i++ )
      sum += x[ i ];

   cout << fixed << setprecision( 2 );

   cout << " \n \n mean =" <<    static_cast< double >( sum ) / len  << "\n";

} 

void printArray( const int a[], int len )
{
   for ( int i = 0; i < len; i++ ) {
       cout << setw( 3 ) << a[ i ];
   } 
} 
