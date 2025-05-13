//   Reference
#include <iostream>
#include <conio.h>
using namespace std;

void f(int &);

char s[20]="farshid shirafkan.";

char  &f(int );

main()
{
  f(7)  =',';
  cout<<s;

  getch();
}
char  &f(int i)
{
	return s[i];
}


