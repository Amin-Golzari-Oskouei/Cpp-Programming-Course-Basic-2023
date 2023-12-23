#include <iostream>
#include <conio.h>

using namespace std;
int gcd(int ,int );

main()
{
  int x,y;
  cout<<"enter x,y:";
  cin>>x>>y;
  
  cout<<gcd(x,y);
  
 getch();
}

int gcd(int x,int y)
{
	int r;
	r=x%y;
	while(r!=0)
	{
		x=y;
		y=r;
		r=x%y;
	}
   return y;	
}

