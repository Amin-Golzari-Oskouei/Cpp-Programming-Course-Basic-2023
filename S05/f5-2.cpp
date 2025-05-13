//sum : Array

#include <iostream>
#include <conio.h>
using namespace std;



main()
{
  int a[3];
  int sum=0;
  
  for(int j=0;j<=2;j++)
      {
      	cout<<"a["<<j<<"]=";
      	cin>>a[j];
      }
  
  for (int i=0;i<=2;i++)
      sum+=a[i];
  
  cout<<"sum="<<sum;
   
  getch();
}







