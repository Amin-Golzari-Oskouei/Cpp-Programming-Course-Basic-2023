// pointer   new

#include <iostream>
#include <conio.h>
using namespace std;

int *f(int *);

main()
{
  int *p;
  int  k=0;
  int s=0;
  
  p = f(&k);
  
  for(int i=0;i<k;i++)
       s+=p[i];
       
  cout<<"\n\n sum="<< s;
  
  delete [] p;
  
  getch();
}

int *f(int *n)
{
	
	cout<<"\n\n enter n:";
	cin>>*n;
	
	int *a;
	
	a=new int [*n];

	for(int i=0;i<*n;i++)
	{
	  cout<<"\n enter number "<<i+1 <<":";
	  cin>>a[i];
    }

    return a;
}


/*


int   f(int **);

main()
{
  int  *p;
  int  k=0;
  int  s=0;
  
  k = f(&p);
  
  for(int i=0;i<k;i++)
       s+=p[i];
       
  cout<<"\n\n sum="<< s ;
  
  delete [] p;
  
  getch();
}

int f(int **a)
{
	int n;
	cout<<"\n\n enter n:";
	cin>>n;
	
	*a=new int [n];

	for(int i=0;i<n;i++)
	{
	  cout<<"\n enter number "<< i+1 <<":";
	  cin>>(*a)[i];
    }

    return n;
}

*/
