// pointer

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int n=3;
  int *p;
  
  p=&n;
  
  cout<<n<<endl;     //3
  
  cout<<*p<<endl;    //3
  
  cout<<*&n<<endl;   //3
  
  cout<<p<<endl;   //0x 23fe44
  
  cout<<&n<<endl;  //0x 23fe44
  
  cout<<&*n<<endl; 
  
  
  
  getch();
}







