// pointeres  to  3D-arrays 

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a[2][3][4]= {
				     {
				  	   {1,2,3,4},
					   {5,6,7,8},
					   {9,10,11,12}
					 } 
					 ,
                     {
					   {13,14,15,16},
					   {17,18,19,20},
					   {21,22,23,24} 
					 }
  				  };

  
  int (*p)[3][4];
  
  p=a;
 
  cout<< *(*(*(p+0)+2)+1)<<endl;  // 10
  cout<< a[0][2][1];              //10
  
  cout<<endl;
  
   cout<< *(*(*(p+1)+0)+3);  // 3
  
  
  getch();
}







