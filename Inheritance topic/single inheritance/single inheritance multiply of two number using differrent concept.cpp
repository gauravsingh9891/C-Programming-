#include<iostream>
#include<conio.h>
using namespace std;

class first
{
	public:
		float x;
		first()
		{
			cout<<"\n Enter the first number : ";
			cin>>x;
		}
};

class second: public first
{
	public:
		float y;
		second()
		{
			cout<<"\n Enter the second number : ";
			cin>>y;
		}
};

main()
{
	second obj;
	float z;
	z=obj.x*obj.y;
	cout<<"\n Multiplication of two number is = "<<z;
	getch();
}
