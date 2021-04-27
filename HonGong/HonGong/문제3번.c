#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


int main()
{
	int n = 131, temp, i = 7;
	char b_n[9];
	memset(b_n, '0', 9);
	b_n[8] = 0;
	temp = n;
	while (temp > 0)
	{
		if (temp % 2 == 0)
			b_n[i] = '0';
		else
			b_n[i] = '1';
		temp /= 2;
		i--;
	}


	printf("10진수 %d 는 이진수로 %s 입니다.", n, b_n);





	return 0;
}
