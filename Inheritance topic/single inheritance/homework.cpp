#include<iostream>
#include<conio.h>
using namespace std;
class theory
{
	public: 
		float tm,a[5];
		theory()
		{
			tm=0.0;
			cout<<"\n Enter the theory marks of five students : ";
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
			for(int i=0;i<5;i++)
			{
				tm=tm+a[i];
			}
			cout<<"\nTotal Theory marks of five students is : "<<tm;
		}
};

class practical:public theory
{
	public:
		float pm,b[5];
		practical()
		{
		   pm=0.0;
			cout<<"\n\n Enter the practical marks of five students : ";
			for(int i=0;i<5;i++)
			{
				cin>>b[i];
			}
			for(int i=0;i<5;i++)
			{
				pm=pm+b[i];
			}
			cout<<"\nTotal Practical marks of five students is : "<<pm;	
		}
};

main()
{
	practical obj;
	float total;
	total=obj.tm+obj.pm;
	cout<<"\n\n Grand total is : "<<total;
	getch();
}
