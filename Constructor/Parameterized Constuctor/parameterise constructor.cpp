/*
	Qns. What is the Parameterise constructor?
	ans. when condtructor have arguments then we call the constructor by declaring object with arguments.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class area
{
	float a,r;
	public:
		area(float x) 	//Parameterise consructor OR construtor with argument
		{
			r=x;
		}
		
		void calculate()
		{
			a=3.14*r*r;
			}
			
		void show()
		{
			cout<<"The area of circle ="<<a<<endl;
			}	
};
main()
{
	area obj(10);	//Parameterise constructor called here  or explicit method is :- area obj=area(10);
	obj.calculate();
	obj.show();
	getch();
}
