#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
		public:
			vehicle()					//Default constructor
			{
				cout<<"This is a vehicle"<<endl;
			}
};
class car:public vehicle		// single inheritance
{
	
};

main()
{
	car obj;		// single inheritance of defaule constructor
	getch();
}
