//ð������




//1.���ز����������� 1 �ĸ��� 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int CountOneBits(unsigned int value)
//{
//	//1.ת��Ϊ������,����2ȡģ
//   // 2.��ģΪ�����������1
//	
//	//�������ֵ
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
//	printf("������һ�����֣�\n");
//	scanf("%d", &num);
//	printf("1�ĸ���Ϊ%d\n",CountOneBits(num));
//
//	system("pause");
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ�� �ֱ�������������С�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////1.������ת��Ϊ������
////2.���ڶ��������������ֶ�2����ȡģ��
////��ȡģ��õ��ĵ�����������Ϊż��λ��ż��ͬ��
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
//	printf("����������λ����Ϊ:\n");
//	for (j=0; j <= i; j++){
//		printf("%d ", arro[j]);
//	}
//	printf("\n������ż��λ����Ϊ:\n", arre);
//	for (j=0; j <= i; j++){
//		printf("%d ", arre[j]);
//	}
//	printf("\n");
//}
//
//int main(){
//	int num;
//	printf("������һ�����֣�\n");
//	scanf("%d", &num);
//	Sequence(num);
//	system("pause");
//	return 0;
//}

//3.���һ��������ÿһλ��
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
//	printf("������һ����\n");
//	scanf("%d", &num);
//	printf("ÿһλΪ��");
//	Func(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//4.����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����ת��Ϊ����Ķ�����
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
	printf("�������������֣�\n");
	scanf("%d %d", &num1, &num2);
	//int new_num1=Trans(num1);
	//int new_num2 = Trans(num2);
	printf("��%dλ(bit)��ͬ\n",Compare(num1, num2));
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