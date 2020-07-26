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
	selectionSort(array, MAX_SIZE);

	//정렬된 배열 출력
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
