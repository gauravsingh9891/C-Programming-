/*
		Inline function Syntax ;-
	------------------------------
	
	inline   return_type   function_name(Argument if any)
	{
		------
		-----
		-----	
	}	

*/
#include<iostream>
#include<conio.h>
using namespace std;
inline int sum(int a,int b)
{
	return(a+b);
}

int main()
{
	int x,y;
	cout<<"\nEnter 2 numbers =";
	cin>>x>>y;
	cout<<"sum of two number ="<<sum(x,y);
	getch();
}
