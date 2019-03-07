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
		void City()
		{
			string city;
			cout<<"Enter the City you belong: "<<endl;
			cin>>city;
			cout<<"Your City is: "<<city<<endl;
		}

};
int main()
{
	simple s1;
	s1.Name();
	s1.City();
	return 0;
}

