#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,temp;
	int unit, decade, hundred;//�ֱ��ʾ��λ��ʮλ����λ��
	for (num = 100; num < 1000; num++)
	{
		temp = num;
		unit = temp % 10;//��ȡ��λ��
		temp /=10;
		decade = temp % 10;//��ȡʮλ��
		hundred = temp / 10;
		if (num == (pow(unit, 3) + pow(decade, 3) + pow(hundred, 3)))
			printf("%d\n", num);
	}


	system("pause");
	return 0;
}