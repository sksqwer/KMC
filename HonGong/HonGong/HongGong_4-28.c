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
//	printf("나의 레저 활동 => %s\n", pc);
//
//
//
//
//	return 0;
//
//
//}

/*
문1.
	번호, 이름, 학점을 입력받을수있는 구조체를 만들고 
	임의의 학생에 대한 데이터를 입력 받아 출력하는 코드를 만든다.
	학점 순으로 정렬하여 출력하도록
	1. 입력 - 학생 번호, 이름, 성적 순으로 입력
	2. 출력 - 성적에 따라 정렬된 형태로 출력
	3. 검색 - 이름으로 해당학생의, 이름, 성적을 출력
	4, 종료 - 프로그램 종료

	1. 동적 메모리 할당
	2. 자기 참조 구조체 활용
	3. 입력, 출력, 검색은 각각 개별 함수로 구현한다.


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
//		printf("1. 입력 : 학생번호, 이름, 성적 순으로 입력\n");
//		printf("2. 출력 : 성적에 따라 출력\n");
//		printf("3. 검색 : 이름으로 해당학생 정보 출력\n");
//		printf("4. 종료 : 프로그램 종료\n");
//		printf("메뉴의 번호를 입력하시오 : ");
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
//			printf("\n※※※※※숫자를 다시입력하시오.※※※※※\n\n");
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
//	printf("학생 번호, 이름, 성적순으로 입력하시오 : ");
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
//			printf("번호가 중복됩니다.\n");
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
//		printf("학생번호 = %3d, 이름 = %5s, 성적 : %.1lf\n",
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
//	printf("이름을 입력하시오 : ");
//	scanf("%s", name);
//
//
//	while (current != 0)
//	{
//		if (strcmp(current->name, name) == 0)
//		{
//			printf("학생번호 = %3d, 이름 = %s, 성적 : %.1lf\n",
//				current->num, current->name, current->grade);
//			return;
//		}
//		current = current->next;
//	}
//
//	printf("학생을 찾을 수 없습니다.\n");
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
//	printf("프로그램을 종료합니다.\n");
//
//
//}



/*
문2. 
	총 무게 10까지 담을수 있는 인베토리가 있다.
	아이템 마다 중요도가 있고 무게가 다르다.
	중요도 제일 높게 아이템을 담을 수 있도록 프로그램을 작성하라.

		이름				중요도			무게
		kar98k			7				4
		후라이팬			10				2
		스코프			7				4
		뚝배기			6				6
		샷건				2				10
		지도				3				5

	출력형식은 다음과 같은 형태로 출력되어야 한다.
		중요도 1순위 : 24
				kar98	...	...
				후라이팬 ... ...
				스코프	... ...





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
	printf("무기의 갯수, 가방의 최대무게 : ");
	scanf("%d %d", &n, &LIMIT);
	res = (int*)malloc(sizeof(int) * n);
	memset(res, -1, sizeof(int) * n);
	w = (weapon*)malloc(sizeof(weapon) * n);

	printf("이름 중요도 무게를 입력하시오 : ");
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d%d", w[i].name, &w[i].importance, &w[i].weight);
	}

	res_imp = cal_imp(packing(0, res, 0));

	printf("중요도 1순위 : %d\n\n", res_imp);
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