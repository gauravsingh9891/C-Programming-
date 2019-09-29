#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class strcopy
{
	char str[50];
	public:
		void getdata()
		{
			cout<<"\nEnter the string =";
			cin.getline(str,30);
		}
		void showdata()
		{
			cout<<"\nString are ="<<str;
		}
		int operator =(strcopy s)
		{
			strcpy(str,s.str);
		}
};
main()
{
	strcopy s1,s2;
	s1.getdata();
	cout<<"\nString of first object";
	s1.showdata();
	cout<<"\nString of second object after copying first copy";
	s2=s1;
	s2.showdata();
	getch();
}
