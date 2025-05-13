// pointer

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int  a=3;
  int  *pa;
  pa=&a;
  cout<<*pa<<endl;   //3   
  
  float  f=2.8;
  float  *pf;
  pf=&f;
  cout<<*pf<<endl;   //2.8
  
  char  c='F';
  char *pc;
  pc=&c;
  cout<<*pc<<endl;     //F
  
  double  d=17.015;
  double  *pd;
  pd=&d;
  cout<<*pd<<endl;    //17.015
  
  cout<<"\n\n...................\n\n";
  
  cout<<sizeof(pa)<<endl;   // 8   
  cout<<sizeof(pc)<<endl;   // 8
  cout<<sizeof(pf)<<endl;   // 8
  cout<<sizeof(pd)<<endl;   // 8    
  
  
  
  getch();
}







