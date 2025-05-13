// Array2D    : transpose

/*

   1   2   3                        1    4    7
   4   5   6                        2    5    8
   7   8   9                        3    6    9

*/
using namespace std;
#include <iostream>
#include <iomanip>  
#include <conio.h> 

void print( int x[ ][ 3 ] );
void transpose(int a[][3]) ;

int b[3][3]={0};

main()
{
  int a[3][3]={ {1,2,3},{4,5,6} ,{7,8,9}};
  
  print(a);
  
  transpose(a);
  
  print(b); 
  
  getch();
}

void transpose(int a[][3])
{
  cout<<"transpose:"<<endl;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
         b[j][i]=a[i][j];
}



void print( int a[ ][ 3 ] )
{
   for ( int i = 0; i < 3; i++ ) 
   {    
      for ( int j = 0; j < 3; j++ )   
         cout << setw(6)<< a[ i ][ j ] ;
      cout << endl<<endl;  
   } 
} 


