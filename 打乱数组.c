//需求：定义一个数组，存1~5，要求打乱数组中所有数据的顺序

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//1.定义一个数组
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);

	//2.随机数生成
	//设置种子
	srand(time(NULL));

	//3.交换位置，i++不断变化，和任意的位置交换位置
	for (int i = 0;i < len;i++) {
		//数组位置范围是0-4
		int j = rand() % 5;
		//交换位置，设置一个中间量
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	}

	//4.遍历数组
	for (int i = 0;i < len;i++)
	{
		printf("%d", arr[i]);

	}
	return 0;
}