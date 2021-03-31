//20318 최윤기
#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * Factorial(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << "1부터" << n << "까지의 곱은 " << Factorial(n) << "입니다." << endl;
}