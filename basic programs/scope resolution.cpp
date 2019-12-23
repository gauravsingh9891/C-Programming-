#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		int roll;
	public:
		void get(int a);
		void show();
}obj;

void student::get(int a)
{
	roll=a;
}
void student::show()
{
	cout<<"\n Roll number is : "<<roll;
}
main()
{
	obj.get(10);
	obj.show();
	getch();
}
