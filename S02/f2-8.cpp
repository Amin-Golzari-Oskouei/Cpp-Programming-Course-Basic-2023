#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a,b;
  cin>>a>>b;
    
  if(b!=0)
    if(a%b==0)
       cout<<"yes";
    else
	   cout<<"no";
  else
     cout<<"no";
	   
  getch();
}



