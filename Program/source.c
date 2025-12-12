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

    //// 1. 변수 = 변수 + 변수
    //int a = 1;
    //int b = 2;
    //printf("1번값은 %d = %d + %d\n", a + b, a, b);

    //// 2. 변수 = 변수 - 리터럴 상수
    //int c = 10;
    //printf("2번값은 %d = %d - %d\n", c - 3, c, 3);

    //// 3. 변수 = 변수 * 심볼릭 상수
    //const int K = 5;
    //int d = 4;
    //printf("3번값은 %d = %d * %d\n", d * K, d, K);

    //// 4. 변수 = 리터럴 상수 / 리터럴 상수
    //printf("4번값은 %d = %d / %d\n", 20 / 4, 20, 4);

    //// 5. 변수 = 심볼릭 상수 % 리터럴 상수
    //const int M = 13;
    //printf("5번값은 %d = %d %% %d\n", M % 5, M, 5);

#pragma endregion

#pragma region 비트
    // 데이터를 나타내는 최소의 단위이며, a 또는 1의
    // 조합으로 논리 걔산을 수행하는 단위입니다.

#pragma region (10)진수를 (20)진수로 변환하는 과정
    // 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
    // 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

    // 23을 2진수로 변환하는 과정
    // 1. 23 / 2 = 11...1
    // 2. 11 / 2 = 5...1
    // 3. 5 / 2 = 2...1
    // 4. 2 / 2 = 1...0
    // 5. 1 / 2 = 0...1

    // 따라서 23 = > 10111(2진수)
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
    // 1. byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

    // 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
    // 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.

#pragma endregion

#pragma endregion

}
