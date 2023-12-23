// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;

int f(int ,int );
int main()
{
   
  cout<<f(12,8)    ;   //12 : 1,2,4,6,12      8: 1,2,4,8
  getch() ;
} 

int f(int a,int b)
{
	if(b==0)
	  return a;
	return f(b , a%b);
}

//f(12,8)    f(8,4)   f(4,0)=4 
