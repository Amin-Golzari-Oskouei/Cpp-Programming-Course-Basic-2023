//  Pointeres  to  Function  As parameters of Another function

#include <iostream>
#include <conio.h>
using namespace std;

int  squere(int );
int  cube  (int );

int  sum (int (*) (int ) , int );


main()
{
  cout<<sum(squere,3);  // 1+4+9=14
  
  cout<<endl;
  
  cout<<sum(cube,2);   //1+8=9
   
  getch();
}


int squere(int n)
{
	return n*n;
}


int cube(int n)
{
	return n*n*n;
}


int  sum(int (*p) (int ) , int n)
{
	int s=0;
	for(int i=1; i<=n ; i++)
	  s+=(*p) (i);
	return s;
}





