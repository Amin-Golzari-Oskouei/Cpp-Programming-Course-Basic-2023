//  array  + static
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
void s( void );
void a( void );

int main()
{
   cout<<"\nstatic:\n";
   s();    // x[0]=1  x[1]=2
   s();    // x[0]=2  x[1]=3
   s();    
   cout<<"\n......................\n";
   
   cout<<"\n\nautomatic\n";
   a();    // y[0]=1   y[1]=2 
   a();    // y[0]=1   y[1]=2
   a();
   getch();
} 

void s( void )
{
  static int x[ 2 ]={1,2};  
  
  for ( int j = 0; j <=1; j++ )
   {
      cout << "x[" << j << "] = " <<  x[ j ] << "  ";
      ++x[j];
  }
  cout<<endl;
} 

void a( void )
{
   int y[ 2 ] = { 1, 2 };
  
   for ( int j = 0; j <=1; j++ )
   {
      cout <<"y[" << j << "] = " <<  y[ j ]  << "  ";
      ++y[j];
   }
   cout<<endl;
} 
