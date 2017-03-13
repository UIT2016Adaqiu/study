#include<iostream>
using namespace std;
class love
{
private:
	int name;
	int age;
	int tall;
public:
	void meet()
	{
		cout << "name" << endl;
		cin >> name;
		cout << "age" << endl;
		cin >> age;
		cout << "tall" << endl;
		cin >> tall;
	}
	void know()
	{
		cout << "name=" << name << endl;
		cout << "age=" << age << endl;
		cout << "tall=" << tall << endl;
	}
};
int main()
{
	love liu;
	liu.meet();
	liu.know();
	system("pause");
	return 0;
}