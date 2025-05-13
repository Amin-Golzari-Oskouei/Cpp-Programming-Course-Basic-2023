// PASSING ARGUMENTS THROUGH POINTERS 

#include <iostream>
#include <conio.h>
using namespace std;

void  swap(int *,int *);

main()
{
  int a=2;
  int b=3;
  
  swap(&a,&b);
  
  cout<<a<<endl;  //3
  cout<<b;        //2
  
  getch();
}

void  swap(int *pa,int *pb)
{
	int t;
	
	t=*pa;
	*pa=*pb;
	*pb=t;
}


