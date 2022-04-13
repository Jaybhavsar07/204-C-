#include<iostream.h>
#include<conio.h>
class demo
{
private:
int a;
public:
friend void get(demo s);
};
void get(demo s)
{
 cout<<"enter value";
 cin>>s.a;
 cout<<s.a;

}
void main()
{
clrscr();
demo d;
get(d);
getch();
}
