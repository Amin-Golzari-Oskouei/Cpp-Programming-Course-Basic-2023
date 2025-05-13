//  mode
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


void  mode(int [], int );

int main()
{
   const int size = 15;  

   int a[ size ] =  { 5,1,1,8,7,1,8,0,2,9,3,1,7,7,1} ;
    

      
   mode(a,size);

   getch();
} 

void  mode(int a[], int len )
{
	int f[10]={0};            
	for(int i=0;i<len;i++)
	   ++f[a[i]];
	// f[0]=1 ,f[1]=5,f[2]= 1, ... ,f[9]=1
	
	
	int max=f[0];
    int index=0;
    for(int j=1;j<=9;j++)
    {
       if (f[j]> max)
          {
             max=f[j];
             index=j;
          }
    }
    
    // max =5  , index =1
    
	cout<<"\n mode="<<a[f[index]];
    	
}

