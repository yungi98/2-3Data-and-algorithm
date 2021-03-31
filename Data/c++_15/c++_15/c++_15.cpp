//20318 최윤기
#include <iostream>
using namespace std;

int sum(int a)
{
	if (a == 0)
	{
		return 0;
	}
	else
	{
		cout << a << endl;
		return sum(a - 1);
	}
}

int main()
{
	int a;
	cin >> a;
	sum(a);
}