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
		
		void theory_show()
		{
			cout<<"\n Marks of theory ="<<tm;
		}
		
		int theory_marks()
		{
			return tm;
		}
};

class practical
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
		
		void practical_show()
		{
			cout<<"\n Marks of practical ="<<pm;
		}
		
		int practical_marks()
		{
			return pm;
		}
};

class result:public theory,public practical
{
	private:
		int total;
	public:
		result()
		{
			total=0;
			}
		void get()
		{
			get_theory();
			get_practical();
				}		
		void show_result()
		{
			total=theory_marks()+practical_marks();
			cout<<"\n The result is ="<<total;
			}	
};

main()
{
	result s;
	s.get();
	s.theory::theory_show();
	s.practical::practical_show();
	s.show_result();
	getch();
}
