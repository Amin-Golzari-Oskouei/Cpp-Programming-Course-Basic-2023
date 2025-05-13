//Array  
#include <iostream>
#include <conio.h>
using namespace std;

// 10  11  12  13  14  15  16  17  18  19  20 
//     11      13              17      19 

main()
{
  int a[];
  int k=0;
  int n,i,j,t;
  
  for( i=10;i<=99; i++)
  {
  	n=0;
  	for(j=2;j<=i-1; j++)    
  	    if( i % j == 0)
  	         n++;
  	       
    if(n==0)
    {
   	 a[k]=i;
   	 k++;
    }
  }
  
  for(t=0;t<k;t++)
     cout<<a[t]<<"  ";
      
  getch();
}







