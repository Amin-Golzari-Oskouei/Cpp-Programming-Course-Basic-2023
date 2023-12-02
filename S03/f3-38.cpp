#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 int i,j,k;
 
 for(i=1;i<=4;i++)
 {
 	for(j=1 ; j<=4-i;j++)
 	   cout<<"   ";
 	   
    for(k=1 ; k<=2*i-1 ; k++) 	   
        cout<<k<<"  ";    
	cout<<endl;        
 }
   
  getch();
}
/*
                 1
            1    2     3
     1	    2    3     4     5
1    2      3    4     5     6    7  

*/         

