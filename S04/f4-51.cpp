// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;


void f(int ,int );

int main()
{
   f(13,2);
   cout<<endl;     
   f(13,3);     
   cout<<endl;     
   f(13,10);     
      
  getch() ;
} 

void f(int n,int b)
{
	if(n>0)
	{
		f(n/b,b);
		cout<<n%b;  
	}
}

