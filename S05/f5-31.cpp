// Array2D    :  c=a*b

/*

  1   2           7    8    9    10             1*7+2*11=29    -     -     -
  3   4           11   12   13   14             -              -     -     -
  5   6                                         -              -     -     5*10+6*14=134

a=3*2             b=2*4                        c=3*4

*/
using namespace std;
#include <iostream>
#include <iomanip>  
#include <conio.h> 

void print( int x[ ][ 4 ] );

main()
{
  int i,j,k;
  
  int a[3][2]={{1,2},{3,4},{5,6}};
  int b[2][4]={{7,8,9,10},{11,12,13,14}};
  int c[3][4]={0};
  
  for(i=0;i<3;i++)
    for(j=0;j<4;j++)
       for(k=0;k<2;k++)
           c[i][j]+=a[i][k]* b[k][j];
  
  cout<<"c:"<<endl;
  print(c); 
   
  getch();
}

 void print( int x[ ][ 4 ] )
{
   for ( int i = 0; i < 3; i++ ) 
   {    
      for ( int j = 0; j < 4; j++ )   
         cout << setw(6)<< x[ i ][ j ] ;
      cout << endl<<endl;  
   } 
} 


