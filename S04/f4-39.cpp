//template
#include <iostream>
#include <conio.h>
using namespace std;

template < class  T , class U >
T f (U x)
{
   T  k;
   k=x+1;
   return k;	
}
//A=65    a=97
int main()
{
  int     a=1;
  char    ch='A';
  double  d=97.3;
     
  cout<< f<int ,int>  (a)  <<endl;          // 2   
  cout<< f<int ,char> (ch) <<endl;          // 66
  cout<< f<char,char> (ch) <<endl;          //  B 
  cout<< f<char,double> (d) <<endl;         //  b
  cout<< f<double,double> (d) <<endl;       // 98.3
  
 
  getch() ;
} 



