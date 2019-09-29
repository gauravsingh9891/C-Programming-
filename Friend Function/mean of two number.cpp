/*
		Qns. 	find mean value of two number.
*/

#include<iostream>
#include<conio.h>
using namespace std;
class mean
{
	private:
		int x,y;
	public:
		void getdata(int a,int b);	
		void showdata();
		friend void meantwo(mean &m);	// Friend function
};

void mean::getdata(int a,int b)
{
		x=a;
		y=b;
}

void mean::showdata()
{
	cout<<"\nValue of x ="<<x;
	cout<<"\nValue of y ="<<y;
}

void meantwo(mean &m)
{
	cout<<"\nMean of two number is ="<<(m.x+m.y)/2;
}

main()
{
	mean obj;
	obj.getdata(10,20);
	obj.showdata();
	meantwo(obj);				// Friend function calling here
	getch();
	
}

