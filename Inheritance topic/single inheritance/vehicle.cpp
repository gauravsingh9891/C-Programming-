#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	private:
		int sr;
		char vehicle_type[30],DOP[10];
	public:
		void get_detail()
		{
			cout<<"\nEnter the serial no. = ";
			cin>>sr;
			cin.sync();
			cout<<"\nEnter the Vehical type = ";
			cin.getline(vehicle_type,30);
			cout<<"\nEnter the Date of Puchase =";
			cin.getline(DOP,10);
		}
		
		void show_detail()
		{
			cout<<"\n Serial No. ="<<sr;
			cout<<"\n Vehical Type = "<<vehicle_type;
			cout<<"\n Date of Purchase ="<<DOP;
			}	
};

class derived:public base
{
	char model[10];
	public:
		void get_derived()
		{
			get_detail();
			cout<<"\n Enter the model no. of vehicle =";
			cin.getline(model,10);
		}
		void show()
		{
			show_detail();
			cout<<"\n Model number =  "<<model;
		}
};

main()
{
	derived dobj;
	dobj.get_derived();
	dobj.show();
	getch();
}
