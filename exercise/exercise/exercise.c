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
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	int g,s,b;
	printf("0~999之间的水仙花数为：\n");
	for (i; i < 1000; i++){
		g = i % 10;
		s = i / 10 - (i / 100)*10;
		b = i / 100;
		if (i ==g*g*g+s*s*s+b*b*b){
			printf("%d  ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}




