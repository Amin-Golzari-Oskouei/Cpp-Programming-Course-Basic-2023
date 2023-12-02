#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a,b;
  char  ch;
  
  cout<<"enter a,b:";
  cin>>a>>b;
  
  cout<<"enter ch:";
  cin>>ch;
  
  switch(ch)
  {
  	case '+' : cout<<a+b; break;
  	case '-' : cout<<a-b; break;
  	case '*':  cout<<a*b; break;
  }
   	   
  getch();
}


