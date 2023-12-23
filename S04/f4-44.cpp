// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;
/*
1+2+3+...+n=n(n+1)/2
1+2+3+4=?
sum(4)=4+sum(3)=4+6=10
sum(3)=3+sum(2)=3+3=6
sum(2)=2+sum(1)=2+1=3

*/

int sum(int );
int main()
{
  int a=100;
  cout<<sum(a);
   
  getch() ;
} 

int sum(int n)
{
	if(n==0 || n==1)
	   return n;
    return n+sum(n-1);	   
}


