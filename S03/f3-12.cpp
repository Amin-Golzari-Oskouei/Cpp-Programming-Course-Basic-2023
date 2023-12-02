#include <iostream>
#include <conio.h>

using namespace std;
main()
{
  int n;
  int sum=0;
  int a;
  
  cout<<"enter n:";
  cin>>n;
  
  for(int i=1 ; i<=n ; i++)
      {
      	cout<<"number "<<i<<":  ";
		cin>>a;
		sum+=a;
      }
  
  cout<<"sum="<<sum;
  getch();
}





