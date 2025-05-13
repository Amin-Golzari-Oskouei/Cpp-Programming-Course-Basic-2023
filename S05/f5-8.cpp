//Array        Histogram
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


main()
{
   int n[ 5 ] = { 4 , 3 , 20 , 9 , 13 };

   cout << "   Element" << setw( 2 ) << "   Value" << setw( 20 ) << "Histogram" << endl;
   cout<<"........................................................"<<endl;

   
   for ( int i = 0; i <=4; i++ )
   {
      cout << setw( 6 ) << i << setw( 14 ) << n[ i ] << setw( 15 );
      
      for ( int j = 0; j < n[ i ]; j++ )   
               cout << '*';
               
      cout << endl; 
   } 

   
  
  
      
  getch();
}







