#include<iostream>
#include<conio.h>
using namespace std;
class equal
{
	private:
		int x;
	public:
		equal()
		{
			x=0;
			}
		~equal()
		{
				}		
		
		void get()
		{
			cout<<"Enter the value of x =";
			cin>>x;
			}
				
		void show()
		{
			cout<<"Value of x ="<<x<<endl;
			 } 	
		
		int operator =(equal e)
		{
			x=e.x;	
	}
}e1,e2;

main()
{
	e1.get();
	cout<<"Value of first object \n";
	e1.show();
	e2=e1;
	cout<<"\nValue of second object  \n";
	e2.show();
	getch();
}
