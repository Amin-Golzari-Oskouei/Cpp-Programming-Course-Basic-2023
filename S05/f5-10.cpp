//Array   +  function
#include <iostream>
#include <conio.h>
using namespace std;



template<class T>
void printArray( const T b[],const int count )
{
   for ( int i = 0; i < count; i++ )
      cout << b[ i ] << " ";
   
} 

int main()
{
   int  a[ 3 ] = { 7 , 5 , 8 } ;
   cout << "Array a :  " ;
   printArray( a , 3 );  

   cout<<endl<<endl;
   
   double  d[2]={4.5,2.8};
   cout << "Array d :  " ;
   printArray( d , 2 );  
   
   getch();
} 






