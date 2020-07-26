#include <iostream>

using namespace std;

void swap(int, int);
void swap(double, double);

int main()
{
	int a, b;
	double c, d;

	cout << "두 정수 입력 : ";
	cin >> a >> b;
	swap(a, b);
	cout << "두 실수 입력 : ";
	cin >> c >> d;
	swap(c, d);

	return 0;
}

void swap(int x, int y)
{
	cout << "바뀐 정수 값 : " << y << ", " <<  x << endl;
}

void swap(double x, double y)
{
	cout << "바뀐 실수 값 : " << y << ", " << x << endl;
}