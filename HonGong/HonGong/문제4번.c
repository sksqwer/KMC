#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	int size, tar;
	bool ch = true;
	int *arr = NULL;

	printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
	scanf("%d", &size);

	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		printf("not assign\n");
		return 0;
	}

	printf("���ڸ� �Է��Ͻÿ� : ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("target�� �Է��Ͻÿ� : ");
	scanf("%d", &tar);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] + arr[j] == tar)
			{
				printf("[%d,%d]\n", i, j);
				ch = false;
			}
		}
		if (ch == false)
			break;
	}

	if(ch == true)
		printf("[ ]\n");





	free(arr);


	return 0;
}
