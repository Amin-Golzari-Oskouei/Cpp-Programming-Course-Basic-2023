// pointer to pointer   

#include <iostream>
#include <conio.h>
using namespace std;

//   q  ->  p -> a=7

main()
{
  int a=7;
  int *p;
  p=&a;
  
  int **q;
  q=&p;
  
  cout<<*p<<endl;    //7
  
  cout<<**q<<endl;   //7
  
  cout <<p<<endl;
  
  cout <<*q<<endl;
  
  
  getch();
}







