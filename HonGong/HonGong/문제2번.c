#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



double Calc_Angle(int hour, int min, int sec);

int main()
{
	int hour, min, sec;
	printf("시 분 초를 입력하시오 : ");
	scanf("%d %d %d", &hour, &min, &sec);

	printf("시침과 분침사이의 각도는 : %.3lf 이다.\n", Calc_Angle(hour, min, sec));


	return 0;
}

//hour = 12 -> 1 : 30'
//min = 60 -> 1 : 6'
//min 1 = 1/60 hour = hour 0.5'
//sec 1 = 1/60 min = min 0.1'
//sec 1 = 1/3600hour = hour 1/120'

//min angle = min * 6 + sec * 0.1
//hour angle = hour * 30 + 

double Calc_Angle(int hour, int min, int sec)
{
	double hour_angle, min_angle, res;
	hour_angle = hour * 30 + min * 0.5 + sec * (1.0 / 120.0);
	min_angle = min * 6 + sec * 0.1;



	if (hour_angle > min_angle)
		res = hour_angle - min_angle;
	else
		res = min_angle - hour_angle;

	if (res > 180)
		res = 360 - res;


	return res;
}