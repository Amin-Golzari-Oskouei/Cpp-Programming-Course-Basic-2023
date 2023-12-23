#include <iostream>
#include <conio.h>

using namespace std;


int vorod();
int inc(int );

main()
{
  int x;
 
  //	x=vorod();
  	cout<<inc(vorod())<<endl;

  getch();
}
int vorod()
{
	int a;
	do{
		cout<<endl<<"enter :";
		cin>>a;
	} while(a<0);
	return a;
}

int inc(int k)
{
	return k+1;
}

