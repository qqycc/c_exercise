//ѡ������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////��������
//int Swap(int* num1, int* num2){
//	int temp;
//	temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
//
////����С����ɸѡ�����������������
//int SelectionSort(int arr[ ],int size){
//	//arr[size-1]��arr[size-2]���бȽϣ���С��������size-2��
//	//ͬ��arr[size-2]��arr[size-3]���бȽϣ���С��������size-3��
//	//�Դ�����
//
//	//����һ���߽磬[0,border]�����򲿷֣�[border,size]δ���򲿷�
//	int border = 0;
//	for (border; border<size;border++){
//		//ѭ��һ�֣���һ����С����������ǰ
//		int cur = size - 1;
//		for (cur; cur > border; cur--){
//			if (arr[cur] < arr[cur - 1]){
//				Swap(&arr[cur], &arr[cur - 1]);
//			}
//		}
//	}
//	return  arr;
//}
//
//int main(){
//	int arr[] = { 9, 8, 7, 4, 2, 3, 5, 1, 6, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	SelectionSort(arr, len) ;
//	int i = 0;
//	for (i; i < len; i++){
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

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
//	int num1 = num;
//	int arr[16] = { 0 };
//	int i = 0;
//	//������Ķ����ƴ����arr[ ]��
//	while (i<16){
//		arr[i]= num % 2;
//		i++;
//		num /= 2;
//	}
//	//��������������
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int j;
//	int k = 1;
//	int temp;
//	for (j=0; j <8; j++){
//		temp = arr[j];
//		arr[j] = arr[len - k];
//		arr[len - k] = temp;
//		k++;
//	}
//	printf("%d�Ķ�����Ϊ��\n",num1);
//	for (j = 0; j < 16; j ++){
//		printf("%d", arr[j]);
//	}
//	printf("\n");
//	//ȡ�������ֲ���ӡ
//    printf("����������λ����Ϊ:\n");
//	for (j=0; j < 16; j+=2){
//		printf("%d", arr[j]);
//	}
//	//ȡż�����ֲ���ӡ
//	printf("\n������ż��λ����Ϊ:\n");
//	for (j=1; j <16; j+=2){
//		printf("%d", arr[j]);
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
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////����ת��Ϊ����Ķ�����
//int Trans(int num){
//	int arr[32] = { 0 };
//	int i = 0;
//	while (i<32){
//		arr[i] = num % 2;
//		i++;
//		num /= 2;
//	}
//	return num;
//}
//
//int Compare(int num1,int num2){
//	int count = 0;
//	while (num1>0 && num2 > 0){
//		if (num1 % 10 != num2 % 10){
//			count++;
//		}
//		num1 /= 10;
//		num2 /= 10;
//	}
//	return count;
//}
//
//int main(){
//	int num1;
//	int num2;
//	printf("�������������֣�\n");
//	scanf("%d %d", &num1, &num2);
//	//int new_num1=Trans(num1);
//	//int new_num2 = Trans(num2);
//	printf("��%dλ(bit)��ͬ\n",Compare(num1, num2));
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