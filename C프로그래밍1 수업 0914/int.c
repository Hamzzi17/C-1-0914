#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	// ������ ���� �ʰ�ȭ���� ���� ���·� ������ ������ ��� ����(�����Ⱚ���� ä����. ��� �޽��� �Ǵ� ������ ����)
//	int num1, num2;		// ���� num1, num2�� ����
//	int num3 = 30, num4 = 40;		// ���� num3, num4�� ���� �� �ʱ�ȭ
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
// // ������
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
//	// ����, ���� ������
//	int num1 = 12;
//	int num2 = 12;
//
//	printf("num1: %d \n", num1);
//	printf("num1++: %d \n", num1++);	// ���� ����
//	printf("num1: %d \n\n", num1);
//	printf("num2: %d \n", num2);
//	printf("++num2: %d \n", ++num2);	// ���� ����
//	printf("num2: %d \n\n", num2);
//
//	return 0;
//}

//int main(void)
//{
//	// �� ������
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

// �������� �뷫���� �켱 ���� : ����-���-��-��-����-����

// &num : num�� �����ϴ� �ּ��� ������ ���� ������� �ǹ�
// scanf ���� ���� ���ϴ� ��� 1. �ڵ� �� ���ٿ� #define _CRT_SECURE_NO_WARNINGS �߰�. 2. Project ��Ŭ�� C/C++���� SDL �˻� �ƴϿ� ����.

//int main(void)
//{
//	int result;
//	int num1, num2;
//	
//	printf("���� one: ");
//	scanf("%d", &num1);
//	printf("���� two: ");
//	scanf("%d", &num2);
//
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//
//	return 0;
//}

//int main(void)
//{
//	// 8������ 16������ �̿��� ������ ǥ��
//	int num1 = 0xA7, num2 = 0x43;
//	int num3 = 032, num4 = 024;
//
//	printf("0xA7�� 10���� ���� ��: %d \n", num1);
//	printf("0x43�� 10���� ���� ��: %d \n", num2);
//	printf(" 032�� 10���� ���� ��: %d \n", num3);
//	printf(" 024�� 10���� ���� ��: %d \n", num4);
//
//	printf("%d-%d=%d \n", num1, num2, num1 - num2);
//	printf("%d+%d=%d \n", num3, num4, num3 + num4);
//
//	return 0;
//}

//int main(void)
//{
//	// AND ����
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = 20;		// 00000000 00000000 00000000 00010100
//	int num3 = num1 & num2;		// num1�� num2�� ��Ʈ���� & ����
//	printf("AND ������ ���: %d \n", num3);		// 00000000 00000000 00000000 000 00100 = 4
//
//	return 0;
//}

//int main(void)
//{
//	// OR ����
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = 20;		// 00000000 00000000 00000000 00010100
//	int num3 = num1 | num2;		// num1�� num2�� ��Ʈ���� | ����
//	printf("OR ������ ���: %d \n", num3);		// 00000000 00000000 00000000 000 11111 = 31
//
//	return 0;
//}

//int main(void)
//{
//	// XOR ����
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = 20;		// 00000000 00000000 00000000 00010100
//	int num3 = num1 ^ num2;		// num1�� num2�� ��Ʈ���� ^ ����
//	printf("XOR ������ ���: %d \n", num3);		// 00000000 00000000 00000000 000 11011 = 27
//
//	return 0;
//}

//int main(void)
//{
//	// NOT ����
//	int num1 = 15;		// 00000000 00000000 00000000 00001111
//	int num2 = ~num1;
//	printf("NOT ������ ���: %d \n", num2);		// 11111111 11111111 11111111 11110000 = -16
//
//	return 0;
//}

// ���� 5. �Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���. (num1-num2) * (num2+num3) * (num3%num1)
int main(void)
{
	int num1, num2, num3;
	int result;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("������ : %d \n", result);

	return 0;
}