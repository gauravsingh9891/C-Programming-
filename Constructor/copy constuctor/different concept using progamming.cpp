#include<iostream>
#include<conio.h>
using namespace std;
class copy_con
{
	private:
		int x,y;
		public:
			copy_con(int a,int b)
			{
				x=a;
				y=b;
			}
			int getx()
			{
				return x;
			}
			int gety()
			{
				return y;
			}
};

main()
{
	copy_con obj1(10,20);
	copy_con obj2=obj1;
	cout<<"\n Value of x for obj1 : "<<obj1.getx()<<"\t"<<"value of y for obj1 : "<<obj1.gety();
	cout<<"\n\n Value of c for obj2 : "<<obj2.getx()<<"\t"<<"value of y for obj2 : "<<obj2.gety();
	getch();
}
