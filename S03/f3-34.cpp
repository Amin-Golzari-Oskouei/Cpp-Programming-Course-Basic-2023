#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   int i,j;
   int n;
   
   cout<<"enter n:";
   cin >>n;
   
   for(i=n ; i>=1 ; i--)  
   {
      for(j=i; j>=1; j--)
           cout<<j<<"  ";       
      cout<<endl;         
   }
  getch();
}

/*

3  2   1
2  1
1

*/
