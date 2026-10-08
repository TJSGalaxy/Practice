//需求：定义两个变量，要求交换变量中记录的值
//注意：交换的代码写在一个新的函数swap中
//当有中文要输出的时候要加上：
//#include <stdlib.h>
//system("chcp 65001");   在int main函数中

#include <stdio.h>
#include <stdlib.h>
void swap(int* p1, int* p2);
//1.定义两个变量a、b分别的数值为10、20

int main() {
	system("chcp 65001");
	int a = 10;
	int b = 20;
	printf("调整前的值：a=%d，b=%d\n", a, b);
	swap(&a, &b);            //注意这里一定要标的是啊a、b的内存地址，即&a、&b
	printf("调整后的值：a=%d，b=%d\n",a, b);


	return 0;
}
//2.写一个交换数值的新代码swap
void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}