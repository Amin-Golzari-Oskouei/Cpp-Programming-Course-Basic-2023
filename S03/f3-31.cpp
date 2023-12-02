#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int i,j;
  
  for(i=1 ; i<=3 ;i++)          //3
    for(j=5; j<=6; j++)         //2
         cout<<i<<" " <<j<<endl;         //6
  
  getch();
}
/*
i=1  :    j=5 , j=6
i=2  :    j=5 , j=6
i=3  :    j=5 , j=6
*/



