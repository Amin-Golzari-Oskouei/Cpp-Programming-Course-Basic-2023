//   Reference
#include <iostream>
#include <conio.h>
using namespace std;
int   &min(int  &,int &);

main()
{
   int  x=3;
   int  y=5;
   
   min(x,y)=8;
   
   cout<<x<<endl;    // 
   
   cout<<y<<endl;    //
   
   cout<<min(x,y);   //
 
 
  getch();
}

int   &min(int  &a  ,int &b)
{
	return (a<b)  ? a  : b;
}

