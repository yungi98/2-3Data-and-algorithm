//20318 최윤기
#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main()
{
	int a = 0;

	cout << "세개의 정수를 입력해주세요." << endl;

	for (int i = 1; i <= 3; i++)
	{
		cin >> a;
		s.push(a);
	}

	for (int i = 1; i <= 3; i++)
	{
		cout << s.top() << " ";
		s.pop();
	}
}