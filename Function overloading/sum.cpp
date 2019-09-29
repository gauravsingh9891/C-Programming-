#include<iostream>
#include<conio.h>
using namespace std;
int sum(int,int);
float sum(float,float);
float sum(int,float);
main()
{
	int a,b;
	float x,y;
	int m;
	float n;
	cout<<"\nEnter the 2 integer number =";
	cin>>a>>b;
	cout<<"\nEnter the 2 float number =";
	cin>>x>>y;
	cout<<"\nEnter the integer and float number =";
	cin>>m>>n;
	cout<<"Sum of two integer value ="<<sum(a,b)<<endl;
	cout<<"Sum of two float value ="<<sum(x,y)<<endl;
	cout<<"Sum of integer and float value ="<<sum(m,n)<<endl;
	getch();	
}

int sum(int p,int q)
{
	return(p+q);
}

float sum(float x,float y)
{
	return(x+y);
}

float sum(int m,float n)
{
	return(m+n);
}


