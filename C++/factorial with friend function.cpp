#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	private:
		int n;
		void print();
		friend void fact(a obj);
		public:
			void enter(int p)
			{
				n=p;
			}
			
};
void a::print()
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"factorial of "<<n<<"is :"<<f;
}

void fact(a obj)
{
	obj.print();
}
int main()
{
	int n1;
	a obj1;
	cout<<"entre no. : ";
	cin>>n1;
	obj1.enter(n1);
	fact(obj1);
	
	getch();
	
}
