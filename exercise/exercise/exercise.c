//��ϰ4.1
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

//4.1�Ľ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int i,int j){
//	for (int a = 0; a < i; a++)
//		printf(" ");
//	for (int b = 0; b < j; b++)
//		printf("*");
//	    printf("\n");
//}
//
//void LingXing(int n){
//	//��ӡ����
//	//������һ��Ϊ��n�У���
//	//��һ����n-1���ո�1��*
//	//�ڶ�����n-2���ո�3��*
//	//��������n-3���ո�5��*
//	//   ......
//	//������i����n-i���ո�2*i-1��*
//	
//	//�����η�Ϊ��������������
//	int i = 1;
//	for (i; i < n; i++){
//		Print(n - i, 2 *i -1);//��
//	}
//	Print(0 , 2 *n - 1);//��
//	i -= 1;
//	for (i; i > 0; i--){
//		Print(n - i, 2 * i - 1);//��
//	}
//}
//
//int main(){
//	int n;
//	printf("������һ��������\n");
//	scanf("%d", &n);
//	LingXing(n);
//	system("pause");
//	return 0;
//}

//��ϰ4.2
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int g,s,b;
//	printf("0~999֮���ˮ�ɻ���Ϊ��\n");
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

//��ϰ4.3
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
//	printf("������һ����λ����\n");
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

