// new    ,  delete

#include <iostream>
#include <conio.h>
using namespace std;


main()
{
  int  *p;
  p=new int(3);
  cout<<*p<<endl;
  *p=2;
  cout<<*p<<endl;
  delete p;


  int  *a;
  a=new int[2];
 // a[0]=5;
//  a[1]=4;
  cout<<a[0] +a[1];
  delete []a;
  
  getch();
}


