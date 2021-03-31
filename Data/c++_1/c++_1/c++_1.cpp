//20318 최윤기
#include <iostream>
using namespace std;

int main()
{
    char identity[14];
    cout << "주민등록번호 13자리를 '-' 없이 입력하세요 : ";
    cin >> identity;

    if (identity[6] % 2 == 1)
        cout << "남자" << endl;
    else cout << "여자" << endl;

    int year = (identity[0] - 48) * 10 + (identity[1] - '0');
    year += identity[6] <= '2' ? 1900 : 2000;
    cout << "출생 연도 : " << year << endl;
    cout << "나이 : " << 2020 - year + 1 << endl;

    cout << "출생지역 : ";
    int age = (identity[7] - 48) * 10 + (identity[8] - 48);
    if (age >= 0 && age <= 8)
        cout << "서울";
    else if (age >= 9 && age <= 12)
        cout << "부산";
    else if (age >= 13 && age <= 15)
        cout << "인천";
    else if (age >= 16 && age <= 18)
        cout << "경기도 주요 도시";
    else if (age >= 19 && age <= 25)
        cout << "그 밖의 경기도";
    else if (age >= 26 && age <= 34)
        cout << "강원도";
    else if (age >= 35 && age <= 39)
        cout << "충천북도";
    else if (age >= 40 && age <= 47)
        cout << "충청남도";
    else if (age >= 48 && age <= 54)
        cout << "전라북도";
    else if (age >= 55 && age <= 66)
        cout << "전라남도";
    else if (age >= 67 && age <= 90)
        cout << "경상도";
    else
        cout << "지역에 생존하지 않습니다.";

    int sum = 0;
    int sum2 = (identity[12] - 48);
    int a = 2;

    for (int i = 0; i < 12; i++, a++)
    {
        sum += (identity[i] - 48) * a;
        if (a == 9)
        {
            a = 1;
        }
    }
    if (sum2 == (11 - (sum % 11)) % 10)
    {
        cout << endl << "주민등록번호가 유효합니다.";
    }
    else
        cout << endl << "주민등록번호가 유효하지 않는 번호입니다.";
}