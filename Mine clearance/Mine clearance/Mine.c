//ɨ��ʾ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//int Menu( ){
//	printf("1.��ʼ��Ϸ\n");
//	printf("0.�˳���Ϸ\n");
//	printf("����������ѡ��\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//
//#define MINE_COUNT 10
//#define ROW 10
//#define COL 10
//
////ʹ�ö�ά��������ʾɨ�׵ĵ�ͼ���˴���Ҫʹ��������ά����
////��һ����ά�����ʾ���׵�����
////�ڶ�����ά�����ʾ�û������ĵ�ͼ
////ɨ�׵�ͼ�Ĵ�С��10*10����Ϊ���ǽ����鶨��Ϊ12*12�����ں���ʹ��
////��ʱ����ͼ����Ч��ΧΪ[1��ROW]��[1��COL]
////����mine_map��ʹ��'0'��ʾ���ǵ��ף�'1'��ʾ�ǵ���
//char mine_map[ROW+2][COL+2];
////show_map��ʹ��'*'����ʾδ�򿪵ķ��飻���������[0,8]��ʾ�򿪵ķ���
//char show_map[ROW+2][COL+2];
//
//void Init(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2]){
//	//1.��ʼ������
//	//����mine_map��������Ԫ����Ϊ'0'
//	//memset������һ���������ڴ�����Ϊĳһ���ض���ֵ(�������ֽڣ�
//	memset(mine_map, '0', (ROW + 2)*(COL + 2));
//	//����show_map��������Ԫ����Ϊ'*'
//	memset(show_map, '*', (ROW + 2)*(COL + 2));
//	//2.�����������
//	srand(time(0));
//	int mine_count = MINE_COUNT;
//	while (mine_count > 0){
//		//��ѭ����������õ��ף�ÿ������һ����--mine_count
//		//[1,ROW]
//		int row = rand( ) % 9 + 1;
//		int col = rand( ) % 9 + 1;
//		if (mine_map[row][col]=='0'){
//			mine_map[row][col] = '1';
//			--mine_count;
//		}
//	}
//}
//
//void DisplayMap(char map[ROW + 2][COL + 2]){
//	printf("   ");
//	//��ӡ��һ�е����ݣ��ĸ��ո�+ÿһ�е�����
//	for (int col = 1; col <=COL;++col){
//		printf("%d ", col);
//	}
//	printf("\n");
//	//��ӡ����ĵ�ͼ
//	//��ӡ�ڶ������ݣ���ͼ���ϱ߿�
//	for (int col = 1; col <= COL;++col){
//		printf("---");
//	}
//	printf("\n");
//		//���д�ӡ��ͼ�еľ�������
//	for (int row = 1; row <= ROW; ++row){
//			//�ȴ�ӡ�к�
//			//1=>01  10=>10
//			printf("%02d|", row);
//			for (int col = 1; col <= COL; ++col){
//				printf("%c ", map[row][col]);
//			}
//			printf("\n");
//	}
//}
//
////��Ҫͳ��row��colλ�õ�Ԫ����Χ�м����ף����Ұѽ�����µ�show_map��
//void UpdateShowMap(char show_map[ROW + 2][COL + 2],
//	char mine_map[ROW + 2][COL + 2],int row,int col){
//	int mine_count = 0;
//	mine_count = (mine_map[row - 1][col - 1] - '0')
//		+ (mine_map[row - 1][col] - '0')
//		+ (mine_map[row - 1][col + 1] - '0')
//		+ (mine_map[row][col - 1] - '0')
//		+ (mine_map[row][col + 1] - '0')
//		+ (mine_map[row + 1][col - 1] - '0')
//		+ (mine_map[row + 1][col] - '0')
//		+ (mine_map[row + 1][col + 1] - '0');
//		show_map[row][col] = '0' + mine_count;
//	/*if (mine_map[row - 1][col - 1] == '1'){
//		++mine_count;
//	}*/
//	//row - 1, col - 1;
//	//row - 1, col;
//	//row - 1, col + 1;
//	//row , col - 1;
//	//row , col ; //��ǰλ�ñ���
//	//row , col + 1;
//	//row + 1, col - 1;
//	//row + 1, col ;
//	//row + 1, col + 1;
//}
//
//void Game( ){
//	int not_mine_count = 0;
//	//1.��ʼ����ͼ��mine_map,show_map������������
//	Init(mine_map, show_map);
//	//2.��ӡshow_map
//	DisplayMap(show_map);
//	while (1){
//		//3.��ʾ�û���������[1,ROW][1,COL]
//		int row = 0;
//		int col = 0;
//		printf("������Ҫ�����ķ������꣨row��col����");
//		scanf("%d %d", &row, &col);
//		//4.���û�����ĺϷ��Խ����ж�������������ʾ�û���������
//		if (row <= 0 || row > ROW || col <= 0 || col > COL){
//			printf("�������벻�Ϸ������������룡\n");
//			continue; //��������ѭ�����������½���
//		}
//		//5.�ж���ҵ�ǰ�Ƿ���ף������ף�������Ϸ����ӡ����
//		if (mine_map[row][col] == '1'){
//			printf("��Ϸ������\n");
//			DisplayMap(mine_map);
//			break;
//		}
//		//6.��û���ף��ж��Ƿ�ʤ�����ѷ���������=��ͼ������-���׸�����
//		++not_mine_count;
//		if (not_mine_count == ROW*COL - MINE_COUNT){
//			printf("ɨ�׳ɹ���\n");
//			DisplayMap(mine_map);
//			break;
//		}
//		//7.�����Ϸû��ʤ����ͳ�Ƶ�ǰλ����Χ�м����ף��ص�������
//		UpdateShowMap(show_map,mine_map,row,col);
//		DisplayMap(show_map);
//	}
//}
//
//void Start( ){
//	while (1){
//		int choice = Menu();
//		if (choice == 0){
//			printf("�˳���Ϸ��\n");
//			break;
//		}
//		Game( );
//	}
//}
//
//int main( ){
//	Start( );
//	system("pause");
//	return 0;
//}

