//Array

#include <iostream>
#include <conio.h>
using namespace std;



main()
{
  int a[10]={2,5,7,8,14,2,6,3,1,19};
  
  for(int i=0;i<=9;i++)
     if (a[i]%2 ==0)
          cout<<a[i]<<"  ";
  
  cout<<endl<<endl;
  
  for(int i=0;i<=9;i++)
     if (i%2 ==0)
          cout<<a[i]<<"  ";        
  getch();
}







