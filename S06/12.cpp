// pointeres  and  arrays

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a[]={4,2,3,10,1,6,3};
  int *p,*q;
  
  p=a;
  q=a+6;
  
 
 do{
      cout<<*p+*q<<endl;  // 7   8    4
      p++;
      q--;
  } while(p!=q);
    
  getch();
}







