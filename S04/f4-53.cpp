// namesapce

#include <iostream>
#include <conio.h>
#include <string>       
using namespace std;

int x = 1;

namespace a { int x = 2; }

int main()
{
  int x = 3;
  ++x;
  cout << ++ ::x <<endl;                  // 2          
  
  cout << x + a::x + ::x  <<endl;        //  4+ 2+2=8        
    
  
  getch();
}
