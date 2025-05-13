//  array 2D 
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


int main()
{
   int a[ 2 ][ 3 ] = { {1,2,3}, {4, 5 ,6}};
   /*
       0    1    2
    0  1    2    3
    1  4    5    6
    
   */
   
   
   for(int i=0;i<=1 ;i++) 
   {
     cout<<"\nrow"<<i;
      for(int j=0;j<=2;j++)
         cout<<"   "<<a[i][j];
   }
   
   
  getch();
} 


