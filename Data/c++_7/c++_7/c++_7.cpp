//20318 최윤기
#include <iostream>
using namespace std;

int Factorial(int n)
{
    int m = 1;
    for (int i = 1; i <= n; ++i)
        m *= i;
    return m;
}

int main()
{
    int a;
    cin >> a;
    cout << "1부터" << a << "까지의 곱은 " << Factorial(a) << "입니다." << endl;
}