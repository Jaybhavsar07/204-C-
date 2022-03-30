#include<iostream.h>
#include<conio.h>
class swap
{
	private:
		int a,b,temp;
	public:
		void get();
		void show();
};
void swap::get()
{
	cout<<"enter the number:";
	cin>>a>>b;
}
void swap::show()
{
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping number is a:"<<a<<"\nb="<<b;
}
void main()
{
	clrscr();
	swap s;
	s.get();
	s.show();
	getch();
}
