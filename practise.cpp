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
		void Age()
		{
			int age;
			cout<<"Enter your Age: "<<endl;
			cin>>age;
			cout<<"Your Age is: "<<age<<endl;
		}
};
int main()
{
	simple s1;
	s1.Name();
	s1.Age();
	return 0;
}

