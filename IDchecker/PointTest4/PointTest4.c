#include <stdio.h>

char CHECK[20] = { 0 };
void ID();
void CARD();



void main()
{
	int i;

	while (1)
	{
		for (i = 0; i < 20; i++)
		{
			CHECK[i] = 0;
		}
		printf("�Է°�:");
		for(i=0;i<20;i++)
		{
			scanf("%c", &CHECK[i]);
			if (CHECK[i] == 32 || CHECK[i] == 45)
			{
				i--;
				continue;
			}
			if (CHECK[i] == 10)
			{
				break;
			}
			CHECK[i] = CHECK[i] - 48;
		  
		}
		if (i > 14)
		{
			CARD();
		}
		else
		{
			ID();
		}
	}

}
void CARD()
{
	if (CHECK[17 ]> 0)
	{
		printf("���������� �ƴմϴ�.\n");
		while (getchar() != '\n');
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if (CHECK[i] > 57 || CHECK[i] < 48)
			{
				continue;
			}
			else
			{
				printf("���������� �ƴմϴ�.\n");
				break;
			}
			
		}
		printf("ī���ȣ�� �½��ϴ�.\n");
	}
}
void ID()
{
	int k = 2, result = 0, total = 0;

	for (int i = 0; i < 12; i++)
	{
		total += CHECK[i] * (k + i);

		if (i == 7)
		{
			k = -6;
			continue;
		}
	}
	result = (11 - (total % 11)) % 10;
	if (result == CHECK[12])
	{
		printf("�ֹι�ȣ�� �½��ϴ�.\n");
	}
	else
	{
		printf("���������� �ƴմϴ�.\n");
	}
}
