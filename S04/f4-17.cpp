#include <iostream>
#include <conio.h>

using namespace std;

int pow(int  , int );

// (a^b)^c    (2^3)^2=8^2=64

main()
{
  int a,b,c;
  cout<<"enter a,b,c:";
  cin>>a>>b>>c;
  
  cout<<pow(pow(a,b),c);
  
 getch();
}

int pow(int x , int y)
{
	int p=1;
	for (int i=1 ; i<=y; i++)
	          p=p*x;
    return p;	     
}
