// Array2D
using namespace std;
#include <iostream>
#include <iomanip>  
#include <conio.h> 

void print(int [][4],int );

int main()
{
   int a[3][4]={ {1,2,3,4} ,{5,6,7,8} , {9,10,11,12} };
   
   int n;
   cout<<"enter (0,1,2):";
   cin >> n;
   print(a,n);
   
   
   
   getch();
}
 
void print(int a[][4],int n)
{
  for(int j=0;j<4;j++)
       cout<<a[n][j]<<"  ";
}
