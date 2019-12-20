#include<iostream>
#include<conio.h>
using namespace std;
inline int multiply(int b)
{
	return 5*b;
}
main()
{
	int a;
	cout<<"\n Enter the number : ";
	cin>>a;
	cout<<"\n MUltiply : "<<multiply(a);
	getch();
}
