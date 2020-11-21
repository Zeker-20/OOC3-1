#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct POINT
{
	double x,y;
}P;
class dis;
class point
{
	P p;
public:
	point(P pp);
	point();
	point(point &pp);
	~point();
	//POINT get();
	void change(double xx,double yy);
	void print();
	friend dis;
	friend double distant(point& a, point& b);
};


point::point(P pp)
{
	p = pp;
}
point::point()//�޲ι����ʼ��ԭ��
{
	p.x = 0; p.y = 0;
}
point::point(point& pp)
{
	p = pp.p;
}
point::~point()
{
	cout << "point��������������\n";
}
void point::change(double xx, double yy)
{
	p.x = xx; p.y = yy;
}
void point::print()
{
	cout << p.x << p.y << endl;
}
double distant(point& a, point& b)
{
	cout << "��Ԫ����������\n";
	return sqrt((a.p.x - b.p.x) * (a.p.x - b.p.x) + (a.p.y - b.p.y) * (a.p.y - b.p.y));
}
class dis
{
	double leng;
public:
	~dis();
	dis();
	void dist(point& a, point& b);
	void print();
};
dis::dis()//��ʼ������Ϊ��
{
	leng = 0;
}
void dis::dist(point& a,point& b)
{
	cout << "��Ԫ���еĺ���������\n";
	leng = sqrt((a.p.x - b.p.x) * (a.p.x - b.p.x) + (a.p.y - b.p.y) * (a.p.y - b.p.y));
}
void dis::print()
{
	cout << leng << endl;
}
dis::~dis()
{
	cout << "dis����������������\n";
}
int main()
{
	POINT pp1,pp2;
	cin >> pp1.x >> pp1.y;
	cin >> pp2.x >> pp2.y;
	point p1(pp1);
	point p2(pp2);
	dis d;
	d.dist(p1, p2);
	cout << distant(p1, p2) << endl;
	d.print();
	return 0;
}