#include <iostream>
#include <conio.h>

using namespace std;
main()
{
  int a,b;
  
  cout<<"enter a,b:";
  cin>>a>>b;
  
  for(int i=a;i<=b;i++)
    if (i%2==0)
      cout<<i<<endl;
    else
	  cout<<'*'<<endl;
      
  getch();
}





