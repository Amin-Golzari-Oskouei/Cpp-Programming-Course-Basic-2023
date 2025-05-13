//  Pointeres  to  Functions

#include <iostream>
#include <conio.h>
using namespace std;

int sum (int , int );
int prod(int , int );

main()
{
  int  (*p)(int,int);
  
  p=sum;
  cout<<p(6,2)<<endl;   // 8
  
  p=prod;
  cout<<p(6,2)<<endl;   //12     
       
  
  getch();
}

int sum(int a,int  b)
{
	return a+b;
}

int prod(int a,int  b)
{
	return a*b;
}





