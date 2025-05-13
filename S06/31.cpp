//selectoin-sort
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

void  selection_sort( int arr[], int len);


int main()
{
	int i, len = 10;
	
	int *a;
	
	a = new  int[len];
	
	srand( (unsigned)time(NULL));
	
	for( i=0; i < len; ++i) 
		a[i] = rand() % 9;

	selection_sort( a , len); 
	
	cout << "sort array: " << endl;
	for( i = 0; i < len; ++i)
		cout << setw(5) << a[i];
	

	delete[] a; 

	getch();
}
// ------------------------------------------------------
void swap( int& a, int& b) 
{ 
		int temp;
		temp = a; 
		a = b; 
		b = temp; 
}
// ------------------------------------------------------

void selection_sort( int *x, int size)
{
	int  *p , *m ,*end;    
			
	end = x + size-1;   
	
	for( ; x < end; ++x)
	{
		m = x;                        // Search minimum
		for( p = x+1; p <= end ; ++p) 
			if( *p < *m ) 
				m = p;
				
		swap( *x , *m); 
	}
}
/*
     12   6    4    15    1
     1    6    4    15   12
     1    4    6    15   12
     1    4    6    15   12
     1    4    6    12   15
*/


     
