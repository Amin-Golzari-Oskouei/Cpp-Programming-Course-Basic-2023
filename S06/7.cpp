// pointer

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a=2;
  
  int *pa=&a;
  
  *pa=7;                     
  cout<<*pa<<endl;    
  cout<<a<<endl; 
  
   
  
  int b=3;
  const int *pb=&b;
  //*pb=8;              //error
  pb=&a;
  cout<<*pb<<endl;
  
  
  
  int c=4;
  int * const pc=&c;
  *pc=9;
 // pc=&b;              //error
  cout<<*pc<<endl;
  
    
  int d=4;
  const int * const pd=&d;
  //*pd=9;                  //error
  // pd=&a;                 //error 
  cout<<*pd<<endl;
  
  
  getch();
}







