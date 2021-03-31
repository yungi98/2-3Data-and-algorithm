//20318 최윤기
#include <iostream>
using namespace std;

int sum(int a, int b)
{
	if (a < b) // a = 1 b = 10
	{
		if (a == b) // a와 b가 같으면 탈출
		{
			return 0;
		}
		else // 아닐경우 반복
		{
			if (a % 2 == 0) // 짝수일 경우
			{
				cout << a << endl;
				return sum(a + 1, b);
			}
			else // 홀수일 경우
			{
				return sum(a + 1, b);
			}
		}
	}
	else if (a > b) // a = 10 b = 1
	{
		if (a == b) // a와 b가 같으면 탈출
		{
			return 0;
		}
		else // 아닐경우 반복
		{
			if (b % 2 == 0) // 짝수일 경우
			{
				cout << b << endl;
				return sum(a, b + 1);
			}
			else // 홀수일 경우
			{
				return sum(a, b + 1);
			}
		}
	}
	else // 숫자 2개가 같을 경우
	{
		if (a % 2 == 0) // 짝수일 경우
		{
			cout << a << endl;
			return 0;
		}
		else // 홀수일 경우
		{
			return 0;
		}
	}
}

int main()
{
	int a;
	int b;
	cin >> a >> b;
	cout << endl;
	sum(a, b);
}