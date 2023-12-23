#include <iostream>
#include <conio.h>

using namespace std;

//   (2*4*6*8*...) / (1*3*5*7*...)
float f(int );
main()
{
 int n;
 cout<<"enter :" ;
 cin>>n;
 cout<<f(n);
  
 getch();
}

float f(int n)
{
	float sum=1;
	for (int i=2;i<=n;i+=2)
	    sum *= (1.0*i) / (i-1);
    return sum;	    
}
  
