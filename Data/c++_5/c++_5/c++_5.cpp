//20318 최윤기
#include <iostream>
using namespace std;

int gus(int a)
{
    return (((1 + a) * a) / 2);
}

int main()
{
    int aa;
    cout << "1부터 n까지의 수를 더합니다." << endl;
    cin >> aa;
    cout << "합은 : " << gus(aa);
}