//코드업 1099번 문제 
#include <iostream>

using namespace std;

int main()
{
	// ======= 맵 기본 정보 =======
	// 0 갈 수 있는 곳
	// 1 벽 또는 장애물
	// 2 먹이
	// 9 개미가 이동한 경로

	// ======= 특이사항 =======
	// 개미는 (1,1)에서 출발함
	// 기본적으로 오른쪽으로 움직이며, 장애물이 있으면 아래로 한 칸 이동함 
	// 움직일 수 있는 경우의 수가 없는 경우 그 곳에 정지함


	int arr[100][100];

	int x = 1;
	int y = 1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[i][j];
		}
	}

	while (true)
	{
		//먹이를 찾은 경우
		if (arr[y][x] == 2)
		{
			arr[y][x] = 9;
			break;
		}

		//오른쪽으로 이동해야 하는 경우
		if (arr[y][x + 1] == 0 || arr[y][x + 1] == 2)
		{
			arr[y][x] = 9;
			++x;
		}

		//아래쪽으로 이동해야 하는 경우
		else if (arr[y + 1][x] == 0 || arr[y + 1][x] == 2)
		{
			arr[y][x] = 9;
			++y;
		}

		//막힌 경우
		else
		{
			arr[y][x] = 9;
			break;
		}

	}

	//출력
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}



