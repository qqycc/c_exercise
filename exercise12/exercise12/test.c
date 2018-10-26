#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
//请找出这个数字。（使用位运算）
int main(){

	system("pause");
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////不使用（a + b） / 2，求两个数的平均值。
//
//int main(){
//	int a, b;
//	printf("请输入两个数字：\n");
//	scanf("%d %d", &a, &b);
//	double aver = (a + b) >> 1;
//	printf("平均值为：%.4lf",aver);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
////unsigned int reverse_bit(unsigned int value); 
////这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//unsigned int ReverseBit(unsigned int value){
//	//利用数组实现
//	int j = 0;
//	int arr[32] = { 0 };
//	double num = 0;
//	int n = 0;
//
//	//将十进制转化为反向的二进制,并利用while循环将其存储在数组中
//	while (j < 32){
//		arr[j] = value % 2;
//		value /= 2;
//		j++;
//	}
//
//	//反向的二进制转化为十进制
//	for (j = 31; j >= 0;--j){
//		num += (arr[j] * pow(2, n));
//		n++;
//	}
//	return num;
//}
//
//int main(){
//	int num = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &num);
//	printf("%u\n", ReverseBit(num));
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	system("pause");
//	return 0;
//}