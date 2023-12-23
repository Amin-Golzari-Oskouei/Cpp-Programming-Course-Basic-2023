#include <iostream>
#include <conio.h>

using namespace std;

int  max(int ,int ,int );

main()
{
  int x,y,z;
  cout<<"enter x:";
  cin>>x;
  
  cout<<"enter y:";
  cin>>y;
  
  cout<<"enter z:";
  cin>>z;
  
  cout<<"max="<<max(x,y,z);
     
  getch();
}
int  max(int a,int b,int c)
{
	int m;
	/*m=a;
	if(b>m)
	   m=b;
    if(c>m)	   
     m=c;
     */
      m=(a>b)  ? a :  b;
      m=(c>m)  ? c :  m;
      
   return m;     
}




