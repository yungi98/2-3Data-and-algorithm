//20318 최윤기
#include <iostream>
using namespace std;

int sum(int a)
{
    if (a == 1)
        return 1;
    else
        return (sum(a - 1) + a);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}
