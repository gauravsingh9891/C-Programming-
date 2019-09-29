#include<iostream>
#include<conio.h>
using namespace std;
class base_1
{
	public:
		void show()
		{
			cout<<"\n I am in base class 1";
		}
};

class base_2
{
	public:
		void show()
		{
			cout<<"\n I am in base class 2";
		}
};

class child:public base_1,public base_2
{
	public:
	show()
	{
	cout<<"\n I am in child class";
}
};

main()
{
	child D;
	D.base_1::show();
	D.base_2::show();
	D.show();
	getch();
}
