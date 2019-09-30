#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		int b;
};
class derived:public base
{
	public:
		int c;
};
 main()
 {
    derived obj;
    obj.b=7;
    obj.c=10;
    cout<<"\n Value of B ="<<obj.b;
    cout<<"\n Value of C ="<<obj.c;
    getch();
 }
