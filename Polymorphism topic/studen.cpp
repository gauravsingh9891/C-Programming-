#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		long int roll;
		float marks;
	public:
		void getdata()
		{
			cout<<"\n Enter the roll and marks of student =";
			cin>>roll>>marks;
			}	
		void showdata()
		{
			cout<<"\nRoll No. ="<<roll;
			cout<<"\n Marks ="<<marks;
			}	
};

main()
{
	student obj,*ptr;
	cout<<"\n Enter the record of student \n";
	obj.getdata(); // input data
	ptr=&obj;  //copying obj into pointer variable
	cout<<"\n record of student are \n"; 
	ptr->showdata();  //OR *ptr.showdata();        / output throw pointer variable
	getch();
}
