#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class strcomp
{
	private:
		char str[50];
	public:
		void getdata()
		{
			cout<<"\n Enter the string =";
			cin>>str;
		}
		void showdata()
		{
			cout<<"\n String is = "<<str;
		}
		int operator ==(strcomp s)
		{
			if(strcmp(str,s.str)==0)
			return(1);
			else
			return(0);
		}
};
main()
{
	strcomp s1,s2;
	s1.getdata();
	s2.getdata();
	s1.showdata();
	s2.showdata();
	if(s1==s2)
	cout<<"\n both string are equal";
	else
	cout<<"\n both string are not equal";
	getch();
}
