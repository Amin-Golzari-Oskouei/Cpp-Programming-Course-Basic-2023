// Binary search of an array.

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
/*
  key=39  :1 
  12  15   18  39   67  89   90
  
  key=15 :2
  low           mid           high
  12  15   18   39   67  89   90
  
  12  15   18
  
  key=18 : 3
  12  15   18  39   67  89   90 
  12  15   18
  18
   */  

int  bsearch(int [], int ,int ,int  , int );

int main()
{
   const int size=10;	
   int a[size] ={12, 15,18,39,67,89,90,100,200,300};
   
   cout<<" array:  ";
   for(int i=0;i<size; i++)
      cout<<a[i]<<"  ";
   
   int key;      
   cout<<"\n\n enter key: ";
   cin >>key;
   
   int  p;
   p=bsearch(a,size,key,0,size-1);
   if(p==-1)
     cout<<"not found :" << endl;
   else
     cout<<" found in element:" << p << endl;
   
  getch();
} 

int  bsearch(int a[], int len,int k,int low , int high)
{
  int mid;
  while(low<=high)	
  {
  	mid=(low+high)/2;
  	if(a[mid]==k)
  	  return mid;
    else if (k<a[mid])
           high=mid-1;
          else
             low=mid+1;
  }
  return -1;
}



