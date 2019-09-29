#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class  strin
{
	char str[30];
	public:
		void getdata()
		{
			cout<<"Enter the string = ";
			cin.getline(str,30);
		}
	void showdata()
	{
		cout<<"string ="<<str<<endl;
		}	
	int operator >(strin s)
	{
		if(strcmp(str,s.str)>0)
		{
			return(1);
		}
		else
		{
			return(0);
		}
		}	
};

main()
{
	strin s1,s2;
	s1.getdata();
	s2.getdata();
	s1.showdata();
	s2.showdata();
	if(s1>s2)
	cout<<"First string object is greater";
	else
	cout<<"Second string object is greater";
	getch();
}
