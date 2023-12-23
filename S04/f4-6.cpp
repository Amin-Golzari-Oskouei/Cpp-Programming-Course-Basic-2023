#include <iostream>
#include <conio.h>

using namespace std;

unsigned long fact(unsigned int );

main()
{
  int n;
  cout<<"enter :";
  cin>>n;
  
  unsigned long y;
  y=fact(n);
  cout<<"fact="<<y;
   
  getch();
}
unsigned long fact(unsigned int n)
{
 unsigned long f=1;
 for(int i=1 ; i<=n ; i++)	
     f=f*i;
  return f;     
}







