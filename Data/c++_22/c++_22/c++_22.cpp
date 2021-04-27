//20318 최윤기
#include <iostream>
#include <stack>
using namespace std;

stack<string> s;

int main()
{
	int a;
	string b;
	cout << "입력할 데이터의 개수를 입력해 주세요(n <= 1000)" << endl;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		s.push(b);
	}
	for (int j = 1; j <= a; j++)
	{
		cout << s.top();
		s.pop();
	}
}