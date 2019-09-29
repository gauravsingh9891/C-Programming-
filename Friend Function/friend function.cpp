#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	private:
		int x;
	public:
		void get();
		void show();
		friend void square(sample &s);
};

void sample::get()
{
	cout<<"Enter the value of x ="<<endl;
	cin>>x;
}

void sample::show()
{
	cout<<"\nThe Value of x ="<<x;
}

void square(sample &s)
{
	cout<<"\nSquare is ="<<s.x*s.x;
}

main()
{
	sample obj;
	obj.get();
	obj.show();
	square(obj);
	getch();
}
