#include <stdio.h>

int main(void)
{
	// 정수형 변수
	/*int age = 12; // 자료형 변수명 = 정수값
	printf("%d\n", age); // %d = 정수값(age) 입력

	age = 13;
	printf("%d\n", age); 
	// 맨 처음 자료형을 입력했기 때문에 
	//그 다음 나오는 변수는 자료형 입력 굳이 x*/


	// 실수형 변수
	/*float f = 34.43;
	printf("%.2f\n", f);

	double d = 934.432;
	printf("%.2lf\n", d);*/


	/* //상수
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);

	 // YEAR = 2012; 불가능*/


	// printf
	// 연산
	/*int add = 398 + 892;
	int a = 398;
	int b = 892;
	printf("%d + %d = %d\n", a, b, add);

	add = 398 * 892;
	printf("398 x 892 = %d\n", add);*/


	// scanf_s
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하시오 : ");
	scanf_s("%d", &input);

	printf("입력값 : %d\n", input);

	int output = 1892;
	printf("입력값은 네가 입력하는 대로 : %d\n", output);*/
	// & : 정의된 곳에 값을 입력받겠다 (?)
	// Q : scanf 입력하는데 printf 값은 왜 따라나오는거임???
	// A : input 값이 생성되었으므로 바로 출력값이 따라 나옴.
	//     다음 나오는 printf를 아무런 출력값으로 놓고 확인해 보면 이해가 됨.

	/*int one, two, three;
	printf("세 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 입력값 : %d\n", one);
	printf("세 번째 입력값 : %d\n", two);
	printf("두 번째 입력값 : %d\n", three);*/

	// 구조를 잘 봐
	// int 변수명만 입력하고, 변수값을 정해주지 않았음
	// scanf 에서 변수값을 지정해줌 ☆☆☆☆☆
	// 그 과정에서 &를 사용
	// 그 이후 변수값이 지정되고 printf 에서 출력값이 바로 나올 수 있게 됨.


	// 문자 or 문자열
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));  ☆☆ &가 어디에도 없네? ☆☆
	//printf("%s\n", str);


	// 프로젝트
	// 범죄자 밀착조사 빠밤!!
	// 이름, 나이, 키, 몸무게, 죄목

	char name[256];
	printf("이름이 뭐에요? : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요? : ");
	scanf_s("%d", &age);

	float height;
	printf("키가 몇이에요? : ");
	scanf_s("%.2f", &height);

	double weight;
	printf("몸무게가 몇이에요? : ");
	scanf_s("%.2lf", &weight);

	char what[256];
	printf("뭘 잘못했어요? : ");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n--- 용의자 정보 ---\n\n\n");
	printf(" 이름      : \n");
	printf(" 나이      : \n");
	printf(" 키        : \n");
	printf(" 몸무게    : \n");
	printf(" 범죄명    : \n");

	return 0;
}