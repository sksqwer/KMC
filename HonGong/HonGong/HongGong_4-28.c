#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <crtdbg.h>
//
//
//enum season {SPRIING, SUMMER, FALL, WINTER};
//
//
//
//int main()
//{
//
//	// : source code
//
//	enum season ss;
//
//	char *pc = NULL;
//
//	ss = SPRIING;
//	switch (ss)
//	{
//	case SPRIING:
//		pc = "inline"; break;
//	case SUMMER:
//		pc = "swimming"; break;
//	case FALL:
//		pc = "trip"; break;
//	case WINTER:
//		pc = "skiing"; break;
//	}
//
//	printf("���� ���� Ȱ�� => %s\n", pc);
//
//
//
//
//	return 0;
//
//
//}

/*
��1.
	��ȣ, �̸�, ������ �Է¹������ִ� ����ü�� ����� 
	������ �л��� ���� �����͸� �Է� �޾� ����ϴ� �ڵ带 �����.
	���� ������ �����Ͽ� ����ϵ���
	1. �Է� - �л� ��ȣ, �̸�, ���� ������ �Է�
	2. ��� - ������ ���� ���ĵ� ���·� ���
	3. �˻� - �̸����� �ش��л���, �̸�, ������ ���
	4, ���� - ���α׷� ����

	1. ���� �޸� �Ҵ�
	2. �ڱ� ���� ����ü Ȱ��
	3. �Է�, ���, �˻��� ���� ���� �Լ��� �����Ѵ�.


*/
//
//
//struct Profile
//{
//	int num;
//	char name[20];
//	double grade;
//	struct Profile *next;
//
//};
//
//typedef struct Profile Pr;
//
//void input(Pr*, Pr*);
//void opt(Pr*);
//void find(Pr*);
//void fin(Pr*);
//
//int main()
//{
//
//	// : source code
//	
//	Pr *head, *temp;
//	int n;
//	bool ch = false, ch2 = true;
//	temp = (Pr *)malloc(sizeof(Pr));
//	head = temp;
//	
//	while (1)
//	{
//		printf("1. �Է� : �л���ȣ, �̸�, ���� ������ �Է�\n");
//		printf("2. ��� : ������ ���� ���\n");
//		printf("3. �˻� : �̸����� �ش��л� ���� ���\n");
//		printf("4. ���� : ���α׷� ����\n");
//		printf("�޴��� ��ȣ�� �Է��Ͻÿ� : ");
//		scanf("%d", &n);
//		while (getchar() != '\n');
//
//		switch (n)
//		{
//		case(1):
//			input(&head, temp);
//			break;
//		case(2):
//			opt(head);
//			break;
//		case(3):
//			find(head);
//			break;
//		case(4):
//			free(temp);
//			fin(head);
//			ch = true;
//			break;
//		default:
//			printf("\n�ءءءءؼ��ڸ� �ٽ��Է��Ͻÿ�.�ءءءء�\n\n");
//			ch2 = false;
//			break;
//		}
//
//		if (ch == true)
//			break;
//
//		if (ch2 == false)
//		{
//			ch2 = true;
//			continue;
//		}
//			
//		temp = (Pr *)malloc(sizeof(Pr));
//		
//
//	}
//
//
//	return 0;
//
//
//}
//
//void input(Pr** head, Pr* temp)
//{
//	int num;
//	char name[20];
//	double grade;
//	Pr* current = *head;
//	Pr* pre = *head;
//
//	printf("�л� ��ȣ, �̸�, ���������� �Է��Ͻÿ� : ");
//	scanf("%d %s %lf", &num, name, &grade);
//	
//	temp->num = num;
//	strcpy(temp->name, name);
//	temp->grade = grade;
//	temp->next = 0;
//	
//
//	while (1)
//	{
//		if (*head == temp)
//			break;
//
//		if (current->num == temp->num)
//		{
//			printf("��ȣ�� �ߺ��˴ϴ�.\n");
//			free(temp);
//			break;
//		}
//
//		if (current->grade <= temp->grade)
//		{
//			temp->next = current;
//			if (pre == *head)
//				*head = temp;
//			else
//				pre->next = temp;
//			break;
//		}
//		else if (current->next == 0)
//		{
//			current->next = temp;
//			break;
//		}
//		else
//		{
//			pre = current;
//			current = current->next;
//		}
//	}
//
//}
//
//void opt(Pr* head)
//{
//	Pr* current = head;
//
//	while (current != 0)
//	{
//		printf("�л���ȣ = %3d, �̸� = %5s, ���� : %.1lf\n",
//			current->num, current->name, current->grade);
//		current = current->next;
//	}
//
//
//}
//
//void find(Pr* head) 
//{
//	char name[20];
//	Pr* current = head;
//
//	printf("�̸��� �Է��Ͻÿ� : ");
//	scanf("%s", name);
//
//
//	while (current != 0)
//	{
//		if (strcmp(current->name, name) == 0)
//		{
//			printf("�л���ȣ = %3d, �̸� = %s, ���� : %.1lf\n",
//				current->num, current->name, current->grade);
//			return;
//		}
//		current = current->next;
//	}
//
//	printf("�л��� ã�� �� �����ϴ�.\n");
//
//}
//
//void fin(Pr * head) 
//{
//	Pr *current = head;
//	Pr *next = current->next;
//
//	while (current != 0)
//	{
//		free(current);
//		current = next;
//		next = current->next;
//	}
//
//	printf("���α׷��� �����մϴ�.\n");
//
//
//}



