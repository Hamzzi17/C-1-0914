#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	// 변수의 값을 초가화하지 않은 상태로 변수를 선언할 경우 예시(쓰레기값으로 채워짐. 경고 메시지 또는 컴파일 오류)
//	int num1, num2;		// 변수 num1, num2의 선언
//	int num3 = 30, num4 = 40;		// 변수 num3, num4의 선언 및 초기화
//
//	printf("num1: %d, num2: %d \n", num1, num2);
//	num1 = 10;
//	num2 = 20;
//
//	printf("num1: %d, num2: %d \n", num1, num2);
//	printf("num3: %d, num4: %d \n", num3, num4);
//	return 0;
//}

//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int num3 = 30, num4 = 40;
//
//	printf("num1: %d, num2: %d \n", num1, num2);
//	printf("num3: %d, num4: %d \n", num3, num4);
//
//	return 0;
//}

//int main(void)
//{
//	int num1 = 9, num2 = 2;
//	printf("%d+%d=%d \n", num1, num2, num1 + num2);
//	printf("%d-%d=%d \n", num1, num2, num1 - num2);
//	printf("%d*%d=%d \n", num1, num2, num1 * num2);
//	printf("%d/%d \n", num1, num2, num1 / num2);
//	printf("%d %% %d \n", num1, num2, num1 % num2);
//
//	return 0;
//}

//int main(void)
//{
// // 연산자
//	int num1 = 2, num2 = 4, num3 = 6;
//	num1 += 3;
//	num2 *= 4;
//	num3 %= 5;
//	printf("Result: %d, %d, %d \n", num1, num2, num3);
//
//	return 0;
//}

//int main(void)
//{
//	// 증가, 감소 연산자
//	int num1 = 12;
//	int num2 = 12;
//
//	printf("num1: %d \n", num1);
//	printf("num1++: %d \n", num1++);	// 후위 증가
//	printf("num1: %d \n\n", num1);
//	printf("num2: %d \n", num2);
//	printf("++num2: %d \n", ++num2);	// 전위 증가
//	printf("num2: %d \n\n", num2);
//
//	return 0;
//}

//int main(void)
//{
//	// 논리 연산자
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == 10 && num2 == 12);
//	result2 = (num1 < 12 || num2>12);
//	result3 = (!num1);
//
//	printf("result1: %d \n", result1);
//	printf("result2: %d \n", result2);
//	printf("result3: %d \n", result3);
//
//	return 0;
//}

// 연산자의 대략적인 우선 순위 : 단항-산술-비교-논리-조건-대입

// &num : num이 참조하는 주소의 공간에 값을 넣으라는 의미
// scanf 관련 오류 피하는 방법 1. 코드 맨 윗줄에 #define _CRT_SECURE_NO_WARNINGS 추가. 2. Project 우클릭 C/C++에서 SDL 검사 아니오 설정.

//int main(void)
//{
//	int result;
//	int num1, num2;
//	
//	printf("정수 one: ");
//	scanf("%d", &num1);
//	printf("정수 two: ");
//	scanf("%d", &num2);
//
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//
//	return 0;
//}

//int main(void)
//{
//	// 8진수와 16진수를 이용한 데이터 표현
//	int num1 = 0xA7, num2 = 0x43;
//	int num3 = 032, num4 = 024;
//
//	printf("0xA7의 10진수 정수 값: %d \n", num1);
//	printf("0x43의 10진수 정수 값: %d \n", num2);
//	printf(" 032의 10진수 정수 값: %d \n", num3);
//	printf(" 024의 10진수 정수 값: %d \n", num4);
//
//	printf("%d-%d=%d \n", num1, num2, num1 - num2);
//	printf("%d+%d=%d \n", num3, num4, num3 + num4);
//
//	return 0;
//}

//int main(void)
//{
//	// AND 연산
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = 20;		// 00000000 00000000 00000000 00010100
//	int num3 = num1 & num2;		// num1과 num2의 비트단위 & 연산
//	printf("AND 연산의 결과: %d \n", num3);		// 00000000 00000000 00000000 000 00100 = 4
//
//	return 0;
//}

//int main(void)
//{
//	// OR 연산
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = 20;		// 00000000 00000000 00000000 00010100
//	int num3 = num1 | num2;		// num1과 num2의 비트단위 | 연산
//	printf("OR 연산의 결과: %d \n", num3);		// 00000000 00000000 00000000 000 11111 = 31
//
//	return 0;
//}

//int main(void)
//{
//	// XOR 연산
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = 20;		// 00000000 00000000 00000000 00010100
//	int num3 = num1 ^ num2;		// num1과 num2의 비트단위 ^ 연산
//	printf("XOR 연산의 결과: %d \n", num3);		// 00000000 00000000 00000000 000 11011 = 27
//
//	return 0;
//}

//int main(void)
//{
//	// NOT 연산
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = ~num1;
//	printf("NOT 연산의 결과: %d \n", num2);		// 11111111 11111111 11111111 11110000 = -16
//
//	return 0;
//}

// 문제 5. 입력 받은 세 개의 정수 num1, num2, num3을 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자. (num1-num2) * (num2+num3) * (num3%num1)
int main(void)
{
	int num1, num2, num3;
	int result;

	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연산결과 : %d \n", result);

	return 0;
}