#include <stdio.h>

void main()
{
#pragma region 변수
    // 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.
#pragma endregion

#pragma region 자료형
    // 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.
#pragma endregion

#pragma region 변수의 이름 규칙
    // 1. 변수의 이름은 대소문자를 구분합니다.
    // 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
    // 3. 변수의 이름에는 공백이 포함될 수 없습니다.
    // 4. 변수의 이름으로 특수 문자 "_", "$"만 사용할 수 있습니다.
    // 5. 변수의 이름은 숫자로 시작할 수 없습니다.
#pragma endregion

#pragma region 서식 지정자
    // 서식 지정자 설명 주석...
#pragma endregion

#pragma region 상수
    // 상수 설명 주석...
#pragma endregion

#pragma region 산술 연산자

    // 1. 변수 = 변수 + 변수
    int a = 1;
    int b = 2;
    printf("1번값은 %d = %d + %d\n", a + b, a, b);

    // 2. 변수 = 변수 - 리터럴 상수
    int c = 10;
    printf("2번값은 %d = %d - %d\n", c - 3, c, 3);

    // 3. 변수 = 변수 * 심볼릭 상수
    const int K = 5;
    int d = 4;
    printf("3번값은 %d = %d * %d\n", d * K, d, K);

    // 4. 변수 = 리터럴 상수 / 리터럴 상수
    printf("4번값은 %d = %d / %d\n", 20 / 4, 20, 4);

    // 5. 변수 = 심볼릭 상수 % 리터럴 상수
    const int M = 13;
    printf("5번값은 %d = %d %% %d\n", M % 5, M, 5);

#pragma endregion
}