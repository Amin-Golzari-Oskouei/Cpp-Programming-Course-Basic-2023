// pointeres  to  2D-arrays 

#include <iostream>
#include <conio.h>
using namespace std;
/*
       11   12   13
       14   15   16
*/
main()
{
  int a[2][3]= {11,12,13,14,15,16};
  
  int (*p)[3];
  
  p=a;
  
  cout<< * (*p + 5) ;       //16
  cout<<endl;
  cout<< * (*(p+1) + 2) ;   //16
  
  
  
  
  
  
  getch();
}







