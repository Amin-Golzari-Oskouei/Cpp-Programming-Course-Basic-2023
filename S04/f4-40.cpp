//template
#include <iostream>
#include <conio.h>
using namespace std;

template < class  T , class U>
void f (T  a,U  b)
{
   if(a==b)
     cout<<"equal";
     else if(a>b)
             cout<<"first is larger";
             else
                cout<<"second is larger";
}


int main()
{
  int x=2,y=3;
  f(x,y);
  
  cout<<endl;
  
  char ch1='B',ch2='A';
  f(ch1,ch2);
  
  cout<<endl;
  f(x,ch1);
  
  cout<<endl;
  f(ch1,y);
  
  getch() ;
} 



