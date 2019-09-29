#include<iostream>
#include<conio.h>
using namespace std;
class Plus
{
	private:
		int x;
	public:
		void get(int y)	
		{
			x=y;
		}
	
	void show()
	{
	  cout<<"Value of x ="<<x<<endl;
		}	
	
	Plus operator +(Plus p)
	{
		Plus temp;
		temp.x=x+p.x;
		return(temp);
		}	
};

main()
{
	Plus p1,p2,p3;
	p1.get(10);
	p2.get(20);
	p1.show();
	p2.show();
	p3=p1+p2; //p3=p1.operator+p2;
	p3.show();
	getch();
}
