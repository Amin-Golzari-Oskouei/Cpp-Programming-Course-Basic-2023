 #include <iostream>
#include <conio.h>
using namespace std;
main()
{
  int x=2,y;
  
  y=(x=10,x+4,9);
  
  
  cout<<x;
  cout<<endl;
  cout<<y;
  
  getch();
}
