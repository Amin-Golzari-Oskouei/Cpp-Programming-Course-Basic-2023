#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 int sum=0;
 int i;
 int n;
 
 for(i=0; ;i++)
  {
  	cin>>n;
  	if(n<=0) break;
  	sum=sum+n;
  }
 
  cout<<(float)sum/i;
 
  getch();
}





