//20318 최윤기
#include <iostream>
using namespace std;

int main()
{

    char name[1][4] = {  };
    cout << "3개의 문자열을 입력하세요 : ";
    cin >> name[0];

    cout << name[0][2] << name[0][1] << name[0][0] << endl;
}