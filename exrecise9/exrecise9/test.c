#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = { 9,7,5,3,1};
	int* p = &arr[0];
	int* p1 = &arr[1];
	if (p < p1){
		printf("p<p1\n");
	}
	else{
		printf("p>=p1\n");
	}
	system("pause");
	return 0;
	}


//int main(){
//
//	system("pause");
//	return 0;
//}

//int main(){
//	int n = 0x11223344;  //内存存的位44 33 22 11
//	//字节序：对于一个整形变量来说
//	//            若高位存在低字节的内存上，称为小端序
//	//            若高位存在高字节的内存上，称为大端序
//	char* p = &n; //只可修改一个字节
//	*p = 0x55;
//	printf("%x\n",n);
//	system("pause");
//	return 0;
//}

//int main(){
//	char* p = NULL;
//	p += 1;  //+1是指 指针里的房间号跳过了指针指向的房间的大小
//	int* a = NULL;
//	a += 1;
//	printf("p=%p\n", p);
//	printf("a=%p\n", a);
//	system("pause");
//	return 0;
//}