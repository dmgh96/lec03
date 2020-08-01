#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>

int main()
{
	/*
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2); //거짓
	result2 = (num1 < num2); //참
	result3 = (num1 >= num2); //거짓
	result4 = (num1 <= num2); //참

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);
	printf("result4에 저장된 값 %d \n", result4);
	*/

	
	//연산자의 우선순위
	/*
	
		y > (10 + 1) 관계 연산자는 대부분 마지막순번이다.

	*/
	
	//printf("result5에 저장된 값 %d \n", num1 < num2 + 10); // 관계 보다 산술을 먼저 한다.
	//printf("result6에 저장된 값 %d \n", (num1 < num2) + 10); // 괄호 안 연산을 먼저 한다.

	//동등연산자
	//==
	//!=

	//1==1 참
	//1==2 거짓

	//1!=1 거짓
	//1!=2 참

	//char a = 'a';
	//char b = 'b';

	//printf("char 'a'의 값 %c(ASCII %d)는 char 'b'의 값 %c(ASCII %d)와 같습니다. : %d \n\n", a, a, b, b, a == b);
	//printf("char 'a'의 값 %c(ASCII %d)는 char 'b'의 값 %c(ASCII %d)와 같지 않습니다. : %d", a, a, b, b, a != b);

	// 논리 연산자 - 0은 무조건 거짓이고, 0이외의 수(1포함)는 모두 참이다.
/*
	char num1 = 2, num2 = 3, num3 = 5;
	char r1, r2, r3, r4, r5;

	r1 = (num1 > 0) && (num2 < 10);
	r2 = (num2 <= 2) && (num3 > 5);
	r3 = (num1 > 0) && (num2 != 3);


	printf("r1의 값 r1=%d !r1=%d\n", r1, !r1);
	printf("r2의 값 r2=%d !r2=%d\n", r2, !r2);
	printf("r3의 값 r3=%d !r3=%d\n", r3, !r3);

	printf("%d\n", !0); // 0은 무조건 거짓이고, 0이외의 수(1포함)는 모두 참이다.
	printf("%d\n", !- 10); //0은 무조건 거짓이고, 0이외의 수(1포함)는 모두 참이다.
	printf("%d\n", !99); //0은 무조건 거짓이고, 0이외의 수(1포함)는 모두 참이다.
	printf("%d\n", !0.22); //0은 무조건 거짓이고, 0이외의 수(1포함)는 모두 참이다.

*/
	/*
	char num1 = 2, num2 = 3;
	char r1, r2;

	//r1 = (++num1 == 3) | (--num2 > 3); //참 | 거짓
	r1 = (--num2 > 3) || (++num1 == 2); //거짓 || 참
	//r1 = (--num2 > 3) & (++num1 == 2); //거짓 & 참
	//r2 = (num4++ == 2) && (num5-- > 3); //참 && 거짓

	printf("num1=%d, num2=%d, %d\n", num1, num2, r1);
	*/

	/*
	//1) if
	if (조건) {
		//조건이 '참'일때 실행
	}
	
	//2) if else
	if (조건) {
		//조건이 '참'일때 실행
	}
	else {
		//조건이 '거짓'일때 실행
	}

	//3) if, ~else if, ~else
	if (조건) {
		//조건이 '참'일때 실행
	}
	else if (조건2) {
		//조건2가 '참'일때 실행
	}
	else if (조건3) {
		//조건3이 '참'일때 실행
	}
	else {
		//위의 조건이 모두 거짓일때 실행되는 마지막
	}
	*/
/*
	short a = 256;

	if (a % 10 == 0) {
		printf("%d(은)는 10의 배수입니다.\n", a);
	}
	else if (a % 5 == 0){
		printf("%d(은)는 5의 배수입니다.\n", a);
	}
	else if (a % 2 == 0) {
		printf("%d(은)는 2의 배수입니다.\n", a);
	}
	else if (a % 1 == 0) {
		printf("%d(은)는 1의 배수입니다.\n", a);
	}
	else {
		printf("없음\n.", a);
	}
*/
/*
	int input;

	printf("몇 번 메뉴를 선택하시겠습니까?\n");
	printf("\t(1)짜장면\n");
	printf("\t(2)짬뽕\n");
	printf("\t(3)탕수육\n");
	printf("번호 선택: ");

	scanf("%d", &input);

	printf("------------------------------\n");

	switch (input)
	{
		case 1:
			printf("짜장면은 5000원입니다.\n");
			break;

		case 2:
			printf("짬뽕은 6000원입니다.\n");
			break;

		case 3:
			printf("탕수육은 20000원입니다.\n");
			break;

		default:
			printf("없는 메뉴입니다.\n");
	}

	printf("감사합니다.\n");

	return 0;
*/

/*
	char input;

	printf("몇 번 메뉴를 선택하시겠습니까?\n");
	printf("\t(1)짜장면\n");
	printf("\t(2)짬뽕\n");
	printf("\t(3)탕수육\n");
	printf("번호 선택: ");

	scanf("%d", &input);

	printf("------------------------------\n");

	if (input == 1) {
		printf("짜장면은 5000원 입니다.\n");
	}
	else if (input == 2) {
		printf("짬뽕은 6000원입니다.\n");
	}
	else if (input == 3) {
		printf("탕수육은 20000원입니다.\n");
	}
	else {
		printf("없는 메뉴입니다.\n");
	}

	printf("감사합니다.\n");

	return 0;
	*/
	/*
	int a = -10;
	char result = a > 0;
	char result2;

	if (result) {
		printf("a(%d)는 양수입니다.",a);
		result2 = 10;
	}
	else {
		printf("a(%d)는 음수입니다.",a);
		result2 = -10;
	}

	printf("result2 = %d", result2);
	*/
/*
	int num = 0, con = 0;

	printf("정수를 입력해주세요.");
	scanf("%d", &num);

	con = num > 0 ? num : -num;
	//con = num > 0 ? num : num * -1;

	printf("%d의 절대값은 %d입니다.", num, con);

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
		printf("짝수 %d\n", i);
	}

	return 0;

	*/

	for (int x = 2; x <= 9; x++) {
		printf("%d단 =============\n", x);
		for (int y = 1; y <= 9; y++) {
			printf("%d x %d = %d\n", x, y, x * y);
		}
	}
	return 0;
}