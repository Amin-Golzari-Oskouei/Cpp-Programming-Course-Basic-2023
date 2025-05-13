//   Reference

#include <iostream>
#include <conio.h>
using namespace std;


main()
{
  int  a=3;
 
  int  &r=a;
  
  int *p=&a;
  
  cout<<r;
  cout<<*p;
  
  getch();
}


