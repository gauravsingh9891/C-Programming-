#include<iostream>
#include<conio.h>
using namespace std;
class minusminus
{
	private:
		int x;
	public:
		
	minusminus()
	{
		x=0;
		}	
	
	void getdata(int y)
	{
		x=y;
		}	
		
	void showdata()
	{
		cout<<"The Value of x ="<<x<<endl;
		}	
	
	void operator --()		//operator overloading
	{
		x=x-1;
		}	
};

main()
{
	minusminus m;
	m.getdata(5);
	m.showdata();
	cout<<"\n After increment\n";
	--m;								// m.operator++();  operator overloading calling for a object
	m.showdata();
	getch();
}
