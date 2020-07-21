#include <iostream>

using namespace std;

int getInt();
char getOperator();
void printResult(int, char, int);


int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}

int getInt()
{
	while (true)
	{
		int x;
		cout << "������ �Է��Ͻÿ� : ";
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "�ùٸ��� ���� ���� �Դϴ�" <<endl;
		}
		else
		{
			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{
		char op;
		cout << "�����ڸ� �Է��Ͻÿ� (+, -) : ";
		cin >> op;

		if ((op == '+') || (op == '-'))
		{
			return op;
		}
		else
		{
			cout << "�ùٸ��� ���� ������ �Դϴ�"<<endl;
		}
	}
}

void printResult(int x, char op , int y)
{
	if (op == '+')
	{
		cout << "����� " << x + y << "�Դϴ�";
	}
	
	else if (op == '-')
	{
		cout << "����� " << x - y << "�Դϴ�";
	}
}