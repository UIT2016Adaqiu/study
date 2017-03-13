#include<iostream>
using namespace std;
class Box
{
public:
	Box(int, int, int); //声明带参数的构造函数
	int volume();
private:
	int h;
	int w;
	int l;
};
Box::Box(int h1, int w1, int l1)
{
	h = h1;
	w = w1;
	l = l1;
}
int Box::volume()
{
	return (h*w*l);
}
int main()
{
	Box box1(12, 23, 45);
	cout << box1.volume() << endl;
	Box box2(13, 25, 55);
	cout << box2.volume() << endl;
	system("pause");
	return 0;
}