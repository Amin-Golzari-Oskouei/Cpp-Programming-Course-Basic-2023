// Linear search of an array.
#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int  search(int [],int , int ); 

int main()
{
   const int size=10;	 
   int a[size]={19,8,25,4,7,1,-4,13,2,7};
   int key;
   
   cout<<"array:";
   for(int i=0; i<size ;i++)
       cout<<a[i]<<"  ";
       
   cout<<endl<<"enter key:";
   cin>>key;
   
   int k;
   k=search(a,size,key);
   if(k==-1) 
     cout<<"not found"<<endl;
   else
     cout<<"found in element: " <<k<<endl;
      
   getch();
} 

int  search(int a[], int len , int key)
{
	for(int i=0 ; i<len ; i++)
	  if (a[i]== key)
	      return i;
   
    return -1;	      
}

