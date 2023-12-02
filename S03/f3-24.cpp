#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  //f0=0 , f1=1 , f2=1, 2 , 3 , 5 , 8 , 13,21,....
  // 0   , f0=1 , f1=1, f2=2 , 3 , 5 , 8 , 13,21,....

  int bound;
  cout<<"bound:";
  cin>>bound;
  
  int f0=0;
  int f1=1;
  int f2;
  cout<<f0<<"  " <<f1<<"  ";
  while(true)
  {
  	f2=f0+f1;
  	if(f2>bound) break;
  	cout<<f2<<"   ";
  	f0=f1;
  	f1=f2;
  }
  
  
  getch();
}





