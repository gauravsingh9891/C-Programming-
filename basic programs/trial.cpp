#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		int roll;
		float marks;
	public:
		void get()
		{
			cout<<"\n Enter the Roll and marks : ";
			cin>>roll>>marks;
		}
		void show()
		{
			cout<<"\n Roll Number is : "<<roll;
			cout<<"\n Marks is : "<<marks;
			}	
}obj[3];
main()
{
	for(int i=0;i<3;i++)
	obj[i].get();
	for(int i=0;i<3;i++)
	obj[i].show();
	getch();
}
