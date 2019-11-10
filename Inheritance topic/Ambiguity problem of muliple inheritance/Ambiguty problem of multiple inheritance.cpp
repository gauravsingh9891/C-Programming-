// AMBIGUITY PROBLEM

#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<"\n Base is calling ";
		}
};
class derived 
{
	public:
		void show()
		{
			cout<<"\n Derived is calling ";
		}
};

/*
		In base and derived class have same name of function show complier get confuse which show function to be call so, there have a solution is when you call a that funtion that 
		you want to call of particular class then use have to use class name along with funtion that you want to call.
		like below in this end of comment.
*/
class showtime:public base,public derived
{
	public:
		public:
			void display()
			{
				base::show();
			}
};
main()
{
	showtime obj;
	obj.display();
	obj.derived::show();
	getch();
}


