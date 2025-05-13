// insert  array into array.

#include <iostream>
#include <iomanip>
#include <cstdlib>  // For srand() and rand()
#include <ctime> 	
#include <conio.h>

using namespace std;

int *f( int v1[], int len1,int v2[], int len2, int pos);

int main()
{
	int i, len1 = 3, len2 = 2;
	
	int *a1 = new int[len1];
	
	int *a2 = new int[len2];

	srand( (unsigned)time(NULL)); 
		
	for( i=0; i < len1; ++i) 			
		a1[i] = rand()%100; 
			
	cout << "array1: " << endl;
	for( i = 0; i < len1; ++i)
		cout << setw(15) << a1[i];
	cout << endl;
	
	
    for( i=0; i < len2; ++i)
		a2[i] = rand()%100; 
						
	cout << "array2: " << endl;
	for( i = 0; i < len2; ++i)
		cout << setw(15) << a2[i];
	
	cout << endl;

	
	cout << "\n what position ?";
	int pos; 
	cin >> pos;
	
	int *a3 , len3 ;
	len3 = len1 + len2;
	
	a3 = f( a1, len1, a2, len2, pos);
	
	if( a3 == NULL)
		cerr << "\n Invalid position!\n" << endl;
	else
	{
		cout << " new array: " << endl;
		for( i = 0; i < len3; ++i)
			cout << setw(15) << a3[i];
		cout << endl;
	}
	
	delete[] a1; 
	delete[] a2; 
	delete[] a3;
    getch();
}
// -------------------------------------------------------
//  inserts the array v2 into v1 starting at position pos.
int  *f( int  v1[] , int len1 , int v2[] , int len2 , int pos)
{
	if( pos < 0 || pos > len1)
		return NULL;
		
	int  i = 0, j = 0 , k=0;
	
	int *a = new int[len1+len2];
	
	for( i = 0 ; i < pos ; ++i, ++k)   
		a[k] = v1[i];
		
	for( j = 0; j < len2 ; ++j, ++k)         
		a[k] = v2[j];
		
	for( ; i < len1 ; ++i, ++k)              
		a[k] = v1[i];

	return a;
}
	/*
	v1= 11  14  12
	v2= 5    9
	pos=2
	a=  11  14  5  9  12
	*/	
