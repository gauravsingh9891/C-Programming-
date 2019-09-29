#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	long int roll;
	float marks;
	public:
		void getdata()
		{
			cout<<"\n Enter the roll no. and marks = ";
			cin>>roll>>marks;
		}
		void showdata()
		{
			cout<<"\n roll no. is ="<<roll;
			cout<<"\n marks is ="<<marks;
		}
};
 main()
 {
 	student obj,*prt;
 	cout<<"\n Enter the records \n";
 	obj.getdata();
 	prt=&obj;
 	cout<<"\n Record of student \n";
 	prt->showdata();
 	getch();
 }
