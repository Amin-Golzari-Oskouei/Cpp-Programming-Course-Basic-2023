//Array   +  function
#include <iostream>
#include <conio.h>
using namespace std;


void print(int [] , int );
void rev(int [],int );

int main()
{
    const int size=8;
	int a[size]={1,2,3,4,5,6,7,8};
	
    rev(a,size);
    print(a,size);
  
   getch();
} 

void rev(int a[],int c)
{
  int temp;
 
  for(int i=0; i<c/2 ; i++)   // i=0: {5,2,3,4,1}     i=1 : {5,4,3,2,1}
    {
    	temp=a[i];
    	a[i]=a[c-1-i];
    	a[c-1-i]=temp;
    }
}
    
void print(int a[] , int c)
{
 for(int i=0 ; i<c; i++)
       cout<<a[i]<<" ";
}

