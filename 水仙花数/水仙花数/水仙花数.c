#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,temp;
	int unit, decade, hundred;//分别表示个位、十位、百位。
	for (num = 100; num < 1000; num++)
	{
		temp = num;
		unit = temp % 10;//提取个位数
		temp /=10;
		decade = temp % 10;//提取十位数
		hundred = temp / 10;
		if (num == (pow(unit, 3) + pow(decade, 3) + pow(hundred, 3)))
			printf("%d\n", num);
	}


	system("pause");
	return 0;
}