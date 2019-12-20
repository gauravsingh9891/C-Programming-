#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
main()
{
	float x,y,z;
	x=11;
	y=7;
	z=x/y;
	cout<<setprecision(1)<<z<<endl;		//setprecision() is use for control the digit of float value after the decimal 
	cout<<setprecision(2)<<z<<endl;
	cout<<setprecision(3)<<z<<endl;
	cout<<setprecision(4)<<z<<endl;
	cout<<setprecision(5)<<z<<endl;
	getch();
}
