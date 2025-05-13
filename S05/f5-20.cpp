// Binary search of an array.

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int  binarySearch( const int [], int, int, int, int );
void p( const int [], int, int, int, int );

int main()
{
   const int size = 7;  
   int a[ size ]={11,22,35,44,49,88,91};        
   int key;                  
   
   for(int i=0;i<size;i++)
      cout<<a[i]<<"  ";
      
   cout << "\n Enter a number : ";
   cin >> key;
   cout<<endl<<endl;
   
   for ( int j = 0; j < size; j++ )
      cout << setw( 3 ) << j << ' ';

   cout << '\n';  

   for ( int k = 1; k <= 4*size; k++ )
      cout << '-';

   cout << endl;  
   
   int r = binarySearch( a, key, 0, size-1, size );

   if ( r != -1 )
      cout << '\n' <<" found in element "<< r << endl;
   else
      cout << '\n' <<" not found" << endl;

  getch();
} 


int binarySearch( const int b[], int k, int low, int high, int size )
{
   int middle;

   while ( low <= high ) {
      middle = ( low + high ) / 2;  
      p( b, low, middle, high, size );
	  if ( k == b[ middle ] )  
         return middle;
	  else 
         if ( k < b[ middle ] )
            high = middle - 1;  
         else
            low = middle + 1;   
   }
   return -1;  

} 


void  p( const int b[], int low, int mid,int high, int size )
{
    for ( int m = 0; m < size; m++ )
      if ( m < low || m > high )
         cout << "    ";
	  else 
         if ( m == mid )          
            cout << setw( 3 ) << b[ m ] << '*';  
         else
            cout << setw( 3 ) << b[ m ] << ' ';

   cout << endl; 
} 

