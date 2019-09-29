/*
		--------------------------------------------Ambiguity problem (10 marks)--------------------------------------------------------------------------
		
		When the base class and chile class have the function with the same name then, while calling a function then the system will get confused 
		which function is to be called. Hence it calls the derived class function by default as the object is created for the derived class.
		
		To solve the problem of Ambiguity the scope resolution operator is used which distinguish each function called.
		
		The solution of ambiguity problem is to use scope resolution operator (::)
		
		_______SYNTAX______________
		
		____________________________________________
		Derived_object.base_clas::member_function();
		____________________________________________
		
		--------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include<iostream>
#include<conio.h>
using namespace std;
class theory
{
	int tm;
	public:
		theory()
		{
			tm=0;
		}
		
		void get_theory()
		{
		  cout<<"\nenter the theory marks =";
		  cin>>tm;
		}
		 void show()			//same function name
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
	int pm;
	public:
		practical()
		{
			pm=0;
		}
		
		void get_practical()
		{
		  cout<<"\nenter the practical marks =";
		  cin>>pm;
		}
		 void show()          // same function name 
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
		
		void show()       // same function name
		{
			total=theory_marks()+practical_marks();
			cout<<"\n The sum of two number is = "<<total;
		}
};

main()
{
	result student;
	student.get_result();
	student.theory::show();          //solving AMBIGUITY problem using scope resolution operator
	student.practical::show();       //solving AMBIGUITY problem using scope resolution operator
	student.show();
	getch();
}
