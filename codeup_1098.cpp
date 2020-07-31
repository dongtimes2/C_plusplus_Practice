//코드업 1098번 문제 
#include <iostream>

using namespace std;

int main()
{
	//=======입력에 관한 정보=======
	//첫 줄에 격자판의 세로(h) 가로(w)가 공백을 두고 입력
	//두 줄에 놓을 수 있는 막대의 개수(n) 입력
	//셋 줄에 각 막대의 길이(l) 방향(d) 좌표(x,y)가 입력

	//=======코드 특이사항=======
	//막대에 의해 가려진 경우 1을 출력, 아닌 경우 0을 출력
	//막대의 방향 0은 가로, 1은 세로


	int h, w;
	int n;


	//배열 크기 입력
	cin >> h >> w;
	

	//최초 배열 생성
	int **arr = new int*[h];
	for (int i = 0; i < h; i++)
	{
		arr[i] = new int[w];
	}


	//배열 0으로 초기화
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			arr[i][j] = 0;
		}
	}


	//막대 개수 입력
	cin >> n;


	//막대 길이 방향 좌표 입력
	for (int i = 0; i < n; i++)
	{
		int l, d, x, y;
		cin >> l >> d >> x >> y;

		//방향이 가로일 때
		if (d == 0)
		{
			for (int j = 0; j < l; j++)
			{
				arr[x-1][y-1+j] = 1;
			}
		}

		//방향이 세로일 때
		else if(d == 1)
		{
			for (int j = 0; j < l; j++)
			{
				arr[x-1+j][y-1] = 1;
			}
		}
	}
	

	//배열 출력
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << arr[i][j] <<" ";
		}
		cout << endl;
	}

	return 0;
}



