#include<iostream>
#include<conio.h>
using namespace std;
class plus 
{
	private:
		int x;
	public:
		plus()
		{
			x=0;
			}	
		~plus()
		{
			}	
		void get()
		{
			cout<<"\n Enter the number =";
			cin>>x;
				}
		void show()
		{
			cout<<"\n sum of the number is ="<<x;
						}				
		plus operator +(plus m)
		{
			plus temp;
			temp.x=x+m.x;
			return(temp);
						}				
						
}obj1,obj2,obj3;;

main()
{
	obj1.get();
	obj2.get();
	obj3=obj1+obj2;
	obj3.show();
	getch();
}
