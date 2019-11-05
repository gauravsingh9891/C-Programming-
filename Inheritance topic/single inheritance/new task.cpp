#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class theory
{
	public:
		float a[5];
		theory()
		{
			cout<<"\n Enter the marks of theory of five students with name : ";
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
	       }
		}
};
class practicle:public theory
{
	public:
		float b[5];
		practicle()
		{
			cout<<"\n\n Enter the marks of practical of five students : ";
			for(int i=0;i<5;i++)
			{
				cin>>b[i];
			}
		}
};
main()
{
	practicle obj;
	float total[5];
	for(int i=0;i<5;i++)
	{
		total[i]=obj.a[i]+obj.b[i];
		cout<<"\n Total Marks of student : "<<total[i];
	}
	getch();
}
