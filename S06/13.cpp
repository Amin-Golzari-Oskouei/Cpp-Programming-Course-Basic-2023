// array of pointeres  to  arrays

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a[2]={1,2};
  int b[3]={3,4,5};
  
  int *p[]={a,b};
  
  cout<< *(p[0])     <<endl;   //1
  cout<< *(p[0]+1)   <<endl;   //2

  cout<< *(p[1])     <<endl;   //3
  cout<< *(p[1]+1)   <<endl;   //4
  cout<< *(p[1]+2)   <<endl;   //5
  
  cout<<"\n\n-----------------------\n\n";
  
  cout<< *(*p)        <<endl;    //1
  cout<< *(*p+1)      <<endl;    //2
  
  cout<< *(*(p+1) )   <<endl;    // 3
  cout<< *(*(p+1)+1)  <<endl;    // 4
  cout<< *(*(p+1)+2)  <<endl;    // 5
  
  getch();
}







