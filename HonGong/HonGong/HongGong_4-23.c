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

//
//void swap(char *, void*, void*);
//
//
//int main()
//{
//
//	// : source code
//	int w1, w2;
//	double h1, h2;
//
//
//	printf("첫 번째 사람의 나이와 키 입력 : ");
//	scanf("%d %lf", &w1, &h1);
//	printf("두 번째 사람의 나이와 키 입력 : ");
//	scanf("%d %lf", &w2, &h2);
//
//	swap("int", &w1, &w2);
//	swap("double", &h1, &h2);
//
//	printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", w1, h1);
//	printf("두 번째 사람의 나이와 키 : %d %.1lf\n", w2, h2);
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
//void swap(char *ch, void* a, void* b)
//{
//	if (ch == "int")
//	{
//		int temp = *(int *)a;
//		*(int *)a = *((int *)b);
//		*(int *)b = temp;
//
//	}
//	else
//	{
//		double temp = *(double *)a;
//		*(double *)a = *(double *)b;
//		*(double *)b = temp;
//	}
//}
//


//
//
//
//int main()
//{
//
//	// : source code
//
//	int *pi;
//	double *pd;
//
//	pi = (int*)malloc(sizeof(int));
//	if (pi == NULL)
//	{
//		printf("# 메모리가 부족합니다. \n");
//		exit(1);
//	}
//
//	pd = (double*)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("정수형으로 사용 : %d\n", *pi);
//	printf("실수형으로 사용 : %.1lf\n", *pd);
//
//	free(pi);
//	free(pd);
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
//
//	int *pi;
//
//	int i, sum = 0;
//
//	pi = (int *)malloc(5 * sizeof(int));
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다.\n");
//		exit(0);
//	}
//
//	printf("다섯 명의 나이를 입력하세요 : ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("다섯명의 평균 나이 %.1lf", (sum / 5.0));
//	free(pi);
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
//	int *pi;
//	int size = 5;
//	int count = 0;
//	int num;
//	int i;
//	pi = (int *)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("양수만 입력하세요 => ");
//		scanf("%d", &num);
//
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int *)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//
//
//
//	}
//
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//	}
//
//	free(pi);
//
//
//	return 0;
//
//
//}



/*
문3.
	1. 사용자로부터 문자열을 입력받아서 출력하는 프로그램 작성.
	문자열입력 받기전에  사용자로부터 문자열의 최대 길이에 대한 정보를 
	먼저 입력받고, 그 길이 만큼 메모리 공간을 동적으로 할당해
	문자열을 입력받아 출력하도록 한다.

	특정 문자가 입력될 때까지 반복하도록 한다.
	("Quit" - > 프로그램 종료)
	2. 출력할때 다음과 같이 단어 단위로 문자열을 뒤집어 주도록 한다.
	ex> I am happy
		happt am I

*/


int main()
{

	// : source code

	int n;
	char* str;


	while (1)
	{

		printf("입력할 문자의 최대길이 입력 : ");
		scanf("%d", &n);
//		fgetc(stdin);
		str = (char*)malloc((n+1) * sizeof(char));
		
		getchar();
		printf("문자 입력 : ");
		fgets(str, sizeof(char) * (n+1), stdin);
		str[strlen(str) - 1] = '\0';
		printf("%d", strlen(str));

		while (getchar() != '\n');

		printf("%s\n", str);

		if (str == "Quit")
			break;




		free(str);


	}


	return 0;


}



//
//int main()
//{
//
//	// : source code
//
//	int n;
//	char* str;
//
//
//	while (1)
//	{
//
//		printf("입력할 문자의 최대길이 입력 : ");
//		scanf("%d", &n);
//
//		str = (char*)malloc(n * sizeof(char));
//
//		printf("문자 입력 : ");
//		scanf(" %	s", str);
//
//		if (str == "Quit")
//			break;
//
//		printf("%s", str);
//
//
//		free(str);
//
//
//	}
//
//
//	return 0;
//
//
//}