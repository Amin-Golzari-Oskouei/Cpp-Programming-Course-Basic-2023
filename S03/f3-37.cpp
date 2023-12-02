#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 int i,j,s;
 
 for(i=0; i<=1 ; i++)  
   for(j=0;j<=1; j++)
      {
      	s= i || j;
      	cout<<"i=" <<i<<'\t'<<"j=" <<j<<'\t'<<"i || j=" <<s<<endl;
      }
   
   
  getch();
}

/*
i    j   i ||j
0    0    0
0    1    1
1    0    1
1    1    1 


*/
