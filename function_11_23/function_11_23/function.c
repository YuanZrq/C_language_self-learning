#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);//bit
//	//strcpy - string copy - �ַ����������
//	//strlen - string length - �ַ��������й�
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);//***** world
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}

//void swap(int x, int y)
//{
//
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����
//	*pa = 20;//�����ò���
//	return 0;
//}

//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//#include <math.h>
//
//int is_prime(int n)
//{
//	int c = 0;
//	for (c = 2; c <=sqrt(n); c++)
//	{
//		if (n % c == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if (n % 400 == 0||(n % 100 != 0&&n % 4 == 0))
//		return 1;
//	else 
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1582; y <= 2023; y++)
//	{
//		if (is_leap_year(y) == 1)
//			printf("%d ",y);
//	}
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
////������һ����������Ϊ�β�int arr[]��������һ������
////ʵ���ϴ����������ԭ�����׸�Ԫ�صĵ�ַ
////��������һ��ָ�룬�޷��ں����ڲ��������鳤�ȼ���
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ������\n");
//	else
//		printf("�ҵ���,��������%d\n", arr[ret]);
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}

//int main()
//{
//	int num = 0;
//	while (num < 10)
//	{
//		Add(&num);
//		printf("num=%d\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf�����ķ���ֵ�ǣ�����ɹ�������д���ַ���������
//	//�������43������2�������2������1��������1
//	return 0;
//}

#include"add.h"

int main()
{
	int x = 7;
	int y = 15;
	printf("%d", add(x, y));
	return 0;
}