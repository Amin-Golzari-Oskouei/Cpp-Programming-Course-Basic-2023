#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   int i,j;
   int n;
   cout<<"enter n:"<<endl;
   cin >>n;
   
   for(i=1 ; i<=n ; i++)  
   {
      for(j=1; j<=i; j++)
           cout<<j<<"  ";
      cout<<endl;         
   }
  getch();
}

/*
1
1   2
1   2    3
*/
