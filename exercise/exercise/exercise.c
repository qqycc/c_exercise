//练习4.1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int j;
//	int i;
//	int k;
//	for (i=0; i < 7; i++){
//		for (j=0; j <6 - i; j++)
//			printf(" ");
//		for (k=0; k <= 2 * i; k++)
//			printf("*");
//		    printf("\n");
//	}
//
//	for (i = 0; i < 6; i++){
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (k = 0; k <= 10 - 2 * i; k++)
//			printf("*");
//		    printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//练习4.2
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int g,s,b;
//	printf("0~999之间的水仙花数为：\n");
//	for (i; i < 1000; i++){
//		g = i % 10;
//		s = i / 10 - (i / 100)*10;
//		b = i / 100;
//		if (i ==g*g*g+s*s*s+b*b*b){
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//练习4.3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int fir;
//	int sec;
//	int th;
//	int fou;
//	int fif;
//	printf("请输入一个个位数：\n");
//	scanf("%d", &fir);
//	sec = fir * 10 + fir;
//	th = fir*100+fir * 10 + fir;
//	fou = fir * 1000 + fir * 100 + fir * 10 + fir;
//	fif = fir * 10000 + fir * 1000 + fir * 100 + fir * 10 + fir;
//	int add = fir + sec + th + fou + fif;
//	printf("%d\n", add);
//	system("pause");
//	return 0;
//}

////例题练习
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	for (; i < 3; ++i){
//		char password[1024] = { 0 };
//		printf("请输入密码：")；
//			scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("登陆成功\n");
//			break;
//		}
//	}
//	if (i == 3){
//	}
//	else{
//
//	}
//
//	system("pause");
//	return 0;
//}

////第一节
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// 打印目录c:\test.c
//	printf("c:\test.c");  //错误的写法 \t会被当做转义字符，以制表符的形式打印
//	//正确写法
//	printf("c:\\test.c");
//
//	system("pause");
//	return 0;
//}

////笔试题
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	printf("%d\n", strlen("c:\test\32\test.c"));
//
//	system("pause");
//	return 0;
//}

////函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Add(int x, int y){
//	return x + y;
//}
//
//int main(){
//	int sum = Add(10, 20);
//	printf("sum=%d\n", sum);
//
//	system("pause");
//	return 0;
//}

////结构体
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	//结构体中包含的成员/属性
//	char name[1024];  //1024Bytes=1KB
//	int age;
//};
//
//int main(){
//	struct Student zhang{ "张三", 20 };
//	struct Student li{ "李四", 30 };
//
//	printf("%s,%s\n", zhang.name, li.name); //zhang.name中的. 取结构体中的某一个成员/属性
//
//	system("pause");
//	return 0;
//}

////同上
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Student{
//	//结构体中包含的成员/属性
//	char name[1024];  //1024Bytes=1KB
//	int age;
//} Stu;
//
//int main(){
//	Stu zhang{ "张三", 20 };
//	Stu li{ "李四", 30 };
//
//	printf("%s,%s\n", zhang.name, li.name); //zhang.name中的. 取结构体中的某一个成员/属性
//
//	system("pause");
//	return 0;
//}

////打印1-100的奇数
//#include <stdio.h>
//#include <stdlib.h>
//
//int IsOdd(int x){
//	if (x % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//
//int main(){
//	int i = 1;
//	while (i < 101){
//		if (IsOdd(1)){
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}

////笔试
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//练习****
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h> //Sleep

int main(){
	char str1[] = "hello good girl!";
	char str1[] = "****************";
	int left = 0; //该下标指向的元素为 w
	int right = strlen(str1) - 1; //该下标指向的元素为 ！

	printf("%s\n", str2);
	while (left <= right){
		Sleep(100); //休眠100毫秒
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n", str2);
		left++;
		right--;
	}

	system("pause");
	return 0;
}

//9.29
