//20318 최윤기
#include <iostream>
using namespace std;

int gusno(int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return b + gusno(b - 1);
    }

}
int main()
{
    int bb;
    cin >> bb;
    cout << gusno(bb) << endl;
    return 0;
}