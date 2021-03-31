//20318 최윤기
#include <iostream>
using namespace std;

int sum(int i, int s)
{
	if (i / 10 == 0)
	{
		return s += (i % 10);
	}
	else
	{
		return sum(i = i / 10, s += (i % 10));
	}
}

int main()
{
	int a;
	int b = 0;
	cout << "4자리 이상의 수를 입력해 주세요" << endl;
	cin >> a;
	cout << sum(a, b);

}