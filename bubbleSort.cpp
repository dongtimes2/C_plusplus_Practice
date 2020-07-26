//bubbleSort
#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_SIZE 10

using namespace std;

void arrayOutput(int array[], int size);
void bubbleSort(int array[], int size);

int main()
{
	//�迭 ����
	int array[MAX_SIZE]; 

	//�õ� ����
	srand(time(NULL));

	//�迭 ����
	for (int i = 0; i < MAX_SIZE; i++)
	{
		array[i] = rand() % 100;
	}

	//�������� �迭 ���
	cout << "Original Array Output" << endl;
	arrayOutput(array, MAX_SIZE);

	//�迭 ����
	bubbleSort(array, MAX_SIZE);

	//���ĵ� �迭 ���
	cout << "New Array Output" << endl;
	arrayOutput(array, MAX_SIZE);

	return 0;
}

void bubbleSort(int array[], int size)
{
	int tmp;
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

void arrayOutput(int array[], int size)
{
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		if (i != 0)
		{
			cout << ", ";
		}
		cout << array[i];
	}
	cout << "}" <<endl;
	cout << '\n';
}
