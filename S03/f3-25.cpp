#include <iostream>
#include <conio.h>
using namespace std;

//X=3   Y=2    Z=9 
main()
{
  int x,y,z=1;
  cout<<"enter x:";
  cin>>x;
  
  cout<<"enter y:";
  cin>>y;
  
  int i=1;
  while(i++<=y)
    	z*=x;
  
  cout<<"z="<<z;
  
  
  getch();
}






