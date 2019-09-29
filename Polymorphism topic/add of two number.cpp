#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter the two values = ";
			cin>>x>>y;
		}
		void showdata()
		{
			cout<<"\n Sum is ="<<x+y;
		}
};
 main()
 {
 	add obj,*prt;
 	obj.getdata();
 	prt=&obj;
 	prt->showdata();
 	getch();
 }
