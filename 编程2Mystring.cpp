#include "iostream"
#include "string"
using namespace std;

class Mystring
{
private:

public:
	Mystring(char *s1, char * s2);//将字符串s2连接在字符串s1的后面
	int lenght(char *p);//字符串长度
	string A,B,C,D,s1,s2,s3,s4,s5,len,str;
};


//将字符串s2连接在字符串s1的后面
Mystring::Mystring(char *s1, char * s2)
{
	char *p = s1;

	while (*p != '\0')
	{
		p++;
	}

	while (*s2 != '\0')
	{
		*p++ = *s2++;
	}
	*p = '\0';
}

//字符串长度
int length(char *p)
{
	int n = 0;
	while (*p != '\0')
	{
		n++;
		p++;
	}
	return n;
}


int main()
{
//将字符串s2连接在字符串s1的后面
	char str1[100] = "Hello ";
	char str2[] = "world!";

	Mystring(str1, str2);

	cout << str1 << endl;

	system("pause");
	cin.get();

//字符串比较大小

	string A("aBcdef");
	string B("AbcdEf");
	string C("123456");
	string D("123dfg");

	//下面是各种比较方法
	int m = A.compare(B); //完整的A和B的比较
	int n = A.compare(1, 5, B, 0, 2); //"Bcdef"和"AbcdEf"比较
	int p = A.compare(1, 5, B, 4, 2); //"Bcdef"和"Ef"比较
	int q = C.compare(0, 3, D, 0, 3); //"123"和"123"比较
	cout << "m = " << m << ", n = " << n << ", p = " << p << ", q = " << q << endl;


	system("pause");
	cin.get();

//字符串增删改查

		string s1, s2, s3;
		s1 = s2 = s3 = "1234567890";

		//增加
		s1.insert(5, "aaa");
		cout << s1 << endl;
		cin.get();

		//删除
		s2.erase(5);
		cout << s2 << endl;
		s3.erase(5,4);
		cout << s3 << endl;
		cin.get();

		//提取
		string s4= "first second third";
		string s5;
		s5 = s4.substr(6, 5);
		cout << s4 << endl;
		cout << s5 << endl;

        system("pause");
		cin.get();


//字符串反转
		string str = "Hello,world";
		reverse(str.begin(), str.end());
		cout << str<<endl;

		system("pause");
		cin.get();

//字符串长度
		string len="Hello, world";
		cout << len << endl;
		cout<<"the string's characters are:"<<len.length()<<endl;

		cout << "the end" << endl;
		system("pause");
	    return 0;
}
