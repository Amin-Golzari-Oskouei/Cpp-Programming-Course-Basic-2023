#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int x,y,temp;
  cin>>x>>y;
  if(x>y)
    {
    	temp=x;
    	x=y;
    	y=temp;
    }
    cout<<x<<'\t'<<y;
  
  
  getch();
}



