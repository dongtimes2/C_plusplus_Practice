//selectionSort
#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_SIZE 10

using namespace std;

void arrayOutput(int array[], int size);
void selectionSort(int array[], int size);

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
	selectionSort(array, MAX_SIZE);

	//���ĵ� �迭 ���
	cout << "New Array Output" << endl;
	arrayOutput(array, MAX_SIZE);

	return 0;
}

void selectionSort(int array[], int size)
{
	int tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
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
