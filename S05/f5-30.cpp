// Array2D
using namespace std;
#include <iostream>
#include <iomanip>  
#include <conio.h> 

void print( int x[ ][ 2 ] );

main()
{
  int a[2][2]={{1,2},{3,4}};
  int b[2][2]={{5,6},{7,8}};
  int c[2][2]={0};
  
  cout<<"a:"<<endl;
  print(a);
  
  cout<<"b:"<<endl;
  print(b);
  
  for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
          c[i][j]=a[i][j]+ b[i][j];
  
  cout<<"c:"<<endl;
  print(c); 
  
  
     
  
  
  
  
  
  
  getch();
}








 void print( int x[ ][ 2 ] )
{
   for ( int i = 0; i < 2; i++ ) 
   {    
      for ( int j = 0; j < 2; j++ )   
         cout << x[ i ][ j ] << ' ';

      cout << endl<<endl;  
   } 
} 


