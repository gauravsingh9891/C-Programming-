#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	private:
		int x;
	public:
		void getdata(int y)
		{
			x=y;
			}	
		void showdata()
		{
			cout<<"\n value of x ="<<x;
			}	
};
 main()
 {
 	sample obj,*ptr;
 	obj.getdata(10);
 	ptr=&obj;
 	ptr->showdata();
 	getch();
 }
