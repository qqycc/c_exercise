#include <stdio.h>
#include <stdlib.h>

//�Զ�ָһ�����ͣ������͵ı���������ʾһ��ѧ��
//����
typedef struct Student{
	char name[1024];
	int score;
}Student;

int main(){
	struct Student student = {"����",90}; 
	Student* p = &student;
	printf("������%s\n������%d\n",student.name,p->score);
	system("pause");
	return 0;
}

//int main(){
//	typedef int* int_ptr;
//	int n = 100;
//	int_ptr p = &n;
//	int_ptr* pp = &p;
//	system("pause");
//	return 0;
//}

//int main(){
//	int arr[5] = { 9,7,5,3,1};
//	int* p = &arr[0];
//	int* p1 = &arr[1];
//	if (p < p1){
//		printf("p<p1\n");
//	}
//	else{
//		printf("p>=p1\n");
//	}
//	system("pause");
//	return 0;
//	}



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