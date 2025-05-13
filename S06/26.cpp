// new    ,  delete

#include <iostream>
#include <conio.h>
using namespace std;


main()
{
  int *a;
  int *b;
  int s;
  
  a=new int;
  if(!a) exit(1);
  
  b=new int;
  if(!b) exit(1);
  
  cin>>*a;
  cin>>*b;
  
  s=*a+*b;
  
  cout<<s;
  
  delete a;
  delete b;
  
  getch();
}


