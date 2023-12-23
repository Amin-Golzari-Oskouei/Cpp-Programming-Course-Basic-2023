#include <iostream>
#include <conio.h>

using namespace std;

//  f(x,y,z)=2x+3(y+z)
int   f(int ,int ,int );
main()
{
  int x,y,z;
  cout<<"enter x,y,z:";
  cin>>x>>y>>z;
  
  cout<<f(x,y,z);
  
  
     
  getch();
}
int   f(int x,int y,int z)
{
	int k;
	k=2*x+3*(y+z);
	return k;
}