////������ϰ
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	for (; i < 3; ++i){
//		char password[1024] = { 0 };
//		printf("���������룺")��
//			scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("��½�ɹ�\n");
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

////��һ��
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// ��ӡĿ¼c:\test.c
//	printf("c:\test.c");  //�����д�� \t�ᱻ����ת���ַ������Ʊ������ʽ��ӡ
//	//��ȷд��
//	printf("c:\\test.c");
//
//	system("pause");
//	return 0;
//}

////������
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

////����
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

////�ṹ��
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	//�ṹ���а����ĳ�Ա/����
//	char name[1024];  //1024Bytes=1KB
//	int age;
//};
//
//int main(){
//	struct Student zhang{ "����", 20 };
//	struct Student li{ "����", 30 };
//
//	printf("%s,%s\n", zhang.name, li.name); //zhang.name�е�. ȡ�ṹ���е�ĳһ����Ա/����
//
//	system("pause");
//	return 0;
//}

////ͬ��
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Student{
//	//�ṹ���а����ĳ�Ա/����
//	char name[1024];  //1024Bytes=1KB
//	int age;
//} Stu;
//
//int main(){
//	Stu zhang{ "����", 20 };
//	Stu li{ "����", 30 };
//
//	printf("%s,%s\n", zhang.name, li.name); //zhang.name�е�. ȡ�ṹ���е�ĳһ����Ա/����
//
//	system("pause");
//	return 0;
//}

////��ӡ1-100������
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

////����
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

////��ϰ****
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h> //Sleep
//
//int main(){
//	char str1[] = "hello good girl!";
//	char str1[] = "****************";
//	int left = 0; //���±�ָ���Ԫ��Ϊ w
//	int right = strlen(str1) - 1; //���±�ָ���Ԫ��Ϊ ��
//
//	printf("%s\n", str2);
//	while (left <= right){
//		Sleep(100); //����100����
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

//5.1������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Menu(){
//	int choice;
//	printf("**************************\n");
//	printf("********1.��ʼ��Ϸ********\n");
//	printf("********2.������Ϸ********\n");
//	printf("**************************\n");
//	printf("��ѡ���Ƿ�ʼ��Ϸ:");
//	scanf("%d", &choice);
//	return choice;
//}
//
//void Game(){
//	��������������
//	int result = rand( ) % 100 + 1;
//	���û�������������
//	int num;
//	printf("������һ������:\n");
//	while (1){
//		scanf("%d", &num);
//		if (num > result){
//			printf("���µ����ִ���\n");
//		}
//		else if (num < result){
//			printf("���µ�����С��\n");
//		}
//		else{
//			printf("��ϲ��¶���\n");
//		}
//	}
//}
//
//int main(){
//	����һ��ѭ��
//	while (1){
//		��ӡ�˵������û�ѡ��
//		int choice=Menu();
//		���û�ѡ�������Ϸ����ʼ��Ϸ
//		if (choice == 1){
//			Game();
//		}//���û�ѡ���˳���Ϸ�������ѭ��
//		else if (choice == 2){
//			break;
//		}//���û��������
//		else{
//			printf("����������������������\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//5.1�Ż�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int Menu(){
//	int choice;
//	printf("**************************\n");
//	printf("********1.��ʼ��Ϸ********\n");
//	printf("********2.������Ϸ********\n");
//	printf("**************************\n");
//	printf("��ѡ���Ƿ�ʼ��Ϸ:");
//	scanf("%d", &choice);
//	return choice;
//}
//
//void Game(){
//	//�����������
//	srand(time(NULL));
//	//��������������
//		int result = rand() % 100 + 1;
//	//���û�������������
//		int num;
//	printf("������һ������:\n");
//	while (1){
//		scanf("%d", &num);
//		if (num > result){
//			printf("���µ����ִ���\n");
//		}
//		else if (num < result){
//			printf("���µ�����С��\n");
//		}
//		else{
//			printf("��ϲ��¶���\n");
//		}
//	}
//}
//
//int main(){
//	//����һ��ѭ��
//	while (1){
//		//��ӡ�˵������û�ѡ��
//			int choice = Menu();
//		//���û�ѡ�������Ϸ����ʼ��Ϸ
//		if (choice == 1){
//			Game();
//		}//���û�ѡ���˳���Ϸ�������ѭ��
//		else if (choice == 2){
//			break;
//		}//���û��������
//		else{
//			printf("����������������������\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//5.2�۰����
//#include <stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[],int left,int right,int key){
//	int mid;
//
//	while (left < right){
//		//�۰���ң��м���=ͷ��β/2
//		mid = (left + right) / 2;
//		//����������������β���±��Ϊ�м���-1
//		if (arr[mid]>key){   
//			right = mid - 1;
//		}//��С������������ͷ���±��Ϊ�м���+1
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
//	int right = sizeof(arr) / sizeof(arr[0])-1;//right���±�
//	int key = 14;
//	int result = BinarySearch( arr, left, right, key);
//	if (result == -1){
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", result);
//	}
//	system("pause");
//	return 0;
//}

//5.3������������ȷ����ʾ����¼�ɹ���,������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char password[1024]="123456";
//	char pass[1024];
//	
//	for (int i = 0; i < 3; i++){
//		printf("���������룺\n");
//		scanf("%s", pass);
//		if (strcmp(pass, password) == 0){
//			printf("��¼�ɹ�\n");
//			break;
//		}//�������3�Σ�ֹͣ����
//		else if (i != 2){
//				printf("�����������������\n");
//			}
//		else{
//				printf("����������Σ��˳�ϵͳ\n");
//				break;
//			}
//	}
//	system("pause");
//	return 0;
//}

//5.4����һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char i;
//	int j;
//	printf("������һ���ַ���\n");
//	//һֱ���գ�����һ��ѭ��
//	while (1){
//		//�����ַ�
//		scanf("%c", &i);
//		j = i;
//		//Сд=>��д
//		if (j > 64 && j < 91){
//			j += 32;
//			printf("ת����%c\n", j);
//		}//��д=>Сд
//		else if (j>96 && j < 123){
//			j -= 32;
//			printf("ת����%c\n", j);
//		}
//	}
//
//	system("pause");
//	return 0;
//}

////10.11��ϰ
//#include <stdio.h>
//#include <stdlib.h>
//
//void Swap(int* x, int* y){    //x��������Ϊint��ָ��
//	int tmp;
//	tmp = *x;     //������
//	*x = *y;
//	*y = tmp;
//	printf("a=%X \nb=%X\n", x, y);
//}
//
//int main(){
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d  ��ַΪ%p\nb=%d  ��ַΪ%p\n", a, &a, b, &b);
//	system("pause");
//	return 0;
//}

//10.11����Ͳ���
//#include <stdio.h>
//#include <stdlib.h>
//
//int Divide(int x, int y, int* success){
//	if (y == 0){
//		success = 0;
//		return 0;
//	}
//	success = 1;
//	return x/y;
//}
//
//int main(){
//	int success=0;
//	int ret = Divide(10, 2,&success);
//	printf("ret=%d,success=%d\n", ret,success);
//	system("pause");
//	return 0;
//}

//10.11�����ݹ�
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int x){
//	if (x > 9){    //x���Ǹ�λ��
//		Print( x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main(){
//	int i;
//	printf("������һ������\n");
//	scanf("%d", &i);
//	Print(i);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//�ַ����ĳ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int strlen(char* str){
//	//strָ�����һ�����ַ���
//	if (*str == '\0'){
//		return 0;
//	}
//	//strָ��Ĳ���һ�����ַ�������ǰ�ַ����ַ����е�һ��Ԫ��
//	return 1+strlen(1+str);
//}
//
//int main(){
//	int length = strlen("bonjour!");
//	printf("bonjour!ռ%d���ַ�\n", length);
//	system("pause");
//	return 0;
//}

////��׳�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Factorial(int n){
//	int num;
//	if (n == 1){
//		return 1;
//	}
//	num = n*Factorial(n - 1);
//	return num;
//}
//
//int main(){
//	int n;
//	printf("������������\n");
//	scanf("%d", &n);
//	int num = Factorial(n);
//	printf("��%d��Ľ׳��ǣ�%d\n",n, num);
//	system("pause");
//	return 0;
//}

//6.1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Fibonacci(int n){
//	int num;
//	int i = 1;
//	int j = 1;
//	int count = 3;
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	for (count; count <= n; count++){
//		num = i + j;
//		i = j;
//		j = num;
//	}
//	return num;
//}
//
//int main(){
//	int num;
//	int n;
//	printf("������������\n");
//	scanf("%d", &n);
//	num = Fibonacci(n);
//	printf("��%d��쳲�������Ϊ��%d\n", n,num);
//	system("pause");
//	return 0;
//}

//��ŵ������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////��һ��ͭ��װ���ϣ���������(���A��B��C)��
////��A�����¶��ϡ��ɴ�С��˳�����n�����̡�
////��Ϸ��Ŀ��:��A���ϵĽ���ȫ���Ƶ�C���ϣ����Ա���ԭ��˳����á�
////�������� : ÿ��ֻ���ƶ�һ�����ӣ��������ƶ��������������϶�ʼ�ձ��ִ������£�С������
////�������������ӿ�������A��B��C��һ���ϡ�
//
//void HanoiTower(int n){
//	printf("��%d������%");
//}
//
//int main(){
//	int n; //������
//	printf("��������������\n");
//	scanf("%d", &n);
//	HanoiTower(n);
//
//	system("pause");
//	return 0;
//}

//6.2һ������ʵ��n^k
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//double Power(double n, double k){
//	if (k == 0){
//		return 1;
//	}
//	if (n == 0){
//		return 0;
//	}
//	if (k > 0){
//		return  n*Power(n, k - 1);
//	}
//	if (k < 0){
//		return Power(n, k + 1) / n;
//	}
//}
//
//int main(){
//	double n, k;
//	printf("�����������ָ����\n");
//	scanf("%lf %lf", &n, &k);
//	double num=Power(n, k);
//	printf("��%.0lfΪ������%.0lfΪָ������=%lf\n", n, k, num);
//	system("pause");
//	return 0;
//}
	
//6.3DigitSum(n)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int num){
//	if (num < 9){
//		return num;
//	}
//	return num % 10+Add(num/10);
//}
//
//int main(){
//	int num;
//	printf("������һ�����֣�\n");
//	scanf("%d", &num);
//	int add = Add(num);
//	printf("�����ָ�λ������������֮��Ϊ��%d\n", add);
//	system("pause");
//	return 0;
//}
	
//6.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int StringLength(char* str){
	if (*str == '\0'){
		return 0;
	}
	return 1 + StringLength(str+1);
}

void ReverseString(char* str){
	int len = StringLength(str);
	//��һ���ַ������һ���ַ�����
	//�����������һ���ַ�Ϊ'/0',�ݹ���ã��ٽ����һ���ַ����ϵ�һ���ַ�
	if (*str != 0){
		char tmp;
		tmp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		ReverseString(str + 1);
		str[len - 1] = tmp;
	}
}

int main(){
	char arr[1024] = { 0 };
	printf("�������ַ�����\n");
	scanf("%s", &arr);
	ReverseString(arr);
	printf("�ַ����е��ַ���������Ϊ��\n%s\n", arr);
	system("pause");
	return 0;
}

//6.7
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
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