#include<iostream>
#include<conio.h>
using namespace std;
class number
{
	public:
		float a,b;
		number()
		{
			a=10;
			b=20;
		}
};
main()
{
	number obj;
	cout<<"a : "<<obj.a<<endl;
	cout<<"b : "<<obj.b<<endl;
	getch();
}
