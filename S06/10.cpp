// pointeres  and  arrays

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a[]={5,7,2};
  int *p;
  
  p=a;         // p=&a[0];
  
  *(p+1)=8;   //a[1]=8;
  
  for(int i=0; i<=2; i++)
      cout<<*(p+i)<<endl;
  
  
  
  
  
  
  
   
  getch();
}







