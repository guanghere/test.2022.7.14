#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a = 2;
//	b = 3;
//	c = a + b;
//	printf("%d", c);
//
//
//	return 0;
//}





			//�����Ĵ������Էŵ��������ⲿ
			//ִ���ԵĴ���ֻ�ܷ��ں����������ţ��ڲ�

//extern int g_val;//����Ҫʹ���������̵ĵı���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a ,&b);
//	c = a + b;
//	printf("c=%d\n", c);
//	printf("%d", g_val);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 10;
//	b = 5;
//	c = a - b;
//	printf("%d\n", c);
//	c = a + b;
//	printf("%d", c);
//
//	return 0;
//}

//int main()
//{
//	/*int a, b, c;
//	scanf("%d%d", &a ,&b);
//	c = a + b;
//	printf("%d+%d=%d",a,b, c);*/
//	printf("\a");
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 0;
//
//	c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}

			
							//�ֲ���������

//	int a = 10;
//int main()
//{
//	int a = 1;
//
//	printf("a = %d \n ", a);
//
//	return 0;
//}
							//���ȴ�ӡa	��Ϊ�ֲ���������






					//��if else ����ж�һ������ĩβ�ǲ���0
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	if (a % 10 == 0)
//
//		printf("yes");
//		
//	else
//
//		printf("no");
//
//	return a;		//����ֵǧ��Ҫע�ⲻ��Ϊ0
//}







//int main()
//{
//
//	int a = 0;
//	//int b = 0;
//	//int c = 0;
//	scanf("%d", &a);
//	
//	if (a < 18)								//���һ������ж����������Ҫ��{}����һ������飡
//	{
//		printf("δ����");
//		printf("\n���߲��簮��");
//	}
//
//	else if (a == 18)
//		printf("����");
//
//	else if (a >= 19 && a <= 25)
//		printf("����");
//
//	else if (a >= 26 && a <= 35)
//		printf("��׳��");
//
//	else if (a >= 36 && a <= 45)
//		printf("׳��");
//
//	else if (a >= 46 && a <= 55)
//		printf("����");
//
//	else if (a >= 56 && a <= 60)
//		printf("����");
//	else
//		("δ֪");
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (5 == a)					//�������α������бȽϵ�ʱ�򣬰ѳ���������ߣ������׳���
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}



//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	if (a % 2 == 0)
//		printf("��������\n");
//	else
//		printf("������\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//
//	for (a = 1; a <= 100; a ++)
//	{
//
//		if (a % 2 == 1)
//		printf("%d  ", a);
//	}
//
//	return a;
//}


						//switch ������ڶ��֧�ĳ���
//switch�����α��ʽ��
// {
//		����
//		{
//		case���α������ʽ�� 
//		��䣻	
//			}
// 
// }


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("sunday\n");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("\nweekday!\n");
//		break;
//
//	case 6:
//	case 7:
//		printf("\nrest days!\n");
//		break;	
//	default:								//����case����ƥ���ѡ�����������
//		printf("\n����������������룡\n");
//			break;
//
//	}
//
//	return 0;
//}

//int main()
//{
//	
//	while (1)//()������Ǳ��ʽ �� ��0Ϊ��  ִ��   
//		printf("0 1 0 1 0 1 0 1");			//��Щ��ѭ����� ��
//
//	return 0;
//}




//int main()
//{
//	int a = 1;
//
//	//��whileѭ���� break�������õ���ֹѭ��
//
//	while (a <= 10)		//	������������жϱ��ʽ
//	{
//
//		if (a == 5)
//		break;		//����5ֱ����ֹѭ����û�д�ӡ5��
//
//		printf(" %d " , a);
//		a++;
//	}
//	return 0;
//}


//			continue
//int main()
//{
//	int a = 1;
//
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;			//��whileѭ���У�continue�����õ���������ѭ��continue����Ĵ��룡
//								//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ����
//		printf("%d ", a);
//		a++;
//	}
//		
//	return 0;
//}




//int main()
//{
//	char password[20] = { 0 };		// password �������һ������ ���Բ���ȡ��ַ
//
//	printf("����������!");
//
//	//scanf_s("%s", password, 20);//���üӵ�һ��			// password �������һ������ ���Բ���ȡ��ַ
//
//	scanf("%s", password);//Ҫ�ӵ�һ��
//
//	printf("��ȷ������! (Y/N)\n ");
//
//	//getchar();	//����������	\n
//	
//	int a = 0;					//��ȡһ���ַ��ŵ�	a	����
//
//	while ((a = getchar()) != '\n')		//������ \n ����˼��  �����ȡ��ֵ������ \n ��ô��һֱѭ��  ֱ������ \n
//	{
//		;			//�����  ������ \n ��һֱѭ��  ֱ������ \n ������ѭ��
//	}
//
//	int ch = getchar();	//����һ���ַ� �ٻ�ȡ
//
//	if (ch =='Y')
//	{
//		printf("ȷ�ϳɹ���\n");
//	}
//
//	else
//	{
//		printf("ȷ��ʧ�ܣ�\n");
//	}
//
//	return 0;
//}
	



					//forѭ�����﷨��ʽ		for�����ʽ1�����ʽ2�����ʽ3��
					//							��ʼ��	   �ж�		����
					//							ѭ����䣻

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		/*if (a == 5)
//			break;*/
//
//		if (a == 5)
//			continue;		// continueֻ����������ѭ������Ĵ���
//
//		printf(" %d ",  a );
//	}
//	return 0;
//}

int main()
{
	//forѭ�����жϲ��ֲ������ʡ��
	int a = 0;
	int b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			printf("hehe \n");

		}
	}

	return 0;
}