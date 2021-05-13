//20318 최윤기
#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> num;
stack<char> num2;

int main()
{
	cout << "수를 입력해 주세요." << endl;
	string su;
	getline(cin, su);

	for (int i = 0; i <= su.size() - 1; i++)
	{
		num.push(su[i]);
	}
	for (int j = 1; !num.empty(); j++)
	{
		if (j == 4)
		{
			num2.push(',');
			j = 1;
		}
		num2.push(num.top());
		num.pop();
	}

	for (; !num2.empty(); )
	{
		cout << num2.top();
		num2.pop();
	}
}
