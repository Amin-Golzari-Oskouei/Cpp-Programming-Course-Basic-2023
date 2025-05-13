//Array

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;



main()
{
  int a[5] ;
  
  for(int i=0;i<=4;i++)
     {
     	cout<<"a["<<i<<"]=";
     	cin >>a[i];
     }
  
  int max=a[0];
  int index=0;
  
  for(int j=1 ; j<=4; j++)
  {
  	if (a[j]> max)
  	{
  		max=a[j];
  		index=j;
  	}
  }
  
  cout<<"max="<<max<<endl;
  cout<<"index="<<index;
  
      
  getch();
}







