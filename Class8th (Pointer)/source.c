#include <stdio.h>

void main()
{
#pragma region 포인터 상수
	// 포인터 변수가 가리킼고 있는 주소 값을 변경할 수 
	// 없는 포인터입니다.

		//int a = 12;
		//int b = 20;

		//int * const f = &a;

		//printf("%p\n", f);
		//printf("%p\n", &a);

		////f = &b;

		//*f = 25;

		//printf("%d\n", a);


		/*int protein = 10;
		int fat = 20;

		int* const fixedReference = &protein;

		*fixedReference = 99;

		printf("fixedReference가 가리키는 값 : %d\n", *fixedReference);
		printf("protein 변수의 값 : %d\n", protein);*/

		// fixedReference = &fat;

		// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수 있지만, 다른 변수의
		// 주소를 새로 저장할 수는 없습니다.
#pragma endregion

}