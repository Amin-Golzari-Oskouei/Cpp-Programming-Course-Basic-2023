// Void Pointer

#include <iostream>
#include <conio.h>
using namespace std;


main()
{
 int     a=3;
 double  d=2.5;
 
 void  *p;
 
 p=&a;
 
 cout<<*(int *)p<<endl;   // 3

 p=&d;
 cout<<*(double *)p;      //2.5
 
  
  getch();
}


