#include <stdio.h>

int main(void)
{
	// ������ ����
	/*int age = 12; // �ڷ��� ������ = ������
	printf("%d\n", age); // %d = ������(age) �Է�

	age = 13;
	printf("%d\n", age); 
	// �� ó�� �ڷ����� �Է��߱� ������ 
	//�� ���� ������ ������ �ڷ��� �Է� ���� x*/


	// �Ǽ��� ����
	/*float f = 34.43;
	printf("%.2f\n", f);

	double d = 934.432;
	printf("%.2lf\n", d);*/


	/* //���
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);

	 // YEAR = 2012; �Ұ���*/


	// printf
	// ����
	/*int add = 398 + 892;
	int a = 398;
	int b = 892;
	printf("%d + %d = %d\n", a, b, add);

	add = 398 * 892;
	printf("398 x 892 = %d\n", add);*/


	// scanf_s
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%d", &input);

	printf("�Է°� : %d\n", input);

	int output = 1892;
	printf("�Է°��� �װ� �Է��ϴ� ��� : %d\n", output);*/
	// & : ���ǵ� ���� ���� �Է¹ްڴ� (?)
	// Q : scanf �Է��ϴµ� printf ���� �� ���󳪿��°���???
	// A : input ���� �����Ǿ����Ƿ� �ٷ� ��°��� ���� ����.
	//     ���� ������ printf�� �ƹ��� ��°����� ���� Ȯ���� ���� ���ذ� ��.

	/*int one, two, three;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° �Է°� : %d\n", one);
	printf("�� ��° �Է°� : %d\n", two);
	printf("�� ��° �Է°� : %d\n", three);*/

	// ������ �� ��
	// int ������ �Է��ϰ�, �������� �������� �ʾ���
	// scanf ���� �������� �������� �١١١١�
	// �� �������� &�� ���
	// �� ���� �������� �����ǰ� printf ���� ��°��� �ٷ� ���� �� �ְ� ��.


	// ���� or ���ڿ�
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));  �١� &�� ��𿡵� ����? �١�
	//printf("%s\n", str);


	// ������Ʈ
	// ������ �������� ����!!
	// �̸�, ����, Ű, ������, �˸�

	char name[256];
	printf("�̸��� ������? : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���? : ");
	scanf_s("%d", &age);

	float height;
	printf("Ű�� ���̿���? : ");
	scanf_s("%.2f", &height);

	double weight;
	printf("�����԰� ���̿���? : ");
	scanf_s("%.2lf", &weight);

	char what[256];
	printf("�� �߸��߾��? : ");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n--- ������ ���� ---\n\n\n");
	printf(" �̸�      : \n");
	printf(" ����      : \n");
	printf(" Ű        : \n");
	printf(" ������    : \n");
	printf(" ���˸�    : \n");

	return 0;
}