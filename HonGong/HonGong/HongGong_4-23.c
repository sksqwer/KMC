#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>



/*
��1. 
	��ǻ�Ϳ��Լ� 3�ڸ��� ���ڸ� ���Ƿ� ���ϰ� �ѵ�
	����� 3�ڸ��� ���ڸ� �Է��ؼ� ����� Ȯ���Ѵ�.
		���Ǵ� ���ڴ� 1~9���� ���δٸ� �����̴�.
		���ڰ� ������ �� ��ġ�� Ʋ���� ���� ���� ���
		���ڿ� ��ġ�� ������ ��Ʈ����ũ�� ���
		���ڿ� ��ġ�� ���� Ʋ���� �ƿ�
		������ ���̰� ��Ʈ����ũ ������ ������� �ʴ´�.

		��ǻ�� 2 1 6
		1	8 3 5	out
		2	6 5 9	0S 1B
		3	2 6 4	1S 1B
		4	2 1 6	����
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
//	printf("��ǻ�� X X X\n");
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
//			printf("�ٽ��Է��Ͻÿ�.\n");
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
//			printf("\t����\n");
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
//	printf("����  ������  &����	  *����   **����\n");
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
��2.
	�ΰ��� int�� ������ ������ ���̰� 5�� int�� �迭�� ����������
	�����Ѵ�.
		int *maxPtr;
		int *minPtr;
		int arr[5];
	MaxAndMin�̶� �Ա��� �����ϰ� �̸� ȣ���Ͽ� �� �迭�� �� �����͸� ������ �����Ѵ�.
	�� �Լ��� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr���� ���� ū��������� �迭
	����� �ּڰ���; ,minPtr���� �������� �迭 ����� �ּڰ��� ����Ǿ�� �Ѵ�.
	������..	arr�ּҰ���, �ִ�, �ּ��� �ּڰ�,
				�� �ּҿ� ����� ���� ����϶�.

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

	//	printf("maxPtr�� ����� �ּҰ� : %u\n", maxPtr);
	//	printf("maxPtr�� �����Ͱ� : %d\n", *maxPtr);
	//	printf("minPtr�� ����� �ּҰ� : %u\n", minPtr);
	//	printf("minPtr�� �����Ͱ� : %d\n", *minPtr);



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
//	printf("ù ��° ����� ���̿� Ű �Է� : ");
//	scanf("%d %lf", &w1, &h1);
//	printf("�� ��° ����� ���̿� Ű �Է� : ");
//	scanf("%d %lf", &w2, &h2);
//
//	swap("int", &w1, &w2);
//	swap("double", &h1, &h2);
//
//	printf("ù ��° ����� ���̿� Ű : %d %.1lf\n", w1, h1);
//	printf("�� ��° ����� ���̿� Ű : %d %.1lf\n", w2, h2);
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
//		printf("# �޸𸮰� �����մϴ�. \n");
//		exit(1);
//	}
//
//	pd = (double*)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("���������� ��� : %d\n", *pi);
//	printf("�Ǽ������� ��� : %.1lf\n", *pd);
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
//		printf("�޸𸮰� �����մϴ�.\n");
//		exit(0);
//	}
//
//	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("�ټ����� ��� ���� %.1lf", (sum / 5.0));
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
//		printf("����� �Է��ϼ��� => ");
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
��3.
	1. ����ڷκ��� ���ڿ��� �Է¹޾Ƽ� ����ϴ� ���α׷� �ۼ�.
	���ڿ��Է� �ޱ�����  ����ڷκ��� ���ڿ��� �ִ� ���̿� ���� ������ 
	���� �Է¹ް�, �� ���� ��ŭ �޸� ������ �������� �Ҵ���
	���ڿ��� �Է¹޾� ����ϵ��� �Ѵ�.

	Ư�� ���ڰ� �Էµ� ������ �ݺ��ϵ��� �Ѵ�.
	("Quit" - > ���α׷� ����)
	2. ����Ҷ� ������ ���� �ܾ� ������ ���ڿ��� ������ �ֵ��� �Ѵ�.
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

		printf("�Է��� ������ �ִ���� �Է� : ");
		scanf("%d", &n);
//		fgetc(stdin);
		str = (char*)malloc((n+1) * sizeof(char));
		
		getchar();
		printf("���� �Է� : ");
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
//		printf("�Է��� ������ �ִ���� �Է� : ");
//		scanf("%d", &n);
//
//		str = (char*)malloc(n * sizeof(char));
//
//		printf("���� �Է� : ");
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