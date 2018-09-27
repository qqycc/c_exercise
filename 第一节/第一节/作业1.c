//作业1
//#include <stdio.h>
//
//int main()
//{
//	printf("100-200以内的素数为:\n");
//	int i = 100;
//	int a;
//	while (i <= 200){
//		for (a = 2; a < i; a++){
//			if (i%a == 0){
//				break;
//			}
//		}
//		if (a == i){
//				printf("%d ", i);
//			}
//		i++;
//	}
//	system("pause");
//	return 0;
//}

////作业2
//#include<stdio.h>
//
//int Multiply(int i, int j){
//	int z = i*j;
//	return z;
//}
//
//int main(){
//	int i=1, j=1, accu;
//	for (i; i < 10; i++) {
//		for ( j; j < 10; j++){
//			accu = Multiply(i, j);
//			printf("%d*%d=%d\t", i, j, accu);
//		}
//		if (j==10){
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

////作业2
//#include<stdio.h>
//int main(){
//	int i, j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < 10; j++){
//			if (i >= j){
//				printf("%d*%d=%d\t", i, j, i*j);
//			}
//		}
//		if (j = 10){
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

////作业3
//#include <stdio.h>
//
//int main(){
//	printf("1000年-2000年之间的闰年为：\n");
//	int i ;
//	for (i = 1000; i <= 2000; i++){
//		if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0))){
//			printf("%d\t", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

////作业2.1
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	int c;
//	printf("a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后，a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

////作业2.11
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	a = a + b;  //和
//	b = a - b;  //a
//	a = a - b;  //b
//	printf("交换后，a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

////作业2.2
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0,max=0;
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	printf("现有10个数字：0,1,2,3,4,5,6,7,8,9\n");
//	for (i; i < 10; i++){
//		max = arr[0];
//		for (i; i<10; i++){
//			if (arr[i] >max){
//				max = arr[i];
//			}
//		}
//	}
//	printf("10个数中最大的为：%d\n", max);
//	system("pause");
//	return 0;
//}

////作业2.2改进
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0, max = 0;
//	int arr[10];
//	printf("请输入10个数字\n");
//
//	for (i; i < 10; i++){
//		scanf("%d", &arr[i]);
//		if (arr[i] >max){
//		   max = arr[i];
//		  }
//	}
//	printf("10个数中最大的为：%d\n", max);
//	system("pause");
//	return 0;
//}

//作业2.3
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//	int i, j, m;
//	int arr[3];
//	printf("请输入3个数字\n");
//	for (i = 0; i < 3; i++){
//		scanf("%d", &arr[i]);
//	}
//		for (j = 0; j <3; j++){
//			for (i=0; i <2-j; i++){
//				if (arr[i] < arr[i + 1]){
//					m = arr[i];
//					arr[i] = arr[i + 1];
//					arr[i + 1] = m;
//				}
//			}
//		}
//		printf("三个数由大到小排列：\n");
//	for (i; i < 3; i++){
//		printf("%d  ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

////作业3.1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int arr1[], int arr2[],int length){
//	int i,temp;
//	for (i = 0; i < length; i++){
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main(){
//	int arr1[5];
//	int arr2[5];
//
//	printf("请输入数组1：\n");
//	for (int i = 0; i < 5; i++){
//      scanf("%d", &arr1[i]);
//	}
//
//	printf("请输入数组2：\n");
//	for (int i = 0; i < 5; i++){
//		scanf("%d", &arr2[i]);
//	}
//	
//	swap(arr1, arr2, 5);
//
//	printf("交换后\n数组1： ");
//		for(int i=0; i < 5; i++){
//			printf("%d ", arr1[i]);
//	}
//
//		printf("\n数组2： ");
//		for (int i=0; i < 5; i++){
//			printf("%d ", arr2[i]);
//		}
//
//	system("pause");
//	return 0;
//}

////作业3.2
//#include <stdio.h>
//#include <stdlib.h>
//
//double add(double a, double b){
//	double sum = a + b;
//	return sum;
//}
//
//int main(){
//	int  i,j;
//	double sum1 = 1, sum2 = 0;
//	//第一部分之和
//	for (i=1; i < 50; i ++){
//		 sum1=add(sum1, 1.0/(2 * i + 1));
//	}
//	//第二部分之和
//	for (j=1; j < 50; j++){
//		sum2 = add(sum2, 1.0/(2 * j ));
//	}
//
//	printf("%lf\n", sum1 - sum2);
//
//	system("pause");
//	return 0;
//}

////作业3.2优化
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int  i,t=1;
//	double sum= 0;
//	
//	for (i = 1; i < 101; i++){
//			sum +=(1.0/(t*i));
//	     	t=-t;
//	}
//	printf("%lf\n", sum);
//
//	system("pause");
//	return 0;
//}

//作业3.3
#include<stdio.h>
#include<stdlib.h>

int main(){
	int time = 0;
	int i = 1;
	for (i; i < 101; i++){
		if(i%10==9){
			time += 1;
		}	
		if (i / 10 == 9){
			time += 1;
		}
	}
	printf("%d\n", time);
system("pause");
return 0;
}



