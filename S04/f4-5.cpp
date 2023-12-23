#include <iostream>
#include <conio.h>

using namespace std;

int  f(int  );

main()
{
   int n;
   char ch;
   
   while(1)
   {
   cout<<"enter n:"<<endl;
   cin>>n;
   
   if(f(n))
      cout<<"yes"<<endl;
    else
	  cout<<"no"<<endl;
   cout<<"continue?(y/n):" <<endl;
   cin>>ch;
   if(ch=='n')
      break;
   }
  getch();
}

int  f(int  x)
{
	int flag=1;
	if(x%2==0)
	   flag=0;
    return flag;	   
}







