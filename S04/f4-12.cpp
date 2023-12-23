#include <iostream>
#include <conio.h>

using namespace std;

// pi *r*r * h
float volume(float , float );
 
main()
{
  float r,h;
  cout<<"enter r:";
  cin>>r;
  
  cout<<"enter h:";
  cin>>h;
  
  cout<<volume(r,h);

  getch();
}

  float area(float r)
  {
  	return 3.14*r*r;
  }
  
  float volume(float r, float h)
  {
  	return area(r)*h;
  }
  
  
