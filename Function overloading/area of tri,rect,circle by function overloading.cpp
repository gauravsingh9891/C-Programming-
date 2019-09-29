#include<iostream>
#include<conio.h>
using namespace std;
float cir(int);
float cir(float);
float rect(float,float);
int rect(int,int);
float rect(float,int);
float tri(float,float);
float tri(int,int);
float tri(float,int);
main()
{
	float l,b,ba,h,r;
	cout<<"Enter the radius ="<<endl;
	cin>>r;
	cout<<"Enter the Length and breath ="<<endl;
	cin>>l>>b;
	cout<<"Enter the base and height ="<<endl;
	cin>>ba>>h;
	cout<<"Area of Rectangle ="<<rect(l,b)<<endl;
	cout<<"Area of Circle ="<<cir(r)<<endl;
	cout<<"Area of Triangle ="<<tri(ba,h)<<endl;
	getch();
}

float rect(float p,float q)
{
	return(p*q);
}
 
int rect(int p, int q)
{
	return(p*q);
}

float rect(float p, int q)
{
	return(p*q);
}

float tri(float x,float y)
{
	return(0.5*x*y);
}

float tri(int x,int y)
{
	return(0.5*x*y);
}

float tri(float x,int y)
{
	return(0.5*x*y);
}

float cir(float l)
{
	return(3.14*l*l);
}

float cir(int l)
{
	return(3.14*l*l);
}
