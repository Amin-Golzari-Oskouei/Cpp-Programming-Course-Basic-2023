//Array

#include <iostream>
#include <conio.h>
using namespace std;



main()
{
   int  a[15] ={1,3,8,5,1,9,8,1,4,0,1,3,8,9,6};
   int  f[10]={0};
   
   for(int i=0;i<=14 ; i++)
         ++f[a[i]];
    
   cout<<"j"<<'\t'<<"frequence"<<endl;
   cout<<"------------------------"<<endl;
    
   for(int j=0;j<=9;j++)          
     cout<<j<<'\t'<<f[j]<<endl;
      
   
  
  
      
  getch();
}







