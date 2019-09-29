#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class calculator
{
	private:
		float a;
	public:
		calculator()
		{
			a=0.0;
			}	
		~calculator()
		{
			}
		
		void get()
		{
			cout<<"\nEnter the number =";
			cin>>a;
				}
		void show()
		{
			cout<<"\nThe Result is ="<<a;
						}				
		calculator operator +(calculator b)
		{
			calculator temp;
			temp.a=a+b.a;
			return(temp);
						}
						
		calculator operator -(calculator b)
		{
			calculator temp;
			temp.a=a-b.a;
			return(temp);
						}
		calculator operator *(calculator b)
		{
			calculator temp;
			temp.a=a*b.a;
			return(temp);
						}
		calculator operator /(calculator b)
		{
			calculator temp;
			temp.a=a/b.a;
			return(temp);
						}																
};
main()
{
	calculator s1,s2,s3;
	int d;
	s1.get();
	s2.get();
	s1.show();
	s2.show();
	while(1)
	{
		cout<<"\nMain Menu";
		cout<<"\nPress 1: Additon";
		cout<<"\nPress 2: Minus";
		cout<<"\nPress 3: Multiply";
		cout<<"\nPress 4: Divide";
		cout<<"\nPress 5: exit";
		cout<<"\nEnter the choice"<<endl;
		cin>>d;
		switch(d)
		{
			case 1:  s3=s1+s2;
					 s3.show();
					 break; 
			case 2:  s3=s1-s2;
					 s3.show();
					 break;
			case 3:  s3=s1*s2;
					 s3.show();
					 break;
			case 4:  s3=s1/s2;
					 s3.show();
					 break;
			case 5:	 exit(0);
			default: cout<<"\n Invalid choice !";		 		 		 		 
		}
	}
	getch();
}
