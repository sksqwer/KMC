#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int** Matrix_sol(int **arr, int n);

int main()
{
	int **arr, n, num = 1;

	printf("n * n행렬의 크기 n을 입력하시오 : ");
	scanf("%d", &n);


	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * n);
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = num++;
		}
	}


	printf("변환 전 : \n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}



	Matrix_sol(arr, n);

	printf("변환 후 : \n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}






	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr); 
	

	return 0;
}



int** Matrix_sol(int **arr, int n)
{
	int *res, temp, sum;
	res = (int*)malloc(sizeof(int) * n * 2);
	memset(res, 0, sizeof(int) * n * 2);

	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			res[i] += arr[i][j];
			res[n + i] += arr[j][i];

		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp = arr[i][j];
			arr[i][j] = 0;
			arr[i][j] += res[i];
			arr[i][j] += res[n + j];
			arr[i][j] -= temp;
		}
	}

	free(res);

	return arr;
}