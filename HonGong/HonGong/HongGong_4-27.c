#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

//
//
//int main()
//{
//
//	// : source code
//
//	char temp[80];
//	char* str[3];
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("문자열을입력하세요 : ");
//		gets(temp);
//		str[i] = (char *)malloc(strlen(temp) + 1);
//		strcpy(str[i], temp);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		free(str[i]);
//	}
//
//
//
//	return 0;
//
//
//}

//
//
//void main(int argc, char **argv)
//{
//
//	// : source code
//
//	if (argc > 0)
//	{
//		for (int i = 0; i < argc; i++)
//			printf("%s\n", argv[i]);
//	}
//
//
//
//
//	return;
//
//
//}


////p473 1번,2번
//int main()
//{
//
//	// : source code
//
//	int **ptr, num = 1;
//
//	ptr = (int **)malloc(sizeof(int) * 4);
//
//	for (int i = 0; i < 4; i++)
//	{
//		ptr[i] = (int *)malloc(sizeof(int) * 5);
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			ptr[i][j] = num++;
//	}
//
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%5d", ptr[i][j]);
//		printf("\n");
//	}
//
//
//
//
//	for (int i = 0; i < 4; i++)
//	{
//		free(ptr[i]);
//	}
//	free(ptr);
//
//
//
//
//
//	return 0;
//
//
//}


//p474 3번
//
//
//int main(int argc, char** argv)
//{
//
//	// : source code
//
//	int i;
//
//	for (i = 0; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//
//
//	return 0;
//
//
//}

//p474 도전 실전예제
//
//
//#define Safe_free(a) if(a){free(a); a = NULL;};
//
//int main()
//{
//
//	// : source code
//
//	int n;
//	printf("양수 입력 : ");
//	scanf("%d", &n);
//
//	bool *Prime = NULL;
//	Prime = (bool *)malloc(sizeof(bool) * (n - 2));
//	memset(Prime, 1, n - 2);
//
//	if (Prime == NULL)
//		return 0;
//
//	for (int i = 0; (i + 2) * (i + 2) < n; i++)
//	{
//		for (int j = (i + 2) + (i + 2); j < n; j += (i+2))
//		{
//			Prime[j - 2] = false;
//		}
//	}
//
//
//	for (int i = 0; i < n - 2; i++)
//	{
//		if (Prime[i] == true)
//			printf("%5d", i + 2);
//		else printf("%5c", 'X');
//
//		if ((i) % 5 == 4)
//			printf("\n");
//	}
//
//	Safe_free(Prime);
//
//	return 0;
//
//
//}
//
//
//
//void arr(int **a, int n);
//
//int main()
//{
//
//	// : source code
//
//	int *a, n = 50;
//	
//	arr(&a, n);
//
//	a[30] = 1;
//	printf("%d\n", a[30]);
//
//
//	return 0;
//
//
//}
//
//void arr(int **a, int n)
//{
//	int num = 0;
//	*a = (int *)malloc(sizeof(int) * n);
//
//
//}
//
//
//struct student
//{
//
//	// : member var
//	int num;
//	char name[20];
//	double grade;
//	float score;
//
//} ST;
//
//
//
//int main()
//{
//
//	// : source code
//
//	struct student s1;
//	
//	ST s1;
//	s1.grade = 4.5;
//	s1.num = 1;
//	strcpy(s1.name,"Kim");
//	s1.score = 100.0;
//
//	printf("학번 : %d\n", s1.num);
//	printf("이름 : %s\n", s1.name);
//	printf("학점 : %.1f\n", s1.grade);
//	printf("점수 : %.1lf\n", s1.score);
//
//	   	 
//	return 0;
//
//
//}
//
//
//
//

//
//struct student
//{
//	int id;
//	char name[20];
//	double grade;
//
//};
//
//
//int main()
//{
//
//	// : source code
//	struct student	s1 = { 315, "홍길동", 2.4 },
//					s2 = { 316, "이순신", 3.7 },
//					s3 = { 317, "세종대왕", 4.4 };
//					
//	struct student max;
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//
//	printf("학번 : %d\n", max.id);
//	printf("이름 : %s\n", max.name);
//	printf("학점 : %.1lf\n", max.grade);
//
//
//
//
//	return 0;
//
//
//}
//
//
//struct vision
//{
//	double left;
//	double right;
//
//};
//
//struct vision exchange(struct vision robot);
//
//int main()
//{
//
//	// : source code
//
//	struct vision robot;
//
//	printf("시력 입력 : ");
//	scanf("%lf%lf,", &(robot.left), &(robot.right));
//	robot = exchange(robot);
//	printf("바뀐 시력 : %.1lf %.1lf", robot.left, robot.right);
//
//	return 0;
//
//
//}
//
//
//struct vision exchange(struct vision robot)
//{
//	double temp;
//
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//	return robot;
//}
//
//
//
//struct cracker
//{
//	int price;
//	int calories;
//};
//int main()
//{
//
//	// : source code
//
//	struct cracker c1;
//	printf("바사삭의 가격과 열량을 입력하세요 : ");
//	scanf("%d%d", &(c1.price), &(c1.calories));
//
//	printf("바사삭의 가격 : %d원\n", c1.price);
//	printf("바사삭의 열량 : %dkcal\n", c1.calories);
//
//	return 0;
//
//
//}
//
//
//
//
//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//int main()
//{
//
//	// : source code
//
//	struct score yuni = { 90,80,70 };
//	struct score *ps = &yuni;
//
//	printf("국어 : %d\n", (*ps).kor);
//	printf("영어 : %d\n", ps->eng);
//	printf("수학 : %d\n", ps->math);
//
//
//
//	return 0;
//
//
//}



struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};

void print_list(struct address *lp);

int main()
{

	// : source code
	struct address list[5] = 
	{
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};

	print_list(list);

	return 0;


}


void print_list(struct address *lp)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", lp[i].name, lp[i].age, lp[i].tel, lp[i].addr);
	}
}