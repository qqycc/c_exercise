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

////练习****
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h> //Sleep
//
//int main(){
//	char str1[] = "hello good girl!";
//	char str1[] = "****************";
//	int left = 0; //该下标指向的元素为 w
//	int right = strlen(str1) - 1; //该下标指向的元素为 ！
//
//	printf("%s\n", str2);
//	while (left <= right){
//		Sleep(100); //休眠100毫秒
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		left++;
//		right--;
//	}
//
//	system("pause");
//	return 0;
//}

//5.1猜数字
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Menu(){
//	int choice;
//	printf("**************************\n");
//	printf("********1.开始游戏********\n");
//	printf("********2.结束游戏********\n");
//	printf("**************************\n");
//	printf("请选择是否开始游戏:");
//	scanf("%d", &choice);
//	return choice;
//}
//
//void Game(){
//	计算机生成随机数
//	int result = rand( ) % 100 + 1;
//	让用户输入所猜数字
//	int num;
//	printf("请输入一个数字:\n");
//	while (1){
//		scanf("%d", &num);
//		if (num > result){
//			printf("您猜的数字大了\n");
//		}
//		else if (num < result){
//			printf("您猜的数字小了\n");
//		}
//		else{
//			printf("恭喜你猜对了\n");
//		}
//	}
//}
//
//int main(){
//	创建一个循环
//	while (1){
//		打印菜单，供用户选择
//		int choice=Menu();
//		若用户选择进入游戏，则开始游戏
//		if (choice == 1){
//			Game();
//		}//若用户选择退出游戏，则结束循环
//		else if (choice == 2){
//			break;
//		}//若用户输入错误
//		else{
//			printf("您的输入有误，请重新输入\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//5.2折半查找
//#include <stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[],int left,int right,int key){
//	int mid;
//
//	while (left < right){
//		//折半查找：中间数=头加尾/2
//		mid = (left + right) / 2;
//		//若大于所求数，则尾的下标改为中间数-1
//		if (arr[mid]>key){   
//			right = mid - 1;
//		}//若小于所求数，则头的下标改为中间数+1
//		else if (arr[mid]<key){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;//right是下标
//	int key = 14;
//	int result = BinarySearch( arr, left, right, key);
//	if (result == -1){
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下标是：%d\n", result);
//	}
//	system("pause");
//	return 0;
//}

//5.3输密码密码正确，提示“登录成功”,密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char password[1024]="123456";
//	char pass[1024];
//	
//	for (int i = 0; i < 3; i++){
//		printf("请输入密码：\n");
//		scanf("%s", pass);
//		if (strcmp(pass, password) == 0){
//			printf("登录成功\n");
//			break;
//		}//如果输入3次，停止输入
//		else if (i != 2){
//				printf("输入错误，请重新输入\n");
//			}
//		else{
//				printf("您已输错三次，退出系统\n");
//				break;
//			}
//	}
//	system("pause");
//	return 0;
//}

//5.4可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char i;
//	int j;
//	printf("请输入一个字符：\n");
//	//一直接收，创建一个循环
//	while (1){
//		//接收字符
//		scanf("%c", &i);
//		j = i;
//		//小写=>大写
//		if (j > 64 && j < 91){
//			j += 32;
//			printf("转换后：%c\n", j);
//		}//大写=>小写
//		else if (j>96 && j < 123){
//			j -= 32;
//			printf("转换后：%c\n", j);
//		}
//	}
//
//	system("pause");
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	system("pause");
//	return 0;
//}