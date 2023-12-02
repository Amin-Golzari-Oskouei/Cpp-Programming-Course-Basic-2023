#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int n;
  cout<<"enter n>3 :";
  cin >>n;
  
  if(n%2==0)
     cout<<"no";
  else{
  	    for(int i=3;i<=n/2 ; i++)
  	       if(n%i==0)
  	        {
  	        	 cout<<"no";
  	        	 exit(0);
  	        }
  	    cout<<"yes";
  }     
  
  getch();
}





