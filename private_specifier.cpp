//Rollno: 22A91A12B1
#include<iostream>
using namespace std;
//creating a class
class vehicle{
	//access specifier
	private:
		string car,engine,colour;
		//parameterised constructor
		public:vehicle(string car,string engine,string colour)
		{
			this->car=car;
			this->engine=engine;
			this->colour=colour;
		}
		//display function
		void display()
		{
			cout<<car<<endl<<engine<<endl<<colour;
		}
};
int main()
{
	vehicle s("Benz","20X","Black");
	s.display();
	return 0;
}
