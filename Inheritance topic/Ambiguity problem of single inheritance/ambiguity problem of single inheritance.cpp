// ambiguity of single inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<"\n I am vilen";
		}
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"\n Naam se vilen kaam se hero ~vilen ";
		}
};
main()
{
	derived obj;
	obj.base::show();
	obj.show();
	getch();
}
