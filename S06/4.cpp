// pointer

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int x=1;
  int y=2;
  
  int *px;
  int *py;
  
  px=&x;
  py=&y;
  
  cout<<px<<endl;    // 23fe3c
  cout<<py<<endl;    // 23fe38
  
  py=px;
  
  cout<<px<<endl;    //  23fe3c
  cout<<py<<endl;    //  23fe3c
  
  cout<<*px<<endl;   //1
  cout<<*py<<endl;   //1
  
  getch();
}







