#include <iostream>
#include <conio.h>

using namespace std;

 //   f(a,b)= (a^b) /  ((a+3b)^2)
 
double  f(int ,int );

main()
{
  int a,b;
  cout<<"enter a,b:";
  cin>>a>>b;
  
  cout<<f(a,b);
  
 getch();
}

int pow(int x , int y)
{
	int p=1;
	for (int i=1 ; i<=y; i++)
	          p=p*x;
    return p;	     
}

double  f(int a,int b)
{
	double k= (double) pow(a,b) / pow(a+3*b,2);
	return k;
}


