//   Reference
#include <iostream>
#include <conio.h>
using namespace std;

int &f(int i);
int a[3]={1,2,3};

main()
{
  f(1) = 5;         //a[1]=5
  
  cout<<a[0]<<endl;   //1
  cout<<a[1]<<endl;   //5
  cout<<a[2]<<endl;   //3
  
  getch();
}

int &f(int i)
{
	return a[i];
}


