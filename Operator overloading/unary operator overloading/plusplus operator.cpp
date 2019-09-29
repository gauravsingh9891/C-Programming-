#include<iostream>
#include<conio.h>
using namespace std;
class unaryp
{
	private:
		int x;
	public:
		unaryp(int a)
		{
			x=a;
			}	
		~unaryp()
		{
			}
		void operator ++()
		{
			x=x+1;
				}
		void show()
		{
			cout<<"Value of x ="<<x;
						}				
};

int main()
{
	unaryp obj(10); // parametrise constructor calling
	cout<<"\nThe value of x befor increment";
	obj.show();
	cout<<"\nThe value of x befor increment";
	++obj; // obj.operator++();
	obj.show();
	getch();
	return 0;
}
