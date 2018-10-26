#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

////杨辉三角形
////每一行的首元素和尾元素都为1
////第n行有n个元素
////arr[n+1][i]=arr[n][i]+arr[n][i-1]
//
////打印到第N行
//#define N 10
//
//int main(){
//	int n;  //第n行
//	int i;  //每行第i个元素
//	int arr[N][N] = { 0 };
//	for (n = 0; n < N; ++n){
//		arr[n][n] = 1;
//		arr[n][0] = 1;
//	}
//	for (n = 2; n < N; ++n){
//		for (i = 1; i < n; ++i){
//			arr[n][i] = arr[n-1][i] + arr[n-1][i - 1];
//		}
//	}
//	for (n = 0; n < N;++n){
//		for (i = 0; i < (2 * N - 2 * n); ++i){
//			printf(" ");
//		}
//		for (i = 0; i <=n; ++i){
//			printf("%4d", arr[n][i]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

////A说：不是A
////B说：是C 
////C说：是D
////D说：不是D
////3真，1假
////C是凶手
////假设凶手为1
//int main(){
//	for (int a = 0; a < 2; ++a){
//		for (int b = 0; b < 2; ++b){
//			for (int c = 0; c < 2; ++c){
//				for (int d = 0; d < 2; ++d){
//					if ((a == 1) + (b == 1) + (c == 1) + (d == 1) == 1  //只有一人为凶手
//						&&(a==0)+(c==1)+(d==1)+(d==0)==3){
//						if (a == 1){
//							printf("凶手为：A\n");
//						}
//						else if (b == 1){
//							printf("凶手为：B\n");
//						}
//						else if (c == 1){
//							printf("凶手为：C\n");
//						}
//						else if (d == 1){
//							printf("凶手为：D\n");
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main(){
//	//A选手说：B第二，A第三； 
//	//B选手说：B第二，E第四；
//	//C选手说：C第一，D第二； 
//	//D选手说：C最后，D第三； 
//	//E选手说：E第四，A第一； 
//	//A 3  B 1   C 5   D 2   E 4 
//	//利用for循环
//	for (int a = 1; a < 6; ++a){
//		for (int b = 1; b < 6; ++b){
//			for (int c = 1; c < 6; ++c){
//				for (int d = 1; d < 6; ++d){
//					for (int e = 1; e < 6; ++e){
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) == 1 &&
//							//a、b、c、d、e各不相同
//							a*b*c*d*e == 120){  
//							printf("A:%d\n", a);
//							printf("B:%d\n", b);
//							printf("C:%d\n", c);
//							printf("D:%d\n", d);
//							printf("E:%d\n", e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
