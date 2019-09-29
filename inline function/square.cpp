/*
	qns . wap of c++ calculate the square of a no. using inline function.
*/
#include<iostream>
#include<conio.h>
using namespace std;
inline int square(int r)
{
	return(r*r);
}

main()
{
	int x;
	cout<<"Enter a no.";
	cin>>x;
	cout<<"Square is ="<<square(x);
	getch();
}
