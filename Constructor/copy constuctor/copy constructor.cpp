/*
	Qns.	What is the copy constructor?
			--------------------------------------------------------------------------------------------------------------
				
	Ans.	copy constructor is a kind of a constructor which is use to initialize the object of a class with 
			help of another object with of the same class.
			
			copy constructor generally takes the address of an object as an arguments. A class can have many constructor
			that it is also known as constructor overloading.
			______________________________________________________________________________________________________________
*/

#include<iostream>
#include<conio.h>
using namespace std;
class copy
{
	private:
		int x;
	public:
		copy()			// Default contructor
		{
			x=0;
			}	
			
		copy(int y)		// Parameterise constructor
		{
			x=y;
			}	
		
		copy(copy &c)	// copy constructor
		{
			x=c.x;
			}	
			
		void show()
		{
			cout<<"Value of X ="<<x<<endl;
			}	
};
main()
{
	copy c1(10);	// calling of parameterise constructor
	copy c2(c1);	// calling of copy constructor
	copy c3;		// calling of Default constructor
	c3=c1;
	c1.show();
	c2.show();
	c3.show();
	getch();
}
