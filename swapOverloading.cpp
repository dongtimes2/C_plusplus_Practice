#include <iostream>

using namespace std;

void swap(int, int);
void swap(double, double);

int main()
{
	int a, b;
	double c, d;

	cout << "�� ���� �Է� : ";
	cin >> a >> b;
	swap(a, b);
	cout << "�� �Ǽ� �Է� : ";
	cin >> c >> d;
	swap(c, d);

	return 0;
}

void swap(int x, int y)
{
	cout << "�ٲ� ���� �� : " << y << ", " <<  x << endl;
}

void swap(double x, double y)
{
	cout << "�ٲ� �Ǽ� �� : " << y << ", " << x << endl;
}