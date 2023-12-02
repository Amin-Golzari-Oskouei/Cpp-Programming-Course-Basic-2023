#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  
  int n,a,s=0;
  cin>>n;
  
  while(n>0)    //12
  {
  	a=n%10;      //2    1
  	s=s*10+a;    //2    21
  	n=n/10;      //1    0
  }
  cout<<s;
  
  getch();
}





