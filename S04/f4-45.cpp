// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;
/*
fibo(n)=fibo(n-1)+fibo(n-2)
fibo(0)=0
fibo(1)=1
0,1,1,2,3,5,8,13,21,34,...
*/

int fibo(int );

int main()
{
  int n;
  cout<<"enter n:";
  cin >>n;
  cout<<fibo(n);
  
  getch() ;
} 
int fibo(int n)
{
	if (n==0)
	  return 0;
    if(n==1)
      return 1;
    return fibo(n-1)+ fibo(n-2);
}



