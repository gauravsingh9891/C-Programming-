#include<iostream>
#include<conio.h>
using namespace std;

int m=10;  //global varible

main()
{
	int m=20;
	{
		int k=m;
		int m=30;
		cout<<"\n You have eneterd in inner block ";
		cout<<"\n k = "<<k;
		cout<<"\n m = "<<m;      //showing  value of m of inner loop
		cout<<"\n ::m  ="<<::m; //global m is calling here
	}	
	cout<<"\n\n You have entered in outer block ";
	cout<<"\n m = "<<m;  //showing value of in outer loop
	cout<<"\n ::m = "<<::m; //global m is calling here
	getch();
}
