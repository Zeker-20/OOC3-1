#include <iostream>
#include <math.h>
using namespace std;
class Triangle
{
private:
	double x;
	double y;
	double z;

public:
	Triangle()
	{
		cout << "无参构造函数被调用." << endl;
	}
	Triangle(double a, double b, double c)
	{
		x = a;
		y = b;
		z = c;
		cout << "有参构造函数被调用." << endl;
	}
	Triangle(const Triangle &r)
	{
		cout << "拷贝构造函数被调用." << endl;
	}
	~Triangle()
	{
		cout << "析构函数被调用." << endl;
	}
	bool triangle()
	{
		if (x + y > z&&x + z > y&&y + z > x)
			return true;
		else
			return false;
	}
	int type()
	{
		if (x*x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
			return 0;
		if (x*x + y * y > z * z && x * x + z * z > y * y && y * y + z * z > x * x)
			return 1;
		if (x*x + y * y < z * z || x * x + z * z < y * y || y * y + z * z < x * x)
			return 2;
	}
	double c()
	{
		return (x + y + z);
	}
	double s()
	{
		double p = (x + y + z) / 2;
		return(sqrt(p*(p - x)*(p - y)*(p - z)));
	}
};
int main()
{
	double x, y, z;
	double c, s;
	int f;
	cout << "enter three edges" << endl;
	cin >> x >> y >> z;
	Triangle N(x,y,z);
	f = N.type();
	if (f == 0)
		cout << "right triangle" << endl;
	if(f==1)
		cout << "acute triangle" << endl;
	if (f == 2)
		cout << "obtuse triangle" << endl;
	c = N.c();
	s = N.s();
	cout << "circumference=" <<c<< endl;
	cout << "square=" <<s<< endl;
	return 0;
}
