#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   int i,j;
   int n;
   cin>>n;
   
   for(i=1 ; i<=n ; i++)
   {
   	 for(j=1; j<=n ; j++)
   	       cout<<i*j<<'\t';
     cout<<endl;   	       
   }
   
   
  getch();
}


