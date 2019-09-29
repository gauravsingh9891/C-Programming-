#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		float r,i;
	public:
		void getdata()
		{
			cout<<"\nEnter the real and imaginery number=";
			cin>>r>>i;
			}	
		void showdata()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
			}	
		complex operator +(complex s)
		{
			complex temp;
			temp.r=r+s.r;
			temp.i=i+s.i;
			return(temp);
			}	
}obj1,obj2,obj3;
main()
{
	obj1.getdata();
	obj2.getdata();
	obj1.showdata();
	obj2.showdata();
	obj3=obj1+obj2;
	obj3.showdata();
	getch();
}
