#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <crtdbg.h>


//
//int main()
//{
//
//	// : source code
//
//	FILE *fp;
//	int ch;
//
//	fp = fopen("a.txt", "r");
//	if (fp == NULL)
//	{
//		printf("������ ������ �ʾҽ��ϴ�.\n");
//		return 1;
//	}
//
//
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)
//			break;
//		putchar(ch);
//	}
//
//	fclose(fp);
//
//
//	return 0;
//
//
//}

//
//
//
//int main()
//{
//
//	// : source code
//
//	FILE *fp;
//	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
//	int i, res;
//
//	fp = fopen("a.txt", "wb");
//	for (int i = 0; i < 10; i++)
//	{
//		fputc(ary[i], fp);
//	}
//	fclose(fp);
//
//	fp = fopen("a.txt", "rt");
//	while (1)
//	{
//		res = fgetc(fp);
//		if (res == EOF) break;
//		printf("%4d", res);
//	}
//
//	fclose(fp);
//
//
//	return 0;
//
//
//}


//
//int main()
//{
//
//	// : source code
//
//	FILE *ifp, *ofp;
//	char str[80];
//	char *res = str;
//
//	ifp = fopen("a.txt", "r");
//	if (ifp == NULL)
//	{
//		printf("�Է� ������ ��������\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("��� ������ ��������\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL)
//			break;
//		str[strlen(str) - 1] = 0;
//		fputs(str, ofp);
//		fputs(" ", ofp);
//
//
//	}
//	fclose(ifp);
//	fclose(ofp);
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
//
//int main()
//{
//
//	// : source code
//
//	FILE *a_ifp, *b_ifp, *c_ifp;
//	char **stra, temp[21], *res;
//	int num_a = 0;
//
//	a_ifp = fopen("a.txt", "r");
//	if (a_ifp == NULL)
//	{
//		printf("a ������ ��������\n");
//		return 1;
//	}
//
//	b_ifp = fopen("b.txt", "r");
//	if (b_ifp == NULL)
//	{
//		printf("b ������ ��������\n");
//		return 1;
//	}
//
//	c_ifp = fopen("c.txt", "w");
//	if (c_ifp == NULL)
//	{
//		printf("c ������ ��������\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fgets(temp, sizeof(temp), a_ifp);
//		if (res == NULL)
//			break;
//		else num_a++;
//	}
//
//	stra = (char **)malloc(num_a * sizeof(char*));
//	fseek(a_ifp, 0, SEEK_SET);
//	for (int i = 0; i < num_a; i++)
//	{
//		stra[i] = (char *)malloc(21);
//		res = fgets(temp, sizeof(temp), a_ifp);
//		if (temp[strlen(temp) - 1] == '\n')
//			temp[strlen(temp) - 1] = 0;
//		strcpy(stra[i],temp);
//	}
//
//	while (1)
//	{
//		bool ch = false;
//		res = fgets(temp, sizeof(temp), b_ifp);
//		if (res == NULL)
//			break;
//		if(temp[strlen(temp) - 1] == '\n')
//			temp[strlen(temp) - 1] = 0;
//		for (int i = 0; i < num_a; i++)
//		{
//			if (strcmp(temp, stra[i]) == 0)
//			{
//				ch = true;
//				break;
//			}
//				
//		}
//
//		if (ch == false)
//		{
//			fputs(temp, c_ifp);
//			fputs("\n", c_ifp);
//		}
//	}
//
//
//	for (int i = 0; i < num_a; i++)
//	{
//		free(stra[i]);
//	}
//	free(stra);
//
//
//	fclose(a_ifp);
//	fclose(b_ifp);
//	fclose(c_ifp);
//
//	return 0;
//
//
//}


//
//int main()
//{
//
//	// : source code
//
//	FILE *a_ifp, *b_ifp, *c_ifp;
//	char temp1[21], temp2[21];
//	int res1, res2;
//	int num_a = 0;
//
//	a_ifp = fopen("a.txt", "r");
//	if (a_ifp == NULL)
//	{
//		printf("a ������ ��������\n");
//		return 1;
//	}
//
//	b_ifp = fopen("b.txt", "r");
//	if (b_ifp == NULL)
//	{
//		printf("b ������ ��������\n");
//		return 1;
//	}
//
//	c_ifp = fopen("c.txt", "w");
//	if (c_ifp == NULL)
//	{
//		printf("c ������ ��������\n");
//		return 1;
//	}
//
//
//	while (1)
//	{
//		bool ch = false;
//		fseek(a_ifp, 0, SEEK_SET);
//		res1 = fscanf(b_ifp, "%s", temp1);
//		if (res1 == EOF)
//			break;
//		while (1)
//		{
//			res2 = fscanf(a_ifp, "%s", temp2);
//			if (res2 == EOF)
//				break;
//			if (strcmp(temp1, temp2) == 0)
//			{
//				ch = true;
//				break;
//			}
//		}
//
//		if (ch == false)
//		{
//			fputs(temp1, c_ifp);
//			fputs("\n", c_ifp);
//		}
//	}
//
//
//	fclose(a_ifp);
//	fclose(b_ifp);
//	fclose(c_ifp);
//
//	return 0;
//
//
//}

