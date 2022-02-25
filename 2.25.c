#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	for (i; i < 100; i++)
//	{
//		printf("%d\n", rand() % 10);
//	}
//	
//	return 0;
//#include<stdio.h>
//#include<stdlib.h>#include<stdlib.h>#include<stdio.h>#include<time.h>
//#include<time.h>
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	for (i; i < 10; i++)
//	{
//		printf("%d\n", rand() % 5);
//	}
//	return 0;
//}
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int value=0;
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	num = rand()  % 10+1;
//	while (1)
//	{
//		scanf("%d", &value);
//		if ((value > 10)||(value<0) )
//		{
//			printf("输错了\n");
//			continue;
//		}
//		if (value > num)
//		{
//			printf("大了\n");
//		}
//		else if(value<num)
//		{
//			printf("小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//			
//	}
//	return 0;
//}
//#include<stdio.h>
//int add(int a, int b)
//{
//	int sum = 0;
//	sum = b + a;
//	return sum;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//
//	printf("%d\n",sum);
//		return 0;
//}
//#include<stdio.h>
//int add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
////return sum;
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//值传递 形参不能改变实参的值
//地址传递  可以改变实参
//#include<stdio.h>
//int swap(int a, int b)
//{
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	return a;
//	return b;
//	
//	/*int* pa = &a;
//	int* pb = &b;
//	int temp = a;
//	*pa = b;
//	*pb = temp;
//	return */
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	swap(x, y);
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}
//#include<stdio.h>
//int swap(int a, int b)
//{
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	return a;
//	return b;
//
//	/*int* pa = &a;
//	int* pb = &b;
//	int temp = a;
//	*pa = b;
//	*pb = temp;
//	return */
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	swap(x, y);
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	return x> y ?  x  :y;
//
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = max(a,b);
//	printf("%d\n", c);
//
//	
//	return 0;
//
//
//#include<stdio.h>
//int bubble_sort(int arr[],int len)
//{
//	int i = 0;
//	int j = 0;
//	int temp;
//	for (j = 0; j < len-1; j++)
//	{
//		for (i = 0; i < len-1- j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//
//		}
//	}
//	return arr;
//}
//int main()
//{
//	int arr[10] = { 0,1,3,2,5,4,6,7,9,8 };
//	bubble_sort(arr, 10);
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int MA(int a, int b)
//{
//	return a + b;
//
//
//}
//int MB(int a, int b)
//
//{
//	return MA;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = MB(a,b);
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
////递归函数
//#include<stdio.h>
//   int a = 10;
//void test()
//{
//	printf("%d\n", a);
// }
//int main()
//{
//	//auto int a = 10;
//	//局部变量，作用域：
//	test();
//	return 0;
//}
//#include<stdio.h>
//#define SUM(x,y) (x+y)
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = SUM(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//带参数的宏定义
//#include<stdio.h>
//#define MAX(x,y) ((x>y)?(x):(y))
//
//int main()
//{
//	int a = 78;
//	int b = 98;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char* p = &a;
//	*p = 20;
//	printf("%d\n", *(&a));
//	return 0;
//}

//#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d\nb=%d", a, b);
//	return 0;
//}

//	}#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0, };
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < 10-1; i++)
//	{
//		for (j = 0; j < 10 - i - 1;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	return 0;
//}
//#include<stdio.h>
//void swap(int* arr, int len)
//{
//	int i = 0;
//	
//	 	int j = 0;
//		int temp = 0;
//		for (i = 0; i < len -1; i++)
//		{
//			for (j = 0; j < len - i - 1;j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//}
//int main()
//{
//	int m = 0;
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	while ( arr[m++] != 0)
//	{
//		;
//	}
//	printf("%d\n", m);
//	swap(arr, m);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int a = 10;
//int* test()
//{
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	i = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", i);
//	return  0;
//
//}


