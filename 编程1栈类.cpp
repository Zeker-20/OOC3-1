#include <iostream>
using namespace std;
#define MAXSIZE 10
class Stack
{
private:
	int stack[MAXSIZE];
	int* top;
	int* base;
public:
	
	Stack()
	{
		top = stack;
		base =stack;
	}
	void Push(int x);
	void Pop();
	bool Iffull();
	bool Ifempty();
	int Size();
};

void Stack::Push(int x)
{
	if(!Iffull())
	
		*top = x;
		top++;
	
}

void Stack::Pop()
{ 
	
	if (!Ifempty())
		top--;
	
	int i = 0;
	while (top != &stack[i])
	{
		cout << stack[i]<<"\t";
			i++;	
	}
	cout << endl;
}

bool Stack::Iffull()
{
	if ((top - base)==10)
		return true;
	else
		return false;
}

bool Stack::Ifempty()
{
	if (top==base)
		return true;
	else
	    return false;
}

int Stack::Size()
{
	int size = top - base;
	return size;
}
int main()
{
	Stack stack;
	int x;
	cout << "please put in numbers:" << endl;
	cin >> x;
	while (x != 0)
	{
		stack.Push(x);
		cin >> x;
	}
		
	stack.Pop();
	int flag1=stack.Ifempty();
	if (flag1 == 0)
		cout << "this stack isn't empty" << endl;
	int flag2=stack.Iffull();
	if (flag2 ==0)
		cout << "this stack isn't full" << endl;
	int size = stack.Size();
	cout << "the size of the stack is:" ;
	cout << size << endl;
	return 0;
}
