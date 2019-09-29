#include<iostream>
#include<conio.h>
using namespace std;
class Greater
{
	private:
		int x;
	public:
		greater()
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
		
		int operator >(Greater g)
		{
			if(x>g.x)
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
	Greater G1,G2;
	G1.get();
	G2.get();
	G1.show();
	G2.show();
	if(G1>G2)
	{
		cout<<"The First number is greater";
	}
	else
	{
		cout<<"The Second number is greater";
	}
	getch();
}
