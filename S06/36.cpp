//   Reference

#include <iostream>
#include <conio.h>
using namespace std;


main()
{
  int  a=3;
 
  int  &r=a;
  
  a=5;
  cout << r <<endl;    
  
  int  b=8;
  r=b;
  cout << r << endl;    
  
  cout<< a << endl;     
  
  r++;
  cout << a << endl;
  cout << b << endl;
  cout << r ;
   
 
  
  getch();
}


