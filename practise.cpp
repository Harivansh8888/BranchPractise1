#include<iostream>
using namespace std;
class simple
{
	public:
		void Name()
		{
			string name;
			cout<<"Enter First Name: "<<endl;
			cin>>name;
			cout<<"Your Name is: "<<name<<endl;
		}
};
int main()
{
	simple s1;
	s1.Name();
	return 0;
}

