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
	private:
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
		
		int marks_part1()
		{
			return part1;
			}
		
		int marks_part2()
		{
			return part2;
				}			
};

class sports:public virtual student
{
	private:
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
		
		int score_re()
		{
			return score;
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
		 	total=marks_part1()+marks_part2()+score_re();
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
