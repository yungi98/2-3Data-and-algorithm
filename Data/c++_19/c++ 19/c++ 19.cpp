//20318 최윤기
#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main()
{
	int64_t a = 0;

	cout << "10개 이하의 수를 입력해 주세요(처음 수 0 제외) " << endl;
	cin >> a;

	int as[10] = { };
	int ad[10] = {101,101,101,101,101,101,101,101,101,101};

	for (int i = 0; a != 0; i++)
	{
		as[i] = a / 10;
		as[i] = a % 10;
		a /= 10;
		s.push(as[i]);

		if (i >= 10)
		{
			cout << "수가 초과했습니다.";
			exit(0);
		}
	}
	
	for (int o = 0; !s.empty(); o++)
	{
		ad[o] = s.top();
		s.pop();
	}

	for (int p = 9; p >= 0; p--)
	{
		if (ad[p] == 101)
		{

		}
		else
		{
			cout << ad[p];
		}
	}
}