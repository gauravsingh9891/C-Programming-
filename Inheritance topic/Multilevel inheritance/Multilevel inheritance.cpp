#include<iostream>
#include<conio.h>
using namespace std;
class theory
{
	private:
		int tm;
	public:
		theory()
		{
			tm=0;
			}	
		
		void get_theory()
		{
			cout<<"\n Enter the theory marks =";
			cin>>tm;
			}	
		
		void show_theory()
		{
			cout<<"\n Marks of theory ="<<tm;
			}	
			
		int gettheory_marks()
		{
			return (tm);
			}	
}; //end of theory class

class practical:public theory
{
	private:
		int pm;
	public:
	    practical()
		{
			pm=0;
			}	
			
		void get_practical()
		{
			cout<<"\n Enter the practical marks =";
			cin>>pm;
			}	
		
		void show_practical()
		{
			cout<<"\n Marks of practical ="<<pm;
			}	
		
		int getpractical_marks()
		{
			return (pm);
			}	
}; //end of pactical class

class result:public practical
{
	private:
		int total;
	public:
		result()
		{
			total=0;
		}
		
		void get_result()
		{
			get_theory();
			get_practical();
		}
		
		void show_result()
		{
			show_theory();
			show_practical();
			total=gettheory_marks()+getpractical_marks();
			cout<<"\n Total marks obtained by in test ="<<total;
		}   
}; //end of result class

main()
{
	result student;
	student.get_result();
	student.show_result();
	getch();
}