//ɨ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 10
#define COL 10
#define MINE_COUNT 15

char mine_map[ROW + 2][COL + 2];
char show_map[ROW + 2][COL + 2];

int Menu(){
	int choice=0;
	printf("1.��ʼ��Ϸ\n");
	printf("2.�˳���Ϸ\n");
	printf("��ѡ��");
	scanf("%d", &choice);
	return choice;
}

void Initialize(char mine_map[ROW + 2][COL + 2],char show_map[ROW + 2][COL + 2]){
	memset(mine_map, '0', (ROW+2)*(COL+2));
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//��������
	srand(time(0));
	int mine_count = MINE_COUNT;
	while (mine_count > 0){
		int row = rand() % (ROW-1) + 1;
		int col = rand() % (COL-1) + 1;
		if (mine_map[row][col] == '0'){
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}

void Print(char map[ROW + 2][COL + 2]){
	printf("   ");
	//��ӡ�к�
	for (int col = 1; col <= COL; ++col){
		printf(" %02d", col);
	}
	printf("\n");
	//��ӡ�ڶ���
	for (int col = 1; col <= COL; ++col){
		printf("----");
	}
	printf("\n");
	for (int row = 1; row <= ROW; ++row){
		printf("%02d|", row);
		for (int col = 1; col <= COL; ++col){
			printf(" %c ", map[row][col]);
		}
		printf("\n");
	}
}

void Update(char show_map[ROW + 2][COL + 2],char mine_map[ROW + 2][COL + 2], int row, int col){
	int mine_count = 0;
	mine_count = (mine_map[row - 1][col - 1] - '0')
		+ (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0')
		+ (mine_map[row][col - 1] - '0')
		+ (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col - 1] - '0')
		+ (mine_map[row + 1][col] - '0')
		+ (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_count;
}

void Game(){
	int flip = 0;
	//1.��ʼ����ͼ
	Initialize(mine_map, show_map);
	//2.��ӡ��ͼ
	Print(show_map);
	while (1){
		int row = 0;
		int col = 0;
		//1.��ʾ�û�����λ��
		printf("���������꣨row��col����\n");
		scanf("%d %d", &row, &col);
		//2.�ж������Ƿ�Ϸ�[1,ROW]
		if (row <= 0 || row > ROW || col <= 0 || col > COL){
			printf("���������������������룺\n ");
			continue;
		}
		//3.�ж�λ���Ƿ�����
		if (mine_map[row][col] == '1'){
			Print(show_map);
			printf("��Ŷ  ���ȵ����ˣ�����\n");
			break;
		}
		//û�ȵ����ж��Ƿ�ʤ��
		++flip;
		if (flip == ROW*COL - MINE_COUNT){
			Print(show_map);
			printf("��ϲ�㣬ʤ������\n");
			break;
		}
		//4.���µ�ͼ����ӡ
		Update(show_map,mine_map,row,col);
		Print(show_map);
	}
}

void Start(){
	while (1){
		int choice = Menu();
		if (choice == 2){
			printf("��Ϸ������\n");
			break;
		}
		Game();
	}
}

int main(){
		Start( );
		system("pause");
		return 0;
	}
