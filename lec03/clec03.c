#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>

int main()
{
	/*
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2); //����
	result2 = (num1 < num2); //��
	result3 = (num1 >= num2); //����
	result4 = (num1 <= num2); //��

	printf("result1�� ����� �� %d \n", result1);
	printf("result2�� ����� �� %d \n", result2);
	printf("result3�� ����� �� %d \n", result3);
	printf("result4�� ����� �� %d \n", result4);
	*/

	
	//�������� �켱����
	/*
	
		y > (10 + 1) ���� �����ڴ� ��κ� �����������̴�.

	*/
	
	//printf("result5�� ����� �� %d \n", num1 < num2 + 10); // ���� ���� ����� ���� �Ѵ�.
	//printf("result6�� ����� �� %d \n", (num1 < num2) + 10); // ��ȣ �� ������ ���� �Ѵ�.

	//�������
	//==
	//!=

	//1==1 ��
	//1==2 ����

	//1!=1 ����
	//1!=2 ��

	//char a = 'a';
	//char b = 'b';

	//printf("char 'a'�� �� %c(ASCII %d)�� char 'b'�� �� %c(ASCII %d)�� �����ϴ�. : %d \n\n", a, a, b, b, a == b);
	//printf("char 'a'�� �� %c(ASCII %d)�� char 'b'�� �� %c(ASCII %d)�� ���� �ʽ��ϴ�. : %d", a, a, b, b, a != b);

	// �� ������ - 0�� ������ �����̰�, 0�̿��� ��(1����)�� ��� ���̴�.
/*
	char num1 = 2, num2 = 3, num3 = 5;
	char r1, r2, r3, r4, r5;

	r1 = (num1 > 0) && (num2 < 10);
	r2 = (num2 <= 2) && (num3 > 5);
	r3 = (num1 > 0) && (num2 != 3);


	printf("r1�� �� r1=%d !r1=%d\n", r1, !r1);
	printf("r2�� �� r2=%d !r2=%d\n", r2, !r2);
	printf("r3�� �� r3=%d !r3=%d\n", r3, !r3);

	printf("%d\n", !0); // 0�� ������ �����̰�, 0�̿��� ��(1����)�� ��� ���̴�.
	printf("%d\n", !- 10); //0�� ������ �����̰�, 0�̿��� ��(1����)�� ��� ���̴�.
	printf("%d\n", !99); //0�� ������ �����̰�, 0�̿��� ��(1����)�� ��� ���̴�.
	printf("%d\n", !0.22); //0�� ������ �����̰�, 0�̿��� ��(1����)�� ��� ���̴�.

*/
	/*
	char num1 = 2, num2 = 3;
	char r1, r2;

	//r1 = (++num1 == 3) | (--num2 > 3); //�� | ����
	r1 = (--num2 > 3) || (++num1 == 2); //���� || ��
	//r1 = (--num2 > 3) & (++num1 == 2); //���� & ��
	//r2 = (num4++ == 2) && (num5-- > 3); //�� && ����

	printf("num1=%d, num2=%d, %d\n", num1, num2, r1);
	*/

	/*
	//1) if
	if (����) {
		//������ '��'�϶� ����
	}
	
	//2) if else
	if (����) {
		//������ '��'�϶� ����
	}
	else {
		//������ '����'�϶� ����
	}

	//3) if, ~else if, ~else
	if (����) {
		//������ '��'�϶� ����
	}
	else if (����2) {
		//����2�� '��'�϶� ����
	}
	else if (����3) {
		//����3�� '��'�϶� ����
	}
	else {
		//���� ������ ��� �����϶� ����Ǵ� ������
	}
	*/
/*
	short a = 256;

	if (a % 10 == 0) {
		printf("%d(��)�� 10�� ����Դϴ�.\n", a);
	}
	else if (a % 5 == 0){
		printf("%d(��)�� 5�� ����Դϴ�.\n", a);
	}
	else if (a % 2 == 0) {
		printf("%d(��)�� 2�� ����Դϴ�.\n", a);
	}
	else if (a % 1 == 0) {
		printf("%d(��)�� 1�� ����Դϴ�.\n", a);
	}
	else {
		printf("����\n.", a);
	}
*/
/*
	int input;

	printf("�� �� �޴��� �����Ͻðڽ��ϱ�?\n");
	printf("\t(1)¥���\n");
	printf("\t(2)«��\n");
	printf("\t(3)������\n");
	printf("��ȣ ����: ");

	scanf("%d", &input);

	printf("------------------------------\n");

	switch (input)
	{
		case 1:
			printf("¥����� 5000���Դϴ�.\n");
			break;

		case 2:
			printf("«���� 6000���Դϴ�.\n");
			break;

		case 3:
			printf("�������� 20000���Դϴ�.\n");
			break;

		default:
			printf("���� �޴��Դϴ�.\n");
	}

	printf("�����մϴ�.\n");

	return 0;
*/

/*
	char input;

	printf("�� �� �޴��� �����Ͻðڽ��ϱ�?\n");
	printf("\t(1)¥���\n");
	printf("\t(2)«��\n");
	printf("\t(3)������\n");
	printf("��ȣ ����: ");

	scanf("%d", &input);

	printf("------------------------------\n");

	if (input == 1) {
		printf("¥����� 5000�� �Դϴ�.\n");
	}
	else if (input == 2) {
		printf("«���� 6000���Դϴ�.\n");
	}
	else if (input == 3) {
		printf("�������� 20000���Դϴ�.\n");
	}
	else {
		printf("���� �޴��Դϴ�.\n");
	}

	printf("�����մϴ�.\n");

	return 0;
	*/
	/*
	int a = -10;
	char result = a > 0;
	char result2;

	if (result) {
		printf("a(%d)�� ����Դϴ�.",a);
		result2 = 10;
	}
	else {
		printf("a(%d)�� �����Դϴ�.",a);
		result2 = -10;
	}

	printf("result2 = %d", result2);
	*/
/*
	int num = 0, con = 0;

	printf("������ �Է����ּ���.");
	scanf("%d", &num);

	con = num > 0 ? num : -num;
	//con = num > 0 ? num : num * -1;

	printf("%d�� ���밪�� %d�Դϴ�.", num, con);

	return 0;
	*/
	
	

	//while (i > 0) {
		//printf("i=%d\n", i--);
	//}

	//do {
	//	printf("i=%d\n", i--);
	//} while (i > 0);

	//for (int i = 0; i < 100; i++) {
		//printf("i=%d, %d * 2 = %d\n", i, i, i * 2);
	//}

	//int z = 0;
	//for (; z < 100; z++) {
	//	printf("i=%d, %d * 2 = %d\n", z, z, z * 2);
	//}

	//int z = 0;

	//for (; z < 100;) {
	//	printf("i=%d, %d * 2 = %d\n", z, z, z * 2);
	//	z++;
	//}

	//while (z < 100) {
		//printf("i=%d, %d * 2 = %d\n", z, z, z * 2);
		//z++;
	//}
/*

	int max = 100;

	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) break;
		printf("¦�� %d\n", i);
	}

	return 0;

	*/

	for (int x = 2; x <= 9; x++) {
		printf("%d�� =============\n", x);
		for (int y = 1; y <= 9; y++) {
			printf("%d x %d = %d\n", x, y, x * y);
		}
	}
	return 0;
}