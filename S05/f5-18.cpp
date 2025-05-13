// bubble sort
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
/*
pass 1
 9   5   3    1    7   4
 5   9   3    1    7   4
 5   3   9    1    7   4
 5   3   1    9    7   4
 5   3   1    7    9   4
 5   3   1    7    4   9
 pass 2
 3   5   1    7    4
 3   1   5    7    4
 3   1   5    7    4
 3   1   5    4    7
 pass 3 
 1   3   5    4 
 1   3   5    4
 1   3   4    5
pass 4
 1   3   4 
 1   3   4
 pass 5
 1   3
*/

void  sort(int [] , int );

int main()
{
   const int size = 10;  
   int a[ size ] = { 9,5,3,1,7,4,1,2,6,7};
  
   sort(a,size);
   
   for ( int i = 0; i < size; i++ )
      cout << a[ i ]<<'\t';

   getch();
} 

void  sort(int a[] , int len)
{
  int hold;
    
  for ( int p = 0; p < len - 1; p++ )
      for ( int j = 0; j < len - 1; j++ )  
           if ( a[ j ] > a[ j+1 ] )
		    {      
              hold = a[ j ];        
              a[ j ] = a[ j+1 ]; 
              a[ j+1 ] = hold;  
            } 
}
