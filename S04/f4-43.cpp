// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;
/*
3!=3*2!=3*2=6
2!=2*1!=2*1=2
1!=1
n!=n*(n-1)!
*/
int fact(int );
int main()
{
  int a=4;
  cout<<fact(a);
   
  getch() ;
} 
int fact(int n)
{
	if(n==0 || n==1)
	   return 1;
    return n*fact(n-1);	   
}


