// PASSING ARGUMENTS THROUGH POINTERS  : sort

#include <iostream>
#include <conio.h>
using namespace std;

void  swap(int *  , int *);
void  sort(int [] , int  );

main()
{
  const int size=8;
  int a[size]={2,4,6,3,1,5,8,7};
 
  sort(a,size);
         
  for(int i=0 ; i<size ; i++)          
      cout<<a[i] << "  ";   // 1  2  3  4  5  6
  
  getch();
}

void sort(int a[] , int n)
{
  int i,j;
  int *p;
  p=a;
  
  for(i=0 ; i<n ; i++)
    for(j=0 ; j<n-1 ; j++)
      if(*(p+j) > *(p+j+1) )
         swap((p+j),(p+j+1));
}

void  swap(int *pa,int *pb)
{
	int t;
	
	t=*pa;
	*pa=*pb;
	*pb=t;
}


