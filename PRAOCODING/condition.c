#include <stdio.h>
#include <time.h>

int main(void)
{
	// ������ ź�ٰ� ����. �л� / �Ϲ������� ���� (�Ϲ��� : 20��)
	//int age = 25;
	//// if (����) { . . . } else { . . . }
	//if (age >= 20)
	//{
	//	printf("�Ϲ���\n");
	//}
	//else
	//{
	//	printf("�л�\n");
	//}

	// �ʵ��л�(8~13) / ���л�(14~16) / �����л�(17~19)���� ������?
	/*int age = 25;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л�\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л�\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("�����л�\n");
	}
	else
	{
		printf("�л��� �ƴ�\n");
	}*/

	// break / contiunue
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/

	// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ ������Դϴ�.\n", i);
		}
	}*/

	// && ||
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a �� b Ȥ�� c�� d�� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�.\n");
	}*/

	// ���� 0 ���� 1 �� 2
	//srand(time(NULL));
	//int i = rand() % 3; // 0 - 2 ��ȯ
	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else if (i == 2)
	//{
	//	printf("��\n");
	//}
	//else
	//{
	//	printf("����");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; // 0 - 2 ��ȯ
	//switch (i)
	//{
	//case 0:printf("����\n"); break;
	//case 1:printf("����\n"); break;
	//case 2:printf("��\n"); break;
	//default:printf("����\n"); break;
	//}
// �ʵ��л�(8~13) / ���л�(14~16) / �����л�(17~19)���� ������?
	/*int age = 6;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л�\n"); break;
	case 17:
	case 18:
	case 19:printf("�����л�\n"); break;
	default:printf("�л��� �ƴմϴ�.\n"); break;

	}*/


	/*if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л�\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л�\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("�����л�\n");
	}
	else
	{
		printf("�л��� �ƴ�\n");
	}*/

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100����
	//printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (1) // 1�� ��, 0�� �����̱⿡ while(1)�� ����� �� while �� ���� ��� ���� ����
			  // �Ǵ� while (chance > 0)�� ��� ����
	{
		printf("���� ��ȸ�� %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num)
		{
			printf("UP ��\n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�!\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��Ф�\n\n");
		}

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�.\n");
			break;
		}
	}
	return 0;	
}