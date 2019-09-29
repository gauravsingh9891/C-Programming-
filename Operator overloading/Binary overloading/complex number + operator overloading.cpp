#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		float r,i;
	public:
		void get()
		{
			puts("Enter the real and imagenary no. ");
			cin>>r>>i;
			}	
		void show()	
		{
			cout<<"\n"<<r<<"+"<<i<<"i";
		}
		
		complex operator +(complex c)	//Binary operator
		{
		  complex temp;
		  temp.r=r+c.r;
		  temp.i=i+c.i;
		  return(temp);
		}
};
 
main()
{
	complex c1,c2,c3;
	c1.get();
	c2.get();
	c1.show();
	c2.show();
	c3=c1+c2; //c3=c1.operator+(c2);
	c3.show();
	getch();
}
