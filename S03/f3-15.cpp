#include <iostream>
#include <conio.h>

using namespace std;
main()
{
  int i;
  for(i=1; i<=20; i++)
  {
    if (i%2==0)	
      continue;
    else      
      cout<<i<<endl;
  }
  
  getch();
}





