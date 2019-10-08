#include<iostream>
#include<conio.h>
using namespace std;
class classroom
{
	public:
		classroom()
		{
			cout<<"\n This is BCA course ";
		}
};
class student
{
	public:
		student()
		{
			cout<<"\n This is your 3rd semeter ";
		}
};
class show:public classroom,public student
{
	
};
 
 main()
 {
 	show obj;
 	getch();
 }
