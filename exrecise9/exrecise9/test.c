#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	int* p1 = &arr[4];
	printf("%p\n", p);
	printf("%p\n", p1);
	printf("%d\n", p1-p); //����4�����α���
	system("pause");
	return 0;
	}


//int main(){
//
//	system("pause");
//	return 0;
//}

//int main(){
//	int n = 0x11223344;  //�ڴ���λ44 33 22 11
//	//�ֽ��򣺶���һ�����α�����˵
//	//            ����λ���ڵ��ֽڵ��ڴ��ϣ���ΪС����
//	//            ����λ���ڸ��ֽڵ��ڴ��ϣ���Ϊ�����
//	char* p = &n; //ֻ���޸�һ���ֽ�
//	*p = 0x55;
//	printf("%x\n",n);
//	system("pause");
//	return 0;
//}

//int main(){
//	char* p = NULL;
//	p += 1;  //+1��ָ ָ����ķ����������ָ��ָ��ķ���Ĵ�С
//	int* a = NULL;
//	a += 1;
//	printf("p=%p\n", p);
//	printf("a=%p\n", a);
//	system("pause");
//	return 0;
//}