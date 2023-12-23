#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int x=3;   // global

main()
{
   int x=6; 
   cout<<x<<endl;
   cout<<::x<<endl;
   x =x + x;
   cout<<x;
   
    
   getch();
}


