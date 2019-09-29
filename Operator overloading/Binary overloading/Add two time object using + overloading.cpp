#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	private:
		int h,m,s;
	public:
		void getdata()
		{
			cout<<"Enter hour, minute and second ";
			cin>>h>>m>>s;
			}	
		void show()
		{
			cout<<" The Time is ="<<h<<":"<<m<<":"<<s<<endl;
			}	
		time operator +(time t)
		{
			time temp;
			temp.s=s+t.s;
			temp.m=m+t.m+(temp.s/60);
			temp.s=temp.s%60;
			temp.h=h+t.h+(temp.m/60);
			temp.m=temp.m%60;
			return(temp);
			}	
};
main()
{
	time t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t1.show();
	t2.show();
	t3=t1+t2;
	t3.show();
	getch();
}
