//20318 최윤기
#include <iostream>
using namespace std;

int sum(int a)
{
	if (a == 10)
	{
		return 0;
	}
	else
	{
		for (int i = 1; i < 10; i++)
		{
			cout << a << " x " << i << " = " << a * i << endl;
		}
		return sum(a + 1);
	}
}

int main()
{
	int a = 1;
	sum(a);
}