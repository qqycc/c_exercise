#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//student a am i 
//i ma a tneduts 
//i am a student 


int Strlen(char* str){
	//str指向的是一个空字符串
	if (*str == '\0'){
		return 0;
	}
	//str指向的不是一个空字符串，当前字符是字符串中的一个元素
	return 1 + strlen(1 + str);
}

//数组被函数调用，隐式退化为指针
void Flip(char *str, int sz)
{ 
	char *str1 = str;
	char *left = str;
	char *right = str + sz - 1;
	while (left < right) { 
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}     
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') && (*str1 != ' '))
		{
			str1++;
		}
		right = str1 - 1;               
		while (left < right) {
			char temp = *left;
			*left = *right;
			*right = temp;
			left++;
			right--;
		}
		if (*str1 == ' ')            
		{
			str1++;
		}
	}
}

int main(){
	char arr[] = "student a am i";
	int length = Strlen(arr);
	//翻转
	Flip(arr,length);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[11] = { 11,10,1,1,20,7,9,20,10,11,7 };
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 11;++i){
//		int count=0;
//		for ( j=0; j < 11; ++j){
//			if (i == j){
//				continue;
//			}
//			if ((arr[i] ^ arr[j])==0){
//				break;
//			}
//			else{
//				count++;
//			}
//			if (count == 10){
//				printf("单独出现的是：%d\n", arr[i]);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
////请找出这个数字。
//int main(){
//	int arr[11] = { 11,10,1,1,20,7,9,20,10,11,7 };
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 11;++i){
//		int count=0;
//		for ( j=0; j < 11; ++j){
//			if (i == j){
//				continue;
//			}
//			if (arr[i] == arr[j]){
//				break;
//			}
//			else{
//				count++;
//			}
//			if (count == 10){
//				printf("单独出现的是：%d\n", arr[i]);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

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
//	//求平均值，即将a与b不同的部分除以二，加到较小数的部分
//	if (a < b){
//		printf("平均值为：%d\n", a + ((b - a) >> 1));
//	}
//	else{
//		printf("平均值为：%d\n", b + ((a - b) >> 1));
//	}
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
