#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int sum=0;
  int i;
  for(i=1;   ;i++)
  {
  	sum+=i;
  	if(sum>20) break;
  	cout<<"i="<<i<<'\t'<<"sum="<<sum<<endl;
  }
  cout<<'*'<<sum;
  
  getch();
}





