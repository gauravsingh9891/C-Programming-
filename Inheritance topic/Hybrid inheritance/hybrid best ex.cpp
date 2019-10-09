//Hybrid inheritance 

#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
	public:
		char veh[30];
	public:
		vehicle()
		{
			cout<<"\n Enter Your vehicle type : ";
			cin.getline(veh,30);
		}
};
class model:virtual public vehicle
{
	public:
		char mod[30];
	public:
		model()
		{
			cin.sync();
			cout<<"\n Enter your vehicle model number : ";
			cin.getline(mod,30);
			}	
};
class color:virtual public vehicle
{
	public:
		char col[30];
	public:
		color()
		{
			cin.sync();
			cout<<"\n Enter the color of your vehicle : ";
			cin.getline(col,30);
			}	
};
class fuel_cap:public model,public color
{
	public:
		char fuel[30];
	public:
		fuel_cap()
		{
			cin.sync();
			cout<<"\n Enter the fuel capacity : ";
			cin.getline(fuel,30);
			cout<<endl;
			cout<<"\nYour vehicle type : "<<veh;
			cout<<"\nyour vehicle model number : "<<mod;
			cout<<"\ncolor of your vehicle : "<<col;
			cout<<"\nfuel capacity : "<<fuel;
	}	
};

main()
{
	fuel_cap obj;
	getch();
}
