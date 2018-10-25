#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned char a=255;
	//本应为0111 1111
	//整型提升为0000 0000 0000 1111 1111
	//->0000 0000 0001 1111 1110
	//->0000 0000 0000 1111 1111
	//所以最终结果为1111 1111
	unsigned char b = (a<<1)>>1;
	printf("b=%x\n", b);
	system("pause");
	return 0;
}

//int main(){
//	//字符类型的变量本质也是一个数字
//	//char ->int 相加后再强制转换为char
//	char a = 1;
//	char b = 2;
//	char c = a + b;
//	printf("c=%d\n", c);
//	system("pause");
//	return 0;
//}


//int main(){
//
//	system("pause");
//	return 0;
//}

//typedef struct Student{
//	char name[1024];
//	int age;
//};
//
//int main(){
//	struct Student student;
//	struct Student*p= &student;
//	strcpy(student.name, "张三");
//	student.age = 20;
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	system("pause");
//	return 0;
//}

//int main(){
//	int i = 0, a = 0, b = 2, c = 4;
//	i = a++ && ++b && c++; 
//	//i = a++ || ++b || c++; 
//	printf("a = %d\nb = %d\nc = %d\n\n", a, b, c); 
//	system("pause");
//	return 0;
//}

//int main(){
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}

//int main(){
//	int x = 0;
//	int x1=++x;
//	printf("++x后的x为%d\n",x);
//    x = 0;
//	int x2=x++;
//	printf("x++后的x为%d\n", x);
//	system("pause");
//	return 0;
//}

//int main(){
//	unsigned int x = 0x0;
//	int x1 = ~x;
//	int x2 = !x;
//	printf("%x按位取反：%x\n", x,x1);
//	printf("%x逻辑取反：%x\n",x, x2);
//	system("pause");
//	return 0;
//}

//int main(){
//	//利用移位操作与位操作求取二进制数中1的个数
//	int num = 22;
//	int count=0;
//	for (int i = 0; i < 32; ++i){
//		//循环一直测试num中的每一位
//		//若num变量对应位为1，则按位与不为0
//		if (num&(1 << i)){
//			++count;
//		}
//	}
//	printf("%d的二进制中有%d个1\n", num, count);
//	system("pause");
//	return 0;
//}