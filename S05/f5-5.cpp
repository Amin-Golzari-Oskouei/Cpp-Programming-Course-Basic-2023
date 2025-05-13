//Array

#include <iostream>
#include <conio.h>
using namespace std;



main()
{
  int a[7];
  int c=0;
  
  for(int i=0;i<=6;i++)
      cin>>a[i];

  cout<<endl<<"output:"<<endl;
  for(int j=0;j<=6;j++)       
     if(a[j]<0)
        {
        	cout<<a[j]<<"   ";
        	c++;
        }
        
   cout<<endl<<"c="<<c;
  
  
  
      
  getch();
}







