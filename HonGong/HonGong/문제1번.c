#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[80];
	int age;

	printf("�̸� : ");
	scanf("%s", name);

	printf("���� : ");
	scanf("%d", &age);

	printf("%s ���� ���̴� %d���Դϴ�.", name, age);



	return 0;
}