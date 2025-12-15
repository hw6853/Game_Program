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

#pragma region 비트 연산자
    // 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.
    // AND = & , OR = | , XOR = ^ , NOT = ~

#pragma region AND 연산자
    // 두 개의 피연산자가 모두 1이면 1을 변환하는 연산자입니다.

    //int wisdom = 10;    // 0000 1010
    //int dexterity = 6;  // 0000 0110
    //                    // ----------
    //                    // 0000 0010

    //printf("wisdom & dexterity : %d\n", wisdom & dexterity);

#pragma endregion


#pragma region OR 연산자
        // 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자입니다.

        //int poison = 8;     // 0000 1000
        //int freeze = 12;    // 0000 1100
        //                    // ---------
        //                    // 0000 1100

        //printf("poison | freeze : %d\n ", poison | freeze);
#pragma endregion


#pragma region XOR 연산자
    // 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
    // 1을 반환하는 연산자입니다.

    //int idle = 15;      // 0000 1111
    //int battle = 6;     // 0000 0110
    //                    // ---------
    //                    // 0000 1001

    //printf("idle ^ battle : %d\n", idle ^ battle);


#pragma endregion

#pragma region NOT 연산자
    // 하나의 비트를 반전시키는 연산자입니다.

    //int status = 13; // 0000 1101
    //                 // ---------
    //                 // 1111 0010

    //printf("~status : %d\n", ~status);

    // 첫 번째 비트는 부호를 나타내며, 첫 번째 빝크에
    // 이 있다면 값은 음수가 됩니다.

#pragma endregion

#pragma region 시프트 연산자
    // 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자입니다.


    int packet = 5; // 0000 0101;

    printf("packet 변수를 왼쪽으로 2칸 이동한 결과 : %d\n", packet << 2);

    printf("packet 변수를 오른쪽으로 1칸 이동한 결과 : %d\n", packet >> 1);
#pragma endregion

    // 메모리는 비트 단위로 데이터를 저장할 수 있으며,
    // 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion


#pragma endregion

}
