#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	double netIncome;
	double result;

	cin >> a >> b;

	int *arr = new int[b];

	for (int i = 0; i < b; i++)
	{
		cin >> arr[i];
	}

	result = a;

	for (int i = 0; i < b; i++)
	{
		if (arr[i] > 0)
			result *= (arr[i] * 0.01) + 1;

		else
			result *= (100 + arr[i])*0.01;
	}

	netIncome = result - a;

	cout << fixed;
	cout.precision(0);
	cout << netIncome << endl;

	if (netIncome > 0)
		cout << "good";

	else if (netIncome == 0)
		cout << "same";

	else
		cout << "bad";

	return 0;
}