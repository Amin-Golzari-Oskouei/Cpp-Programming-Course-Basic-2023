#include <iostream>
#include <conio.h>
using namespace std;

int f(int n,int &,int &);

main()
{
  int n,r=0,c=0,sum=0;	
  cin>>n;
  
  sum=f(n,r,c);
  
  cout<<"n="<<n<<endl;
  cout<<"reverse="<<r<<endl;
  cout<<"c="<<c<<endl;
  cout<<"sum="<<sum;
   
   getch();
}

int  f(int n,int &r,int &c)
{
	int d;
	int s=0;
	
	while(1)
	{
		d=n%10;
		n=n/10;
		s+=d;
		r=r*10+d;
		c++;
		if(n==0) break;
	}
	return s;
}

