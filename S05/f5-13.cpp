//Array   +  function
#include <iostream>
#include <conio.h>
using namespace std;

int   findmax(int [] , int ); 
void  read(int [] , int &);


int main()
{
    int a[10];
    int i=0;
   
    read(a,i);
   
    cout<<"max="<<findmax(a,i);
     
   getch();
} 

void read(int a[] , int &i)
{
 do{
      cout<<"a["<<i<<"]:";
      cin>>a[i];
   } while(a[i++]!=0 && i<10);
   --i;
}

int findmax(int a[] , int c)
{
	int max=a[0];
	for(int j=1 ; j<c; j++)
	   if (a[j]> max)
	       max=a[j];
    return max;	       
}

