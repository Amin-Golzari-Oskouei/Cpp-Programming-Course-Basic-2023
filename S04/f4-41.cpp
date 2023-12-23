//template
#include <iostream>
#include <conio.h>
using namespace std;

template < class  U , class T>
T f (U x)
{
   T  k;
   k=x-1;
   return k;	
}
//A=65    a=97
int main()
{
  char ch='B';
  cout<< f<char ,int> (ch) <<endl;             //  65     
  cout<< f<char ,char>(ch) <<endl;             //  A
 
  double  d=98.7;
  cout<< f<char,double> (d)   <<endl;          // 97
  cout<< f<double,char> (d)   <<endl;          //  a
  cout<< f<double,double> (d) <<endl;          //  97.7

 
  getch() ;
} 



