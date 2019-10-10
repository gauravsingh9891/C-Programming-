#include<iostream>
#include<conio.h>
using namespace std;
class random
{
	private:
		int x,y;
	public:
		random(int a,int b)
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
	random obj(10,20);
	int c;
	cout<<"\n X : "<<obj.getx();
	cout<<"\n Y : "<<obj.gety();
	c=obj.getx()+obj.gety();
	cout<<"\n sum of two number ="<<c;
	getch();
}
