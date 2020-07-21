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
		cout << "정수를 입력하시오 : ";
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "올바르지 않은 정수 입니다" <<endl;
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
		cout << "연산자를 입력하시오 (+, -) : ";
		cin >> op;

		if ((op == '+') || (op == '-'))
		{
			return op;
		}
		else
		{
			cout << "올바르지 않은 연산자 입니다"<<endl;
		}
	}
}

void printResult(int x, char op , int y)
{
	if (op == '+')
	{
		cout << "결과는 " << x + y << "입니다";
	}
	
	else if (op == '-')
	{
		cout << "결과는 " << x - y << "입니다";
	}
}