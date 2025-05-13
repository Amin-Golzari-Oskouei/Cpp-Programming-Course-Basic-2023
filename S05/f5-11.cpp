//Array   +  function
#include <iostream>
#include <conio.h>
using namespace std;

void  read (int [] , int );
void  print(int [] , int );


int main()
{
   int a[5];
   
   read(a,5);
   
   print(a,5);   
   
   getch();
} 

void read(int a[] , int c)
{
  for(int i=0;i<c;i++)
      {
      	cout<<"a["<<i<<"]=";
      	cin>>a[i];
      }
}

void  print(int a[], int c)
{
  for(int j=0; j<c; j++)      
       cout<<a[j];
}


