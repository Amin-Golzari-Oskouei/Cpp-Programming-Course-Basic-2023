// pointer

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int x=3;
  int *px=&x;
  
  int y=5;
  int *py=&y;
  
  cout<<py-px;   //OK
 
 /* 
  cout<<py+px;  //Error
  cout<<py*px;  //Error
  cout<<py/px;  //Error
  cout<<py%px;  //Error
 */
 
 if(px==py)
   cout<<"equal";
 else
   cout<<" not equal";
   
  
  getch();
}







