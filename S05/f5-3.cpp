//Array

#include <iostream>
#include <conio.h>
using namespace std;



main()
{
  int a[3];
  for(int i=0;i<=2;i++)
  {
  	 cout<<"a["<<i<<"]:";
  	 cin>>a[i];
  }

  cout<<endl<<"reverse :";
  for(int j=2;j>=0;j--)   
       cout<<a[j]<<"  ";
  getch();
}