/*
��2. 
	�� ���� 10���� ������ �ִ� �κ��丮�� �ִ�.
	������ ���� �߿䵵�� �ְ� ���԰� �ٸ���.
	�߿䵵 ���� ���� �������� ���� �� �ֵ��� ���α׷��� �ۼ��϶�.

		�̸�				�߿䵵			����
		kar98k			7				4
		�Ķ�����			10				2
		������			7				4
		�ҹ��			6				6
		����				2				10
		����				3				5

	��������� ������ ���� ���·� ��µǾ�� �Ѵ�.
		�߿䵵 1���� : 24
				kar98	...	...
				�Ķ����� ... ...
				������	... ...





*/


typedef struct
{
	char name[20];
	int importance;
	int weight;
}weapon;

int  n, LIMIT;
weapon *w;
int *res;

int *packing(int, int*, int);
int cal_imp(int *);
int cal_wei(int *);

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// : source code
	int res_imp = 0, i;
	printf("������ ����, ������ �ִ빫�� : ");
	scanf("%d %d", &n, &LIMIT);
	res = (int*)malloc(sizeof(int) * n);
	memset(res, -1, sizeof(int) * n);
	w = (weapon*)malloc(sizeof(weapon) * n);

	printf("�̸� �߿䵵 ���Ը� �Է��Ͻÿ� : ");
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d%d", w[i].name, &w[i].importance, &w[i].weight);
	}

	res_imp = cal_imp(packing(0, res, 0));

	printf("�߿䵵 1���� : %d\n\n", res_imp);
	i = 0;
	while (res[i] != -1)
	{
		printf("\t%s %d %d\n", w[res[i]].name, w[res[i]].importance, w[res[i]].weight);
		i++;
	}



	free(w);
	free(res);

	_CrtDumpMemoryLeaks();

	return 0;


}



int cal_imp(int *r)
{
	int i = 0, imp = 0;

	if (r == NULL) return 0;

	while (r[i] != -1 && i < n)
	{
		imp += w[r[i]].importance;
		i++;
	}

	return imp;

}

int cal_wei(int *r)
{
	int i = 0, wei = 0;

	if (r == NULL) return 0;

	while (r[i] != -1 && i < n)
	{
		wei += w[r[i]].weight;
		i++;
	}

	return wei;

}

int *packing(int i, int* res, int c)
{
	int imp1 = cal_imp(res), imp2 = cal_imp(res);
	int *res1, *res2;
	res1 = (int*)malloc(sizeof(int) * n);
	res2 = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		res1[i] = res[i];
		res2[i] = res[i];
	}
	int wei = cal_wei(res);
	if (i < n)
	{
		packing(i + 1, res1, c);
		imp1 = cal_imp(res1);

		if (wei + w[i].weight <= LIMIT)
		{
			res2[c] = i;
			packing(i + 1, res2, c + 1);
			imp2 = cal_imp(res2);
		}
	}

	if (imp1 > imp2)
	{
		for (int i = 0; i < n; i++)
		{
			res[i] = res1[i];
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			res[i] = res2[i];
		}

	}
	free(res1);
	free(res2);

	return res;




}	