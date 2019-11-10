#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<"\n I am jarvis ";
		}
};
class derived1:public base
{
	public: 
	void display()
	{
		cout<<"\n i am live ";
	}
};

class derived2:public base
{
	public:
		void showtime()
		{
			cout<<"\n i am iron man";
		}
};

main()
{
	derived1 obj1;
	derived2 obj2;
	obj1.show();
	obj2.showtime();
	obj1.display();
	getch();
}
