// reference 
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

int  &min( int& , int& ); 

int main()
{
	int  x1 = 6;
	int  x2 = 4;
	
	++min(x1,x2);       // ++x2  
	cout << x1 <<  endl;   // 6	
	cout << x2 <<  endl;   // 5
	
	
	++min(x1,x2);      // ++x2
	cout << x1 <<  endl;  // 6	
	cout << x2 <<  endl;  // 6
	
	
	min(x1,x2) = 9;       //x1=9
	cout << x1 <<  endl;  //9	
	cout << x2 <<  endl;  //6
	
	min(x1,x2) += 4; 	   // x2+=4	
	cout << x1 <<  endl;   //9	
	cout << x2 <<  endl;   //10
	
	
	getch();
}

int  &min( int& a, int& b) 
{ 
	return a <= b ? a : b; 
}

