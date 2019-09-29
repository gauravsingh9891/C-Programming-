#include<iostream>
#include<conio.h>
using namespace std;
class plus
{
	private:
		int x;
	public:
		plus() // Default constructor
		{
			x=0;
			}	
		~plus() // Parameterise constructor
		{
			}
		void getdata(int d)
		{
			x=d;
				}
		void show()
		{
			cout<<"value of x ="<<x<<endl;
						}				
		
		plus operator +(plus p)
		{
			plus temp;
			temp.x=x+p.x;
			return(temp);
						}								
}obj1,obj2,obj3;
main()
{
	obj1.getdata(10);
	obj2.getdata(20);
	obj1.show();
	obj2.show();
	obj3=obj1+obj2; //obj3=obj1.operator+(obj2);
	obj3.show();
	getch();
}
