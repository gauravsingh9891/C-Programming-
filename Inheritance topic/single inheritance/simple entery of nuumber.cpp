#include<conio.h>
#include<iostream>
using namespace std;
class sample
{
	int a;
	public:
		void get()
		{
			cout<<"\n Enter the number =";
			cin>>a;
		}
		void show()
		{
			cout<<"\nValue is = "<<a;
		}
};

class action:public sample
{
	int d;
	public:
	void detail()
	{
		get();
		cout<<"\nEnter the value = ";
		cin>>d;
	}
	void view()
	{
		show();
		cout<<"\n Value is ="<<d;
	}
};

main()
{
	action obj;
	obj.detail();
	obj.view();
	getch();
}

