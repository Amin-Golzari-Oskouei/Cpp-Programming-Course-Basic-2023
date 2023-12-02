#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 char  ch;
 cin>>ch;
/*
 if(ch=='r')
   cout<<"red";
   else if (ch=='g')
            cout<<"green";
          else if(ch=='b')
                 cout<<"blue";
                 else 
                      cout<<"error";
  */
  switch(ch)
  {
  	 case 'r': cout<<"red"; break;
     case 'g': cout<<"green";break;
	 case 'b': cout<<"blue";break;
	 default : cout<<"error"; 		
  }                    
                      
                 
	   
  getch();
}


