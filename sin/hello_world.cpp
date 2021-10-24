#include<stdio.h>

int main(void)
{
	int score = 85;
	if(score >= 90)
	{
		printf("당신의 점수는 A입니다.\n");
	}
	else if(score >= 80)
	{
		printf("당신의 점수는 B입니다.\n");
	}
    else if(score >= 70)
	{
		printf("당신의 점수는 C입니다.\n");
	}
	else
	{
		printf("당신의 점수는 F입니다.\n");
	}
	return 0;
}
