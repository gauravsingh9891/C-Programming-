#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n=10;
	loop:
	cout<<n<<", ";
	--n;
	if(n>0)goto loop;
	cout<<"FIRE!\n";
	getch();
}
