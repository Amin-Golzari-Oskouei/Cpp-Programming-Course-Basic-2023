// pointer

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 int x=5;
 int *p=&x;
 
 cout<<p<<endl;  //  23fe44
 
 p=p-1;
 
 cout<<p<<endl;  //  23fe48 
  
 
  
  getch();
}







