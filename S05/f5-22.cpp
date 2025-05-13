//  median
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


void   median( int [], int );
void   sort( int[], int );
void   print( const int[], int );

int main()
{
   const int size = 15;  

   int a[ size ] =  { 5,1,1,8,7,1,8,0,2,9,3,1,7,7,1} ;
   
   
   sort(a,size);
   cout<<"sorted array:";
   print(a,size);
   
   median(a,size);
  
   getch();
} 

void median(int a[] , int len)
{
	cout<<"\n\n median=" <<a[len/2];
}

void sort( int a[], int len )
{
   int hold;  
     
   for ( int pass = 1; pass < len; pass++ )
      for ( int j = 0; j < len - 1; j++ )
         if ( a[ j ] > a[ j + 1 ] ) {
            hold = a[ j ];
            a[ j ] = a[ j + 1 ];
            a[ j + 1 ] = hold;
         }
} 

void print( const int a[], int len )
{
   for ( int i = 0; i < len; i++ ) {
       cout << setw( 2 ) << a[ i ];
   } 
} 
