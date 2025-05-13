// Array2D
using namespace std;
#include <iostream>
#include <iomanip>  
#include <conio.h> 

void print( int x[ ][ 3 ] );

main()
{
   int a[3][3]={ {1,2,3} ,{4,5,6}, {7,8,9} };
  
   print(a);
   
   cout<<endl<<endl;
   
   for(int i=0;i<3;i++)
     cout<<a[i][i] <<"  ";
     
   getch();
}

 void print( int x[ ][ 3 ] )
{
   for ( int i = 0; i < 3; i++ ) 
   {    
      for ( int j = 0; j < 3; j++ )   
         cout << x[ i ][ j ] << ' ';

      cout << endl<<endl;  
   } 
} 


