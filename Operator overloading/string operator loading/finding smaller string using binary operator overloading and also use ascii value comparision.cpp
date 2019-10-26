#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class small
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
		int operator<(small m)
		{
			if(strcmp(str,m.str)<0)
			return(1);
			else 
			return(0);
			}	
};
main()
{
	small obj1,obj2;
	obj1.get();
	obj2.get();
	if(obj1<obj2)
	cout<<"\n First stirng is smallest string";
	else
	cout<<"\n Second string is smallest string";
	getch();
}
