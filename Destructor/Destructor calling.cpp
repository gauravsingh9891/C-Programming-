#include<iostream>
#include<conio.h>
class sample
{
	private:
		int x;
	public:
		sample()	// constructor
		{
			x=10;
		}
		
		~sample()		// Destructor
		{
			
		}
		
		void show()
		{
			cout<<"\nThe value of x is ="<<x;
		}
};
main()
{
	sample A;
	A.show();
	{
		{
			Sample B;
			B.show();
		} // Destructor call for B
		
		{
			sample C;
			C.show();
		} // Destructor call for C
		
	} // Destructor call for A
	getch();
}
