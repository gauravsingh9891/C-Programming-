#include<iostream>
#include<conio.h>
using namespace std;
class Smaller
{
	private:
		int x;
	public:
		Smaller()
		{
			x=0;
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
		
		int operator <(Smaller s)
		{
			if(x<s.x)
			{
				return(1);
			}
			else 
			{
				return(0);
			}
			 }	 
};

main(void)
{
	Smaller s1,s2;
	s1.get();
	s2.get();
	s1.show();
	s2.show();
	if(s1<s2)
	{
		cout<<"The First number is small";
	}
	else
	{
		cout<<"The Second number is small";
	}
	getch();
}
