//namespace
#include <iostream>
#include <conio.h>
#include <string>       


namespace A
{
  void  f()  { std::cout << "A \n";}
}

namespace B
{
  void  f()  { std::cout << "B\n";}
}

void f()   
{
	std::cout <<"C \n";
}

int main()
{
	using B::f;  
	       

	A::f();    // A

	f();       // B

	::f();    //  C        


getch();
}
