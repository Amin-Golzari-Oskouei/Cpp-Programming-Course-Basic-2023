#include <iostream>
#include <conio.h>

using namespace std;

//  (1/1) - (1/2) + (1/3) - (1/4) + ....
float f(int );

main()
{
 int n;
 cout<<"enter n:";
 cin>>n;
 
 cout<<f(n);
 
 getch();
}

float f(int n)
{
 float sum=0;
 float k=1;
 
 for(int i=1 ; i<=n ; i++)
 {
      sum+= k/i;
      k=-k;
 }
 return sum;
}
  
  
