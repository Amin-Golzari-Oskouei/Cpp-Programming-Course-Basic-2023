//Array   +  function
#include <iostream>
#include <conio.h>
using namespace std;

void  rev(int [] , int  ,int );

int main()
{
  int a[3]={1,2,3};
  rev(a,0,3);
   
   getch();
} 
// rev(a,0,3)   rev(a,1,3)   rev(a,2,3)  rev(a,3,3)=exit
void  rev(int a[] , int k ,int len)
{
	if(k<len)
	{
		cout<<a[k]<<"  ";   // a[0]  a[1]  a[2]
		rev(a,k+1,len);
    }
		
}


