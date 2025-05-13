//Array   +  function
#include <iostream>
#include <conio.h>
using namespace std;

int sum(int [], int );

int main()
{
    int a[3]={6,3,5};
    cout<<sum(a,3);
    
   getch();
} 
//sum(a,3)=a[2]+sum(a,2)=5+sum(a,2)=5+3+6
//sum(a,2)=a[1]+sum(a,1)=3+sum(a,1)=3+6
//sum(a,1)=a[0]=6

int sum(int a[], int c)
{
	if(c==1)
	  return a[0];
	return a[c-1] + sum(a,c-1);   
}

