#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class string_plus
{
	char str[30];
	public:
		void getdata()
		{
			cout<<"Enter the string = ";
			cin.getline(str,30);
		}
		void showdata()
		{
			cout<<"string = "<<str<<endl;
		}
		string_plus operator +(string_plus s)
		{
			string_plus temp;
			strcpy(temp.str,strcat(str,s.str));
			return(temp);
		 } 
};
 main()
 {
 	string_plus s1,s2,s3;
 	s1.getdata();
 	s2.getdata();
 	s1.showdata();
 	s2.showdata();
 	s3=s1+s2;
 	s3.showdata();
 	getch();
 }
