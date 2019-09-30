#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
	private:
		char vehicle_type[30],Model_no[30];
	public:	
		void get()
		{
			cout<<"\n Enter the vehicle type =";
			cin.getline(vehicle_type,30);
			cin.sync();
			cout<<"\n Enter the Model number =";
			cin.getline(Model_no,30);
		}
		void show()
		{
			cout<<"\n Vehicle type ="<<vehicle_type;
			cout<<"\n Model no. of your vehicle ="<<Model_no;
		}
};
 class info:public vehicle
 {
 	private: 
 		float price;
 		char color[20];
    public:
    	void detail()
    	{
    		cout<<"\n Enter the price =";
    		cin>>price;
    		cin.sync();
    		cout<<"\n Enter the color =";
    		cin.getline(color,20);
		}
		void display()
		{
			cout<<"\n Price is ="<<price;
			cout<<"\n color is ="<<color;
		}
 };
 main()
 {
 	info obj;
 	obj.get();
 	obj.detail();
 	obj.show();
 	obj.display();
 	getch();
 }
