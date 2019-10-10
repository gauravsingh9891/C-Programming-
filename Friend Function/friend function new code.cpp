#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			a=0;
			}	
	friend class B;	 //friend function
};

class B
{
	private:
		int B;
	public:
		void show(A x)
		{
			cout<<"value of a : "<<x.a;
			}	
};
main()
{
	A obj1;
	B obj2;
	obj2.show(obj1); //friend function is calling here
	getch();
}
