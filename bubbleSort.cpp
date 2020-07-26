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
	//배열 선언
	int array[MAX_SIZE]; 

	//시드 생성
	srand(time(NULL));

	//배열 생성
	for (int i = 0; i < MAX_SIZE; i++)
	{
		array[i] = rand() % 100;
	}

	//오리지널 배열 출력
	cout << "Original Array Output" << endl;
	arrayOutput(array, MAX_SIZE);

	//배열 정렬
	bubbleSort(array, MAX_SIZE);

	//정렬된 배열 출력
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
