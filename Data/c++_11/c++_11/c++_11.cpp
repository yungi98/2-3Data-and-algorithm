//20318 최윤기
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    if (a == b)
    {
        return b;
    }
    else if (a < b)
    {
        return sum(a + 1, b);
    }
    else
    {
        return sum(a - 1, b);
    }
}

int main()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n;
    }
    else if (n < 100)
    {
        int d = (n / 10) + ((n % 10) * 10);
        cout << sum(n, d);
    }
    else if (n < 1000)
    {
        int d = (n / 100) + ((n % 100) - (n % 10)) + ((n % 10) * 100);
        cout << sum(n, d);
    }
}