#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class complen
{
	private:
	char str[30];
	public:
		void get()
		{
			cout<<"\n Enter the string : ";
			cin>>str;
		}
		void show()
		{
			cout<<"\n String is : "<<str;
		}
		int operator ==(complen m)
		{
			if(strlen(str)==strlen(m.str))
			return(1);
			else
			return(0);
		}
}obj1,obj2;
main()
{
	obj1.get();
	obj2.get();
	if(obj1==obj2)
	cout<<"\n both no. is equal by lenth wise";
	else
	cout<<"\n both no. are not equal by lenth wise";
	getch();
}
