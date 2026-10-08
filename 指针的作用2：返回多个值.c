//指针的第2个作用：返回多个值
//需求：定义一个函数，求数组中的最大值和最小值，并进行返回

#include <stdio.h>
#include <stdlib.h>
void getmaxmin(int arr[], int len, int* max, int* min);

int main() {
	system("chcp 65001");
	//1.定义数组
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(len);
	//2.假定max,min的初始值(不是0这个数)
	int max = arr[0];
	int min = arr[0];
	//3.用到getmaxmin函数求出最大值、最小值，并赋值给max\min（用的是指针）

	getmaxmin(arr, len, &max, &min);//注意：给出的是内存地址&

	//4.输出max、min
	printf("数组的最大值为%d\n", max);
	printf("数组的最小值为%d\n", min);






	return 0;
}

void getmaxmin(int arr[], int len, int* max, int* min) {
	//求出数组中的最大值
	* max = arr[0];
	for (int i = 0;i < len;i++) {
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
	//求出数组中的最小值
	* min = arr[0];
	for (int i = 0;i < len;i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
	}
}