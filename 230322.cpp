#include <iostream>
using namespace std;

/* 반지름 (r)을 입력받아 원의 넓이와 반지름을 구하는 함수 */
int Get_CircleArea()
{
    double r, pi, A, L;
    pi = 3.14;
    cout << "반지름을 입력하세요 >> ";
    cin >> r;
    A = r * r * pi;
    L = 2 * pi * r;
    cout << "반지름이" << r << "인 원의 넓이는" << A << "입니다." << endl;
    cout << "반지름이" << r << "인 원의 둘레길이는" << L << "입니다." << endl;

    return 0;
}

/* 3과목의 평균을 구하는 함수 */
double Get_Average()
{
    int kor = 100;
    int math = 98;
    int eng = 79;
    int sum = kor + math + eng;
    double avg = sum / 3.0;
    cout << "당신의 국어 점수는 " << kor << "입니다." << endl;
    cout << "당신의 수학 점수는 " << math << "입니다." << endl;
    cout << "당신의 영어 점수는 " << eng << "입니다." << endl;
    cout << "당신의 점수 합계는 " << sum << "입니다." << endl;
    cout << "당신의 점수 평균은 " << avg << "입니다." << endl;
    return 0;
}

/* 반올림 프로그램 : 원하는 자릿수 까지 정수화 처리 -> int를 취하면 소수점 버림 현상 활용 */
int BanOl_lim()
{
    float su;
    int n, i, imsi;

    cout << "실수를 입력하세요 >>> ";
    cin >> su;
    cout << "반올림 자릿수를 입력하세요 >>> ";
    cin >> n;

    for (i = 0; i < n; i++)
    { //
        su *= 10;
    }
    su += 5;
    imsi = (int)su / 10; // 반올림 되지 않는 부분은 / 연산을 함으로써 날림.
    su = (float)imsi;
    for (int i = 0; i < n - 1; i++)
    {
        su /= 10;
    }
    cout << "반올림 결과값은 " << su << "입니다." << endl;

    return 0;
}

/* int 자료형의 범위 */
int Size_int()
{
    int x = 23;
    int y = 0;
    y = x + 1;
    cout << x << "x + 1 = " << y << endl;

    return 0;
}

/* 변수 초기화의 필요성 */
int Initializing_Var()
{
    int a;
    a += 1;
    cout << "a의 값은 >>> " << a << endl;

    return 0;
}

/* 연산자우선순위 */
int abcd()
{
    int a = 10;
    cout << " a = " << a << endl;     // 10
    cout << " a++ = " << a++ << endl; // 10출력 11저장
    cout << " ++a = " << ++a << endl; // 12출력
    cout << " a-- = " << a-- << endl; // 12
    cout << " --a = " << --a << endl; // 10

    return 0;
}

/* boolean 연산자 :True / False */
int Get_Boolean()
{
    bool a = true;

    cout << "a의 값은 >> " << a << endl; // 1
    a = false;
    cout << "a의 값은 >> " << a << endl; // 0
    a = 1234;
    cout << "a의 값은 >> " << a << endl; // 1
    a = 0;
    cout << "a의 값은 >> " << a << endl; // 0

    return 0;
}

/* 관계형 연산자 */
int Relative_Const()
{
    bool a;
    a = 10 > 3;
    cout << "a의 값은 >> " << a << endl; // 1

    a = 13 <= 10;
    cout << "a의 값은 >> " << a << endl; // 0

    a = 20 != 20;
    cout << "a의 값은 >> " << a << endl; // 0

    a = (3 + 4) && (4 < 3);
    cout << "a의 값은 >> " << a << endl; // 0 : 하나라도 false면 무조건 false

    a = (3 + 4) || (4 < 3);
    cout << "a의 값은 >> " << a << endl; // 1

    return 0;
}

int main(void)
{

    // Get_CircleArea();
    // Get_Average();
    // BanOl_lim();
    // Initializing_Var();
    // abcd();
    // Get_Boolean();
    Relative_Const();

    return 0;
}