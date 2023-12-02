#include <iostream>
#include <conio.h>

using namespace std;
main()
{
  //1+2+3+4+5=?
  int sum=0;
  int i;
  int n;
  
  cout<<"enter n:";
  cin>>n;
  
  for(i=1;i<=n;i++)
     sum+=i;

  cout<<sum;     
      
  getch();
}





