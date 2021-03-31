//20318 최윤기
#include <iostream>
using namespace std;

int sum(int a, int i)
{
	cin >> a;
	if (a == 0)
	{
		return (i);
	}
	else
	{
		if (i < a)
		{
			i = a;
			return sum(a, i);
		}
		else
		{
			return sum(a, i);
		}
	}
}

int main()
{
	int a = 1;
	int i = 1;
	cout << "숫자 입력이 완료가 되면 0을 입력하세요" << endl;
	cout << sum(a, i);
}