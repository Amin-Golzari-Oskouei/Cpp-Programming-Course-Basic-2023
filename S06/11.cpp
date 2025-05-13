// pointeres  and  arrays

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a[]={1,2,3,4,5};
  int *p;
  
  p=a+4;
  
  for(int i=1;i<=5;i++)
  {
      cout<<*p<<endl;
      p--;
  }
    
  getch();
}







