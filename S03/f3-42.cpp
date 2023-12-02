#include <iostream>
#include <conio.h>
using namespace std;
// i=8   8888
// i=5   ***
// i=2   2

main()
{
 int i,j,k;
 
 for(i=8;i>=2;i-=3)
 {
  for(j=1;j<=i;j+=2)
  {
   if(i % 2 ==0) 
      cout<<i;
   else
      cout<<'*';        
  } 
  cout<<endl;  
 }
   
  getch();
}
   

