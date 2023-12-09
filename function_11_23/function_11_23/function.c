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
//	//strcpy - string copy - 字符串拷贝相关
//	//strlen - string length - 字符串长度有关
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
//	int* pa = &a;//pa是指针变量
//	*pa = 20;//解引用操作
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
////这里多加一个参数，因为形参int arr[]表面上是一个数组
////实际上传输过来的是原数组首个元素的地址
////本质上是一个指针，无法在函数内部进行数组长度计算
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
//		printf("找不到指定数字\n");
//	else
//		printf("找到啦,该数字是%d\n", arr[ret]);
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
//	//printf函数的返回值是（如果成功，返回写入字符的总数）
//	//则：先输出43，返回2；再输出2，返回1；最后输出1
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