#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int grade;
  cin>>grade;
  
  if(grade>=17 && grade<=20)
         cout<<'A';
  else if (grade>=15  && grade<17)  
          cout<<'B';
          else  if (grade>=10 && grade<15)
                cout<<'C';
                else
                   cout<<'D';
	   
  getch();
}



