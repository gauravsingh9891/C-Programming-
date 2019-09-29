#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	int x;
	public:
		void getdata(int y)
		{
			x=y;
		}
		void showdata()
		{
			cout<<"Value of x="<<x<<endl;
		}
};

class sample_1:public sample
{
	int a;
	public:
		void getdata(int b)
		{
			a=b;
		}
		void showdata()
		{
			cout<<"\n Value of a ="<<a<<endl;
    }
};
 main()
 {
 	sample base,*bptr;
 	base.getdata(10);
 	bptr=&base;
 	bptr->showdata();
 	sample_1 derived,*dptr;
 	derived.getdata(15);
 	dptr=&derived;
 	dptr->showdata(); //*dptr.showdata();
 	getch();
 }
