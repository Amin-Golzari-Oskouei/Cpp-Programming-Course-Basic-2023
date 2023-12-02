#include <iostream>
#include <conio.h>

using namespace std;
main()
{
  // 3!=1*2*3=6
  
  int n;
  cout<<"enter n:";
  cin>>n;
  
  int f=1;
  for(int i=1 ; i<=n ; i++)
          f=f*i;

  cout<<"factorial:"<<f;      
  
  getch();
}





