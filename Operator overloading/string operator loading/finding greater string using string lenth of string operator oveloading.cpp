#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class complen
{
	private:
		char str[30];
	public:
		void get()
		{
			cout<<"\n Enter the string : ";
			gets(str);
			}	
		void show()
		{
			cout<<"\n String is : "<<str;
			}	
		int operator>(complen m)
		{
			if(strlen(str)>strlen(m.str))
			return(1);
			else 
			return(0);
			}	
};
main()
{
	complen obj1,obj2;
	obj1.get();
	obj2.get();
	if(obj1>obj2)
	cout<<"\n First stirng is greatest string";
	else
	cout<<"\n Second string is greatest string";
	getch();
}
