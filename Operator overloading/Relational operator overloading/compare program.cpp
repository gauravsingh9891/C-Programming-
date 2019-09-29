#include<iostream>
#include<conio.h>
using namespace std;
class compare
{
	private:
		int x;
	public:
		compare()
		{
			x=0;
			}	
		void get()
		{
			cout<<"Enter the number ";
			cin>>x;
			}	
		void show()
		{
			cout<<"Vaule of x is ="<<x<<endl;
			}	
		int operator ==(compare e)
		{
			if(x==e.x)
			return(1);
			else
			return(0);
			}	
};
main(void)
{
	compare c1,c2;
	c1.get();
	c2.get();
	c1.show();
	c2.show();
	if(c1==c2)
	cout<<"\nboth Number are equal to each other";
	else
	cout<<"\nboth Number are not equal to each other";\
	getch();
}
