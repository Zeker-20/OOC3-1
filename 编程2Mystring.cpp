#include "iostream"
#include "string"
using namespace std;

class Mystring
{
private:

public:
	Mystring(char *s1, char * s2);//���ַ���s2�������ַ���s1�ĺ���
	int lenght(char *p);//�ַ�������
	string A,B,C,D,s1,s2,s3,s4,s5,len,str;
};


//���ַ���s2�������ַ���s1�ĺ���
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

//�ַ�������
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
//���ַ���s2�������ַ���s1�ĺ���
	char str1[100] = "Hello ";
	char str2[] = "world!";

	Mystring(str1, str2);

	cout << str1 << endl;

	system("pause");
	cin.get();

//�ַ����Ƚϴ�С

	string A("aBcdef");
	string B("AbcdEf");
	string C("123456");
	string D("123dfg");

	//�����Ǹ��ֱȽϷ���
	int m = A.compare(B); //������A��B�ıȽ�
	int n = A.compare(1, 5, B, 0, 2); //"Bcdef"��"AbcdEf"�Ƚ�
	int p = A.compare(1, 5, B, 4, 2); //"Bcdef"��"Ef"�Ƚ�
	int q = C.compare(0, 3, D, 0, 3); //"123"��"123"�Ƚ�
	cout << "m = " << m << ", n = " << n << ", p = " << p << ", q = " << q << endl;


	system("pause");
	cin.get();

//�ַ�����ɾ�Ĳ�

		string s1, s2, s3;
		s1 = s2 = s3 = "1234567890";

		//����
		s1.insert(5, "aaa");
		cout << s1 << endl;
		cin.get();

		//ɾ��
		s2.erase(5);
		cout << s2 << endl;
		s3.erase(5,4);
		cout << s3 << endl;
		cin.get();

		//��ȡ
		string s4= "first second third";
		string s5;
		s5 = s4.substr(6, 5);
		cout << s4 << endl;
		cout << s5 << endl;

        system("pause");
		cin.get();


//�ַ�����ת
		string str = "Hello,world";
		reverse(str.begin(), str.end());
		cout << str<<endl;

		system("pause");
		cin.get();

//�ַ�������
		string len="Hello, world";
		cout << len << endl;
		cout<<"the string's characters are:"<<len.length()<<endl;

		cout << "the end" << endl;
		system("pause");
	    return 0;
}
