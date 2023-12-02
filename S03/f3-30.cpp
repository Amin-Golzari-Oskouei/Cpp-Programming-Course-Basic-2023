#include <iostream>
#include <conio.h>
using namespace std;

// do while

main()
{
  int n=0;
  int i=1;
  int fact=1;
  
  cout<<"n" <<'\t' <<"factorial"<<endl;
  cout<<"------------------"<<endl;
  
  do{
  	n++;
  	fact*=n;
  	cout<<n<<'\t' << fact<<endl;
  	++i;
  } while(i<=5);
  
  getch();
}






