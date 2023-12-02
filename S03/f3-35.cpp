#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   int i,j;
   int n;
   
   cout<<"enter n:";
   cin >>n;
   
   for(i=n ; i>=1 ; i-=2)  

      for(j=1; j<=i; j+=2)
           cout<<j<<"  ";       
      cout<<endl;         

  getch();
}

/*
n=5:
1  3  5
1  3
1


*/
