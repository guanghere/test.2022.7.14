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





			//变量的创建可以放到大括号外部
			//执行性的代码只能放在函数（大括号）内部

//extern int g_val;//声明要使用其他工程的的变量
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

			
							//局部变量优先

//	int a = 10;
//int main()
//{
//	int a = 1;
//
//	printf("a = %d \n ", a);
//
//	return 0;
//}
							//优先打印a	因为局部变量优先






					//用if else 语句判断一个数的末尾是不是0
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
//	return a;		//返回值千万要注意不能为0
//}







//int main()
//{
//
//	int a = 0;
//	//int b = 0;
//	//int c = 0;
//	scanf("%d", &a);
//	
//	if (a < 18)								//如果一个语句有多个条件，需要加{}构成一个代码块！
//	{
//		printf("未成年");
//		printf("\n智者不如爱河");
//	}
//
//	else if (a == 18)
//		printf("成年");
//
//	else if (a >= 19 && a <= 25)
//		printf("青年");
//
//	else if (a >= 26 && a <= 35)
//		printf("青壮年");
//
//	else if (a >= 36 && a <= 45)
//		printf("壮年");
//
//	else if (a >= 46 && a <= 55)
//		printf("老年");
//
//	else if (a >= 56 && a <= 60)
//		printf("仙人");
//	else
//		("未知");
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (5 == a)					//两个整形变量进行比较的时候，把常量放在左边，不容易出错
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
//		printf("不是奇数\n");
//	else
//		printf("是奇数\n");
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


						//switch 语句用于多分支的场景
//switch（整形表达式）
// {
//		语句项；
//		{
//		case整形变量表达式； 
//		语句；	
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
//	default:								//所以case不能匹配的选项都会来到这里
//		printf("\n输入错误，请重新输入！\n");
//			break;
//
//	}
//
//	return 0;
//}

//int main()
//{
//	
//	while (1)//()里面的是表达式 ， 非0为真  执行   
//		printf("0 1 0 1 0 1 0 1");			//这些是循环语句 ；
//
//	return 0;
//}




//int main()
//{
//	int a = 1;
//
//	//在while循环中 break用于永久的终止循环
//
//	while (a <= 10)		//	（）里面的是判断表达式
//	{
//
//		if (a == 5)
//		break;		//等于5直接终止循环，没有打印5！
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
//			continue;			//在while循环中，continue的作用的跳过本次循环continue后面的代码！
//								//直接去判断部分，看是否进行下一次循环！
//		printf("%d ", a);
//		a++;
//	}
//		
//	return 0;
//}




//int main()
//{
//	char password[20] = { 0 };		// password 本身就是一个数组 所以不用取地址
//
//	printf("请输入密码!");
//
//	//scanf_s("%s", password, 20);//不用加第一行			// password 本身就是一个数组 所以不用取地址
//
//	scanf("%s", password);//要加第一行
//
//	printf("请确认密码! (Y/N)\n ");
//
//	//getchar();	//清理缓冲区的	\n
//	
//	int a = 0;					//读取一个字符放到	a	里面
//
//	while ((a = getchar()) != '\n')		//不等于 \n 的意思是  如果获取的值不等于 \n 那么就一直循环  直到等于 \n
//	{
//		;			//空语句  不等于 \n 就一直循环  直到等于 \n 再跳出循环
//	}
//
//	int ch = getchar();	//输入一个字符 再获取
//
//	if (ch =='Y')
//	{
//		printf("确认成功！\n");
//	}
//
//	else
//	{
//		printf("确认失败！\n");
//	}
//
//	return 0;
//}
	



					//for循环的语法形式		for（表达式1；表达式2；表达式3）
					//							初始化	   判断		调整
					//							循环语句；

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		/*if (a == 5)
//			break;*/
//
//		if (a == 5)
//			continue;		// continue只会跳过本次循环后面的代码
//
//		printf(" %d ",  a );
//	}
//	return 0;
//}

int main()
{
	//for循环的判断部分不能随便省略
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