#include <iostream>
#include <conio.h>

using namespace std;
main()
{
  // 10+12+14+...+98=?
  int sum=0;
  int i;
  
  for(i=10;i<=98;i++)
     if(i%2==0)
        sum+=i;

  cout<<sum;      
      
  getch();
}





