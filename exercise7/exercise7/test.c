//冒泡排序




//1.返回参数二进制中 1 的个数 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int CountOneBits(unsigned int value)
//{
//	//1.转换为二进制,即对2取模
//   // 2.若模为二，则计数加1
//	
//	//定义计数值
//	int count=0 ;
//	int num;
//	while (value != 0){
//		num = value % 2;
//		if (num == 1){
//			count += 1;
//		}
//		value /= 2;
//	}
//	return count;
//}
//
//int main(){
//	int num;
//	printf("请输入一个数字：\n");
//	scanf("%d", &num);
//	printf("1的个数为%d\n",CountOneBits(num));
//
//	system("pause");
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////1.将数字转化为二进制
////2.由于二进制数是由数字对2反向取模，
////即取模后得到的第奇数个数字为偶数位（偶数同理）
//
//void Sequence(int num){
//	int arro[32] = { 0 };
//	int arre[32] = { 0 };
//	int i = 0;
//	int j ;
//	int count = 0;
//	while (num != 0){
//		int Odd = num % 2;
//		if (count % 2 == 0){
//			arro[i] = Odd;
//			i++;
//		}
//		else{
//			arre[i] = Odd;
//			i++;
//		}
//		count++;
//		num /= 2;
//	}
//	printf("二进制奇数位序列为:\n");
//	for (j=0; j <= i; j++){
//		printf("%d ", arro[j]);
//	}
//	printf("\n二进制偶数位序列为:\n", arre);
//	for (j=0; j <= i; j++){
//		printf("%d ", arre[j]);
//	}
//	printf("\n");
//}
//
//int main(){
//	int num;
//	printf("请输入一个数字：\n");
//	scanf("%d", &num);
//	Sequence(num);
//	system("pause");
//	return 0;
//}

//3.输出一个整数的每一位。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int num){
//	if (num > 10){
//		Func(num / 10);
//	}
//	printf("%d ", num%10);
//}
//
//int main(){
//	int num;
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	printf("每一位为：");
//	Func(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//4.两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//将数转化为反向的二进制
int Trans(int num){
	int arr[32] = { 0 };
	int i = 0;
	while (i<32){
		arr[i] = num % 2;
		i++;
		num /= 2;
	}
	return num;
}

int Compare(int num1,int num2){
	int count = 0;
	while (num1>0 && num2 > 0){
		if (num1 % 10 != num2 % 10){
			count++;
		}
		num1 /= 10;
		num2 /= 10;
	}
	
	return count;
}

int main(){
	int num1;
	int num2;
	printf("请输入两个数字：\n");
	scanf("%d %d", &num1, &num2);
	//int new_num1=Trans(num1);
	//int new_num2 = Trans(num2);
	printf("有%d位(bit)不同\n",Compare(num1, num2));
	system("pause");
	return 0;
}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	system("pause");
//	return 0;
//}