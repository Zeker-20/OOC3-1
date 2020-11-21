#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
class Student
{
public:
	char  name[10];
	bool  gender;
	char num[12];
	char birth[8];
	char address[20];
	float score[6];
	Student();
	Student(char  na[10], bool g, char nu[12], char b[8], char a[20], float s[6]);
	Student(const Student &student);
	void  Getinform();
	void  Changeinform();
	void  Display();
	~Student();
};
Student::Student()
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		if (i < 6)
		{
			this->score[i] = 0;
		}
		if (i < 8)
		{
			this->birth[i] = '0';
		}
		if (i < 10)
		{
			this->name[i] = '0';
		}
		if (i < 12)
		{
			this->num[i] = '0';
		}
		this->address[i] = '0';
	}
	this->gender = 0;
	//this->address[21] = '\0';
	//this->birth[9] = '\0';
	//this->name[11] = '\0';
	//this->num[13] = '\0';
	cout << "无参构造函数被调用" << endl;
}
Student::Student(char  na[101], bool g, char nu[12], char b[8], char a[20], float s[6])
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		if (i < 6)
		{
			this->score[i] = s[i];
		}
		if (i < 8)
		{
			this->birth[i] = b[i];
		}
		if (i < 10)
		{
			this->name[i] = na[i];
		}
		if (i < 12)
		{
			this->num[i] = nu[i];
		}
		this->address[i] = a[i];
	}
	this->gender = g;
	cout << "有参构造函数被调用" << endl;
}
Student::Student(const Student &student)
{
	int i;
	for (i = 0; i < 20; i++)
	{
		if (i < 6)
		{
			this->score[i] = student.score[i];
		}
		if (i < 8)
		{
			this->birth[i] = student.birth[i];
		}
		if (i < 10)
		{
			this->name[i] = student.name[i];
		}
		if (i < 12)
		{
			this->num[i] = student.num[i];
		}
		this->address[i] = student.address[i];
	}
	this->gender = student.gender;
	cout << "拷贝构造函数被调用" << endl;
}
void  Student::Getinform()
{
	bool flag = 1;
	int i;
	cout << "name:    " << name << endl;
	do 
	{
		cout << "what do you want? 1 for gender,2 for num,3 for birth,4 for address,5 for score" << endl;
		int x;
		cin >> x;
		if (x == 1)
			cout << "gender:  " << gender << endl;
		if (x == 2)
		{
			cout << "num:     " ;
	        for(i=0;i<12;i++)
	            cout<<this->num[i];
	        cout<< endl;
		}
		if (x == 3)
		{
			cout << "birth:   " ;
	        for(i=0;i<8;i++)
	            cout<<this->birth[i];
	        cout<< endl;
		}
		if (x == 4)
		{
			cout << "address: " ;
	        for(i=0;i<20;i++)
	            cout<<this->address[i];
	        cout<< endl;
		}
		if (x == 5)
		{
			int i = 0;
			cout << "score:   ";
			for (i = 0; i < 6; i++)
			{
				cout << score[i]<<"     ";
			}
			cout << endl;
		}
		cout << "1 for continue,0 for over" << endl;
		cin >> flag;
	} while (flag);	
}
void  Student::Changeinform()
{
	cout << "what do you want to change? 1 for gender,2 for num,3 for birth,4 for address,5 for score" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		cout << "please input new gender" << endl;
		bool g;
		cin >> g;
		this->gender = g;
		cout << "change finished" << endl;
	}
	if (x == 2)
	{
		cout << "please input new num" << endl;
		char nu[12];
		cin >> nu;
		for (int i = 0; i < 12; i++)
		{
			this->num[i] = nu[i];
		}
		cout << "change finished" << endl;
	}
	if (x == 3)
	{
		cout << "please input new birthday" << endl;
		char b[8];
		cin >> b;
		for (int i = 0; i < 8; i++)
		{
			this->birth[i] = b[i];
		}
		cout << "change finished" << endl;
	}
	if (x == 4)
	{
		cout << "please input new address" << endl;
		char ad[20];
		cin >> ad;
		for (int i = 0; i < 20; i++)
		{
			this->address[i] = ad[i];
		}
		cout << "change finished" << endl;
	}
	if (x == 5)
	{
		cout << "please input new score" << endl;
		char s[6];
		cin >> s;
		for (int i = 0; i < 6; i++)
		{
			this->score[i] = s[i];
		}
		cout << "change finished" << endl;
	}
}
void  Student::Display()
{
	int i = 0;
	cout << "name:    " ;
	for(i=0;i<10;i++)
	    cout<<this->name[i];
	cout<< endl;
	cout << "gender:  " << this->gender << endl;
	cout << "num:     " ;
	for(i=0;i<12;i++)
	    cout<<this->num[i];
	cout<< endl;
	cout << "birth:   " ;
	for(i=0;i<8;i++)
	    cout<<this->birth[i];
	cout<< endl;
	cout << "address: " ;
	for(i=0;i<20;i++)
	    cout<<this->address[i];
	cout<< endl;
	cout << "score:   ";
	for (i = 0; i < 6; i++)
	{
		cout << this->score[i]<<"     ";
	}
	cout << endl;
}
Student::~Student()
{
	cout << "析构函数被调用" << endl;
}
int main()
{
	char name[10] = { 0 };
	bool gender;
	char address[20] = { 0 };
	char birthday[8] = { 0 };
	char num[12] = { 0 };
	float score[6];
	cout << "please input A's name"<<endl;
	cin >> name;

	cout << "please input A's gender" << endl;
	cin >> gender;
	
	cout << "please input A's num" << endl;
	cin >> num;
	
	cout << "please input A's birthday" << endl;
	cin >> birthday;
	
	cout << "please input A's address" << endl;
	cin >> address;
	
	cout << "please input A's score" << endl;
	for (int j = 0; j < 6; j++)
	{
		cin >> score[j];
	}
	Student A(name, gender, num, birthday, address, score);
	Student B(A);
	Student C;
	cout << "***************************************change A***********************************************" << endl;
	A.Changeinform();
	cout << "***************************************get information of B***********************************" << endl;
	B.Getinform();
	cout << "***************************************display A,B,C******************************************" << endl;
	cout<<"********************dispay A:"<<endl;
	A.Display();
	cout<<"********************dispay B:"<<endl;
	B.Display();
	cout<<"********************dispay C:"<<endl;
	C.Display();
	return 0;
}


