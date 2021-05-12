//20318 최윤기
#include <iostream>
#include<string>
#include<stack>

using namespace std;

stack<int> num; //숫자
stack<char> op; //연산자
stack<int> num2; 
stack<char> op2;

void abr() {
	int a, b, result;
	b = num.top();
	num.pop();
	a = num.top();
	num.pop();
	if (op.top() == ')')
	{
		op.pop();
	}
	char opo = op.top();
	op.pop();

	if (opo == '*')
		result = a * b;
	else if (opo == '/')
		result = a / b;
	else if (opo == '+')
		result = a + b;
	else if (opo == '-')
		result = a - b;
	num.push(result);
}

void asd() {

}

int main()
{
	printf( "[수식 계산기]\n");

	string a;
	getline(cin, a);

	for (int i = 0; i <= a.length()-1; i++)
	{
		if (a[i] == '(')
		{
			op.push(a[i]);
		}
		else if (a[i] == ')')
		{
			op.push(a[i]);
			for (; op.top() != '('; )
			{
				abr();
			}
			op.pop();
		}
		else if (a[i] == '*') {
			op.push(a[i]);
		}
		else if (a[i] == '/') {
			op.push(a[i]);
		}
		else if (a[i] == '+') {
			op.push(a[i]);
		}
		else if (a[i] == '-') { 
			op.push(a[i]);
		}
		else{
			num.push(a[i] - 48);
		}
	}
	int m = 0;
	for (int j = 0; !op.empty(); j++) //우선순위
	{
		num2.push(num.top()); 
		op2.push(op.top());
		if (op.top() == '*')
		{
			abr();
			num2.push(num.top());
			num.pop();
		}
		else if (op.top() == '/')
		{
			abr();
			num2.push(num.top());
			num.pop();
		}
		else if (op.top() == '+' || op.top() == '-' ) // 3+5+6*4 24
		{
			m++;
			//op2.pop();
			//num.pop();
			//num2.push(num.top());
			//op2.push(op.top());
			num.pop();
			op.pop();
		}
	}
	if (m != 0)
	{
		for (int g = 1; g <= m; g++)
		{
			num.push(num2.top());
			op.push(op2.top());
			num2.pop();
			op2.pop();
		}
	}
	
	while (!op.empty())
	{
		abr();
	}

	cout << num.top();

	return 0;
}
