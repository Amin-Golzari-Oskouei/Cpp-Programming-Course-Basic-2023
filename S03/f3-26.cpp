#include <iostream>
#include <conio.h>
using namespace std;
// abcdabbefg.    na=2    nb=3    nc=1    n=4

main()
{
  char ch;
  int  na=0;
  int  nb=0;
  int  nc=0;
  int  n=0;
  
  while( (ch=cin.get()) !='.')
  {
  	switch(ch)
  	{
  		case  'a'  :  case 'A':  ++na;  break;
  		case  'b'  :   ++nb;  break;
  		case  'c'  :   ++nc;  break;
  		default    :   ++n;
  	}
  }
   cout<<"na="  <<na<<endl;
   cout<<"nb="  <<nb<<endl;
   cout<<"nc="  <<nc<<endl;
   cout<<"n="   <<n<<endl;
  
  getch();
}






