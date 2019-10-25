#include"iostream"
#include"conio.h"
using namespace std;
class inde
{
	private:
		int a,b;
		public:
			void get()
			{
				cout<<"\n enter the two number :\n";
				cout<<" ";
				cin>>a;
				cout<<" ";
				cin>>b;
			}
			
			void operator --()
			{
				a--;
				b--;
			}
			
			void operator ++()
			{
				a++;
				b++;
			}
			
			void show()
			{
				cout<<"\n A : "<<a;
				cout<<"\n B : "<<b;
			}
};

main()
{
	inde obj;
	obj.get();
	--obj;
	cout<<"\n After decrement \n";
	obj.show();
	++obj;
	++obj;
	cout<<"\n After Increment \n";
	obj.show();
	getch();
}
