//20318 최윤기
#include <iostream>
using namespace std;

void HanoiTower(int num, char from, char by, char to)
{
    if (num == 1)
        cout << "원반 1을 " << from << "에서 " << to << "로 이동" << endl;
    else
    {
        // 3단계 중 1단계
        HanoiTower(num - 1, from, to, by);

        // 3단계 중 2단계
        cout << "원반 " << num << "을(를) " << from << "에서 " << to << "로 이동" << endl;

        // 3단계 중 3단계
        HanoiTower(num - 1, by, from, to);
    }
}

int main()
{
    // 기둥 A의 원반 3개를 기둥 B를 경유하여 기둥 C로 이동
    HanoiTower(3, 'A', 'B', 'C');
}