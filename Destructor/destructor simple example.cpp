#include<iostream>
#include<conio.h>
using namespace std;
class boss
{
	public:
		boss()
		{
			cout<<"\n constructor is called ";
		}
		~boss()
		{
			cout<<"\n Destructor is called ";
		}
		void show()
		{
			cout<<"\n Boss is always right ";
		}
};
main()
{
	boss obj;
	obj.show();
	getch();
}
