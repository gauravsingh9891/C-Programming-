#include<iostream>
#include<conio.h>
using namespace std;
class collage
{
	public:
		collage()
		{
			cout<<"\n Your collage is Maharaja Agrasen :";
		}
};
 class course:public collage
 {
 	public:
 		course()
 		{
 			cout<<"\n You enrolled in BCA course :";
		 }
 };
 
 class study_center:public course
 {
 	public:
 		study_center()
		{
			cout<<"\n Your collage code is : 07107";
		 } 
  };
  
  main()
  {
  	study_center obj;
  	getch();
  }
