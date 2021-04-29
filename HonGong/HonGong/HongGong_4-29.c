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
//		printf("파일이 열리지 않았습니다.\n");
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
//		printf("입력 파일을 열지못함\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지못함\n");
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
//		printf("a 파일을 열지못함\n");
//		return 1;
//	}
//
//	b_ifp = fopen("b.txt", "r");
//	if (b_ifp == NULL)
//	{
//		printf("b 파일을 열지못함\n");
//		return 1;
//	}
//
//	c_ifp = fopen("c.txt", "w");
//	if (c_ifp == NULL)
//	{
//		printf("c 파일을 열지못함\n");
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
//		printf("a 파일을 열지못함\n");
//		return 1;
//	}
//
//	b_ifp = fopen("b.txt", "r");
//	if (b_ifp == NULL)
//	{
//		printf("b 파일을 열지못함\n");
//		return 1;
//	}
//
//	c_ifp = fopen("c.txt", "w");
//	if (c_ifp == NULL)
//	{
//		printf("c 파일을 열지못함\n");
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
문1.
	99.txt.파일을 만들고 여기에 구구단을 저장하는 프로그램을 작선.
	원하는 구구단을출력하는 프로그램을 작성.
	2 x 1 = 2
	2 x 2 = 4
	.
	.
	.

	입력>	출력을 원하는 구구단은 ? 2
	출력>
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
//		printf("파일 열기 실패\n");
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
//	printf("출력하는 구구단은?");
//	scanf("%d", &n);
//	rewind(fp);
//	fseek(fp, (108 * (n - 2)), SEEK_SET);
//
//	printf("%d단\n", n);
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
문2.
	파일 복사 프로그램 만들기
	복사할 파일명과 복사후 생성되는 파일명을 입력받아서
	파일의 내용을 복사하는 프로그램 작성.
	단. txt 파일뿐만 아니라 이미지 파일등의 모든 종류의 파일에
	다 동일하게 적용할 수 있어야 한다.
	복사 진행 과정을 백분율로 화면에 표시해주도록 하고,
	한번에 4바이트씩 복사하도록 한다.
	(4바이트 이하의 데이타에 대한 처리가 필요)
	ex>
		원본 파일 : source.txt
		대상 파일 : dest.txt

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
//		printf("실패\n");
//		return 1;
//	}
//	
//	fseek(ifp, 0, SEEK_END);
//	size = ftell(ifp);
//	printf("전송할 파일의 크기 : %d\n", size);
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
//		printf("\r복사중 : %3.2lf (%d / %d)", ((double)ftell(ofp) / (double)size * (double)100), ftell(ofp), size);
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
		printf("실패\n");
		return 1;
	}

	fseek(ifp, 0, SEEK_END);
	size = ftell(ifp);
	printf("전송할 파일의 크기 : %d\n", size);
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

		printf("\r복사중 : %3.2lf (%d / %d)", ((double)ftell(ofp) / (double)size * (double)100), ftell(ofp), size);
	}

	fclose(ifp);
	fclose(ofp);


	return 0;


}