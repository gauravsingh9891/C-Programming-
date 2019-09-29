#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	protected:
		long int roll_no;
	public:
		void get_roll()
		{
			cout<<"\n Enter the roll number =";
			cin>>roll_no;
			}	
		
		void show_roll()
		{
			cout<<"\n Roll no. is ="<<roll_no;
			}	
};

class test:virtual public student
{
	protected:
		float part1,part2;
	public:
		void get_marks()
		{
			cout<<"\n Enter the marks of part 1 and part 2 subject =";
			cin>>part1>>part2;
		}
		
		void show_marks()
		{
			cout<<"\n Marks obtained =";
			cout<<"\n Part 1 ="<<part1;
			cout<<"\n Part 2 ="<<part2;
		}
};

class sports:public virtual student
{
	protected:
		 float score;
	public:
		void get_score()
		{
			cout<<"\n Enter the score =";
			cin>>score;
				 }	
		void show_score()
		{
			cout<<"\n Score is ="<<score;
					  }		 	 
};

class result:public test,public sports
{
	 private:
	 	float total;
	 public:
	 	void display()
		 {
		 	show_roll();
		 	show_marks();
		 	show_score();
		 	total=part1+part2+score;
		 	cout<<"\n Total score ="<<total;
			 }	
};

main()
{
	result student_1;
	student_1.get_roll();
	student_1.get_marks();
	student_1.get_score();
	student_1.display();
	getch();
}
