#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
	int i,m,j,d1_sum,d2_sum,a[5][5];
	public:
		matrix()   //default contructor
		{
			d1_sum=0;
			d2_sum=0;
		}
		
		void calculate()
		{
			cout<<"\n enter the size of matrix :";
			cin>>m;
			cout<<"\n enter the elements of matrix in row wise : ";
			for(i=0;i<3;i++)
			{
				for(j=0;j<m;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"\n lements of matrix in row : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<m;j++)
				{
					cout<<a[i][j]<<"\t\t";
				}
				cout<<endl;
			}
		}
		
		void show()
		{
		   for(i=0;i<3;i++)
			{
				for(j=0;j<m;j++)
				{
					if(i==j)
					d1_sum=d1_sum+a[i][j];
					if(i+j==(m-1))
					d2_sum=d2_sum+a[i][j];
				}
			}
			cout<<"\n Sum of 1st diagonals elements : "<<d1_sum;
			cout<<"\n Sum of 2nd diagonals elements : "<<d2_sum;
		}
};

main()
{
	matrix obj;
	obj.calculate();
	obj.show();
	getch();
}
