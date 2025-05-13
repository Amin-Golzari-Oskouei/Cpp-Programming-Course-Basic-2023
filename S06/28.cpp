// new    ,  delete

#include <iostream>
#include <conio.h>
using namespace std;


main()
{
  int n;
  cout<<"enter n:";
  cin>>n;
  int *a;
  a=new int[n];
  
  
  cout<<"\nenter number:\n";
  
  for(int i=0; i<n;i++)
    cin>>a[i];
  
  int s=0;
  for(int j=0; j<n;j++)
      s+=a[j];
      
  cout<<"sum="<<s;
  
  delete [] a;
  
  getch();
}


