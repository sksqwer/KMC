#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>



/*
문1. 
	컴퓨터에게서 3자리의 숫자를 임의로 정하게 한뒤
	사용자 3자리의 숫자를 입력해서 결과를 확인한다.
		사용되는 숫자는 1~9까지 서로다른 숫자이다.
		숫자가 있지만 그 위치가 틀렸을 때는 볼을 출력
		숫자와 위치가 맞으면 스트라이크를 출력
		숫자와 위치가 전부 틀리면 아웃
		무엇이 볼이고 스트라이크 인지는 출력하지 않는다.

		컴퓨터 2 1 6
		1	8 3 5	out
		2	6 5 9	0S 1B
		3	2 6 4	1S 1B
		4	2 1 6	정답
*/
//
//int main()
//{
//
//	// : source code
//
//	int com_num[3], user_num[3], ord = 1;
//
//	for (int i = 0; i < 3; i++)
//	{
//		srand((unsigned int)time(NULL));
//		com_num[i] = rand()%9 + 1;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (com_num[i] == com_num[j])
//			{
//				i--;
//				break;
//			}
//		}
//
//	}
//
//	printf("컴퓨터 X X X\n");
//
//	
//	while (1)
//	{
//		bool ch = false;
//		printf("%d\t", ord++);
//
//
//		scanf("%d %d %d", &user_num[0], &user_num[1], & user_num[2]);
//
//		for (int i = 0; i < 3; i++)
//		{
//
//			if (user_num[i] <= 0 || user_num[i] > 9)
//			{
//				ch = true;
//				break;
//			}
//
//			for (int j = 0; j < i; j++)
//			{
//				if (user_num[i] == user_num[j])
//				{
//					ch = true;
//					break;
//				}
//			}
//
//		}
//
//		if (ch == true)
//		{
//			ord--;
//			printf("다시입력하시오.\n");
//			continue;
//		}
//
//
//
//
//
//		int st = 0, ba = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if (user_num[i] == com_num[j])
//				{
//					if (i == j)
//						st++;
//					else
//						ba++;
//				}
//			}
//		}
//		if (st == 3)
//		{
//			printf("\t정답\n");
//			break;
//		}
//		else if (st == 0 && ba == 0)
//		{
//			printf("\tout\n");
//			break;
//		}
//		else
//			printf("\t%dS %dB\n", st, ba);
//			
//
//	}
//
//
//
//
//
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
//int main()
//{
//
//	// : source code
//
//	int a = 10;
//	int *pi;
//	int **ppi;
//
//	pi = &a;
//	ppi = &pi;
//
//
//	printf("--------------------------------------------------\n");
//	printf("변수  변숫값  &연산	  *연산   **연산\n");
//	printf("--------------------------------------------------\n");
//	printf("a%10d%10u\n", a, &a);
//	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
//	printf("--------------------------------------------------\n");
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
//
//void swap_ptr(char **ppa, char **ppb);
//
//int main()
//{
//
//	// : source code
//	int i = 1;
//	char c[80] = "success";
//	char *pa = c;
//	char *pb = "faiure";
//	int  *pi = &i;
//
//
//	printf("pi => %d, %p, %p\n", pi, *pi, &pi);
//
//	printf(" c => %p, %p, %p\n", c, *c, &c);
//	printf("pa => %p, %p, %p\n", pa, *pa++, &pa);
//	printf("pb => %s, %p, %p\n", pb++, *pb, &pb);
//	swap_ptr(&pa, &pb);
//	printf("pa => %s, %p, %p\n", pa, *pa, &pa);
//	printf("pb => %s, %p, %p\n", pb, *pb, &pb);
//
//
//	return 0;
//
//
//}
//
//
//void swap_ptr(char **ppa, char **ppb)
//{
//	char *temp;
//	temp = *ppa;
//	*ppa = *ppb;
//	*ppb = temp;
//}


/*
문2.
	두개의 int형 포인터 변수와 길이가 5인 int형 배열을 다음과같이
	선언한다.
		int *maxPtr;
		int *minPtr;
		int arr[5];
	MaxAndMin이란 함구를 정의하고 이를 호출하여 위 배열과 두 포인터를 변수로 전달한다.
	이 함수의 호출이 완료되면, 포인터 변수 maxPtr에는 가장 큰값이저장된 배열
	요소의 주솟값ㅇ; ,minPtr에는 가장작은 배열 요소의 주솟값이 저장되어야 한다.
	결과출력..	arr주소값과, 최대, 최소의 주솟값,
				그 주소에 저장된 값을 출력하라.

				*/

	//#define NUM 5

	//void MaxAndMin(int *arr_Ptr, int **min, int **max);

	//int main()
	//{

	//	// : source code

	//	int arr[NUM];
	//	int *maxPtr = NULL;
	//	int *minPtr = NULL;


	//	for (int i = 0; i < NUM; i++)
	//	{
	//		scanf("%d", &arr[i]);
	//	}

	//	MaxAndMin(arr, &minPtr, &maxPtr);

	//	printf("maxPtr에 저장된 주소값 : %u\n", maxPtr);
	//	printf("maxPtr의 포인터값 : %d\n", *maxPtr);
	//	printf("minPtr에 저장된 주소값 : %u\n", minPtr);
	//	printf("minPtr의 포인터값 : %d\n", *minPtr);



	//	return 0;


	//}


	//void MaxAndMin(int *arr_Ptr, int **min, int **max)
	//{
	//	*min = &arr_Ptr[0];
	//	*max = &arr_Ptr[0];


	//	for (int i = 1; i < NUM; i++)
	//	{
	//		if (**min > arr_Ptr[i])
	//			*min = &arr_Ptr[i];
	//	
	//		if (**max < arr_Ptr[i])
	//			*max = &arr_Ptr[i];
	//	}


	//}
//
//
//int (*fp)(int, int);
//
//
//int plus(int ,int);	
//int minus(int , int);
//int dive(int , int );
//int multi(int , int );
//
//
//int main()
//{
//
//	// : source code
//	int res;
//	int(*fp)(int, int);
//
//	fp = plus;
//	res = fp(10, 20);
//	printf("plus : %d\n", res);
//
//	fp = minus;
//	res = fp(10, 20);
//	printf("minus : %d\n", res);
//
//	fp = div;
//	res = fp(100, 20);
//	printf("div : %d\n", res);
//
//	fp = multi;
//	res = fp(10, 20);
//	printf("multi : %d\n", res);
//
//
//
//
//
//	return 0;
//
//
//}
//
//int plus(int a, int b) 
//{
//	return a + b;
//}
//int minus(int a, int b)
//{
//	return a - b;
//}
//int dive(int a, int b)
//{
//	return (int)(a / b);
//}
//int multi(int a, int b)
//{
//	return a * b;
//}


void swap(char *, void*, void*);


int main()
{

	// : source code
	int w1, w2;
	double h1, h2;


	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &w1, &h1);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &w2, &h2);

	swap("int", &w1, &w2);
	swap("double", &h1, &h2);

	printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", w1, h1);
	printf("두 번째 사람의 나이와 키 : %d %.1lf\n", w2, h2);


	


	return 0;


}


void swap(char *ch, void* a, void* b)
{
	if (ch == "int")
	{
		int temp = *(int *)a;
		*(int *)a = *((int *)b);
		*(int *)b = temp;

	}
	else
	{
		double temp = *(double *)a;
		*(double *)a = *(double *)b;
		*(double *)b = temp;
	}
}

