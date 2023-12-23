#include <iostream>
#include <conio.h>

using namespace std;

int f(int  );

main()
{
  int i;
  for(i=0; i<=3; i++)
      cout<<i<<'\t' <<f(i)<<endl;
  getch();
}

int f(int  a)
{
	int s;
	s=a*a;
	return s;
}







