#include <iostream>
#include <conio.h>
using namespace std;

// do while
//input: 123       output: sum=3+2+1=6
main()
{
  int n,sum=0;
  int d;
  
  cin >>n;      
  
  do{
    d=n %10;     
	sum+=d;   
	n=n/10;	      
  }while(n !=0);

   cout<<"sum="<<sum;
  getch();
}