/*
��1.
	99.txt.������ ����� ���⿡ �������� �����ϴ� ���α׷��� �ۼ�.
	���ϴ� ������������ϴ� ���α׷��� �ۼ�.
	2 x 1 = 2
	2 x 2 = 4
	.
	.
	.

	�Է�>	����� ���ϴ� �������� ? 2
	���>
		2 x 1 = 2
		2 x 2 = 4
		.
		.
		.
	
*/


//int main()
//{
//
//	// : source code
//
//	FILE *fp;
//	int res, n;
//	fp = fopen("99.txt", "w");
//	char c[12];
//	c[11] = 0;
//	if (fp == NULL)
//	{
//		printf("���� ���� ����\n");
//		return 1;
//	}
//
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			fprintf(fp, "%d x %d = %2d\n", i, j, (i*j));
//		}
//	}
//
//	fclose(fp);
//
//	fp = fopen("99.txt", "r");
//
//	printf("����ϴ� ��������?");
//	scanf("%d", &n);
//	rewind(fp);
//	fseek(fp, (108 * (n - 2)), SEEK_SET);
//
//	printf("%d��\n", n);
//	printf("=========\n");
//
//	for (int i = 0; i < 9; i++)
//	{
//		fgets(c, sizeof(c),fp);
//		printf("%s", c);
//	}
//
//
//
//	fclose(fp);
//
//
//
//
//	return 0;
//
//
//}

/*
��2.
	���� ���� ���α׷� �����
	������ ���ϸ�� ������ �����Ǵ� ���ϸ��� �Է¹޾Ƽ�
	������ ������ �����ϴ� ���α׷� �ۼ�.
	��. txt ���ϻӸ� �ƴ϶� �̹��� ���ϵ��� ��� ������ ���Ͽ�
	�� �����ϰ� ������ �� �־�� �Ѵ�.
	���� ���� ������ ������� ȭ�鿡 ǥ�����ֵ��� �ϰ�,
	�ѹ��� 4����Ʈ�� �����ϵ��� �Ѵ�.
	(4����Ʈ ������ ����Ÿ�� ���� ó���� �ʿ�)
	ex>
		���� ���� : source.txt
		��� ���� : dest.txt

*/



//int main()
//{
//
//	// : source code
//	FILE *ifp, *ofp, temp;
//	int size, n;
//	char t;
//
//	ifp = fopen("99.txt", "rb");
//	ofp = fopen("dest.png", "wb");
//
//	if (ifp == NULL || ofp == NULL)
//	{
//		printf("����\n");
//		return 1;
//	}
//	
//	fseek(ifp, 0, SEEK_END);
//	size = ftell(ifp);
//	printf("������ ������ ũ�� : %d\n", size);
//	rewind(ifp);
//
//	while (!feof(ifp))
//	{
//		if (ftell(ifp) < size - 3)
//		{
//			n = fread(&temp, 1, 4, ifp);
//			fwrite(&temp, 1, 4, ifp);
//		}
//		else
//		{
//			while (!feof(ifp))
//			{
//				n = fread(&temp, 1, 1, ifp);
//				fwrite(&temp, 1, 1, ifp);
//			}
//		}
//
//		printf("\r������ : %3.2lf (%d / %d)", ((double)ftell(ofp) / (double)size * (double)100), ftell(ofp), size);
//	}
//
//	fclose(ifp);
//	fclose(ofp);
//
//
//	return 0;
//
//
//}
int main()
{

	// : source code
	FILE *ifp, *ofp, temp;
	int size, n;
	char t;

	ifp = fopen("99.txt", "rb");
	ofp = fopen("dest.png", "wb");

	if (ifp == NULL || ofp == NULL)
	{
		printf("����\n");
		return 1;
	}

	fseek(ifp, 0, SEEK_END);
	size = ftell(ifp);
	printf("������ ������ ũ�� : %d\n", size);
	rewind(ifp);

	while (1)
	{
		if (ftell(ifp) < size - 3)
		{
			n = fread(&temp, 1, sizeof(int), ifp);
			if (feof(ifp) != 0)
				break;
			fwrite(&temp, 1, sizeof(int), ofp);
		}
		else
		{
			n = fread(&temp, 1, sizeof(char), ifp);
			if (feof(ifp) != 0)
				break;
			fwrite(&temp, 1, sizeof(char), ofp);
		}

		printf("\r������ : %3.2lf (%d / %d)", ((double)ftell(ofp) / (double)size * (double)100), ftell(ofp), size);
	}

	fclose(ifp);
	fclose(ofp);


	return 0;


}