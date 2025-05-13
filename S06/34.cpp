// new    ,  delete
#include <iostream>
#include <conio.h>
using namespace std;


main()
{
  int    s,i,j;
  float  **student;
  int    *exam;
  
  int n;
  cout<<"enter number student:";
  cin >> n;
  
  student = new  float *[n];
  
  exam    = new  int    [n];  
  
  
  for( i=0 ; i<n ; i++ )
    {
    	cout << "\n\n\n enter number exam for student"<< i+1 <<":";
		cin  >> exam[i];
    	
		student[i] = new  float[exam[i]];
    	
		s=0;
		for( j=0 ; j<exam[i] ; j++)
    	   {
    	    cout << " nomreh " << j+1 << ":";
			cin  >> student[i][j];
			s += student[i][j];
		   }
        cout<<"average= "<<(float) s/ exam[i];
    }
 
    
   for( i=0 ; i<n ; i++)
      delete [] student[i];
      
    delete [] student;
    delete [] exam;

  getch();
}


