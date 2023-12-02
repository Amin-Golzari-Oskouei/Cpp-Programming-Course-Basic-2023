#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a,b,c;
  cin>>a>>b>>c;
  
 // int min;
 /* min=a;
   if(b<min)
     min=b;
  if (c<min)     
     min=c;
   */
   
  /* int k;
   k=(a<b)   ? a : b;
   min= (c<k) ? c : k;
  cout<<"min=" <<min;
  */
  if(a<=b && a<=c)
      cout<<a;
  if(b<=a && b<=c)      
     cout<<b;
  if(c<=a && c<=b)     
     cout<<c;
  
  
  getch();
}



