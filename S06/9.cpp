// pointer to pointer  

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a=3;
  
  int *p,**q,***t;
  
  p=&a;
  q=&p;
  t=&q;
  
  //  t -> q -> p -> a
  
  cout<<*p<<endl;    // 3   
  cout<<**q<<endl;   // 3
  cout<<***t<<endl;  // 3 
  
  cout<<"\n\n....................\n\n";
  
  cout <<p<<endl;    //  23fe44
  cout <<q<<endl;    //  23fe38
  cout <<t<<endl;    //  23fe30
  
  cout<<"\n\n....................\n\n";
 
  cout <<*q<<endl;    // 23fe44
  cout <<**t<<endl;   // 23fe44
  
  cout <<*t<<endl;   // ?
  
  getch();
}







