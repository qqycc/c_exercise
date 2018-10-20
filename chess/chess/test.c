////������ʾ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////��������ĳ��ȣ���ö���ɺ�
////����������չ���ĺ궨������޸�����Ԫ�ظ���
//#define ROW 3
//#define COL 3
//
////1.�����ά��������ʾ����
//char g_chess_board[ROW][COL];
//
//void Init(){
//	//��ʼ������
//	for (int row = 0; row < ROW; ++row){
//		for (int col = 0; col < COL; ++col){
//			g_chess_board[row][col] = ' ';
//		}
//	}
//}
//
//void Print(){
//	//��ӡ
//	for (int row = 0; row < ROW; row++){
//		printf("| %c | %c | %c |\n", g_chess_board[row][0],
//			g_chess_board[row][1], g_chess_board[row][2]);
//		if (row != ROW - 1){
//			printf("|---|---|---|\n");
//		}
//	}
//}
//
//void PlayMove(){
//	//�������
//	while (1){
//		//1.��ʾ�������һ������
//		printf("��������ӣ���������row col����\n");
//		//2.��ȡ��ҵ�����
//		int row = -1;
//		int col = -1;
//		scanf("%d %d", &row, &col);
//		//3.����ҵ��������У��
//		//4.������Ƿ���ѭ����ʾ�û���������
//		//   a.У�������Ƿ�Χ����
//		if (row < 0 || row >= ROW || col < 0 || col >= COL){
//			printf("���������Ƿ������������룡\n");
//			continue;
//		}
//		//   b.�������������Ӧλ���Ƿ��Ѿ�����
//		if (g_chess_board[row][col] != ' '){
//			//��ǰλ���ѱ�ռ�ã���������
//			printf("��ǰλ���Ѿ������ˣ����������룡\n");
//			continue;
//		}
//		//5.������Ϸ�����Ѷ�Ӧλ����Ϊ'x'
//		g_chess_board[row][col] = 'x';
//		break;
//	}
//}
//
//void ComputerMove(){
//	//��������
//	//1.����������к���
//	//2.����ǰλ�ñ�ռ�ã����ٲ���һ��
//	printf("���������!\n");
//	int row = 0;
//	int col = 0;
//	while (1){
//		row = rand( ) % ROW;   //[0,2]
//		col = rand( ) % COL;   //[0,2]
//		if (g_chess_board[row][col] == ' '){
//			g_chess_board[row][col] = 'o';	
//			break;
//		}	
//	}
//}
//
//int IsFull(){
//	for (int row = 0; row < ROW; ++row){
//		for (int col = 0; col < COL; ++col){
//			if (g_chess_board[row][col] == ' '){
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
////x ��ʾ��ң�o ��ʾ����
////���� x ��ʾ���ʤ�������� o �����ʤ��
////���� q ��ʾ����
////���� �ո� ��ʤ��δ��
//char CheckWinner(){
//	//�����Ϸ�Ƿ����
//	//1.�ȼ���������Ƿ�����һ��
//	for (int row = 0; row < ROW; ++row){
//		if (g_chess_board[row][0] == g_chess_board[row][1]
//			&& g_chess_board[row][0] == g_chess_board[row][2]
//			&&g_chess_board[row][0] !=' '){
//			return g_chess_board[row][0];
//		}
//	}
//	//2.�ڼ���������Ƿ�����һ��
//	for (int col = 0; col < COL; ++col){
//		if (g_chess_board[0][col] == g_chess_board[1][col]
//			&& g_chess_board[0][col] == g_chess_board[2][col]
//			&& g_chess_board[0][col] !=' '){
//			return g_chess_board[0][col];
//		}
//	}
//
//	//3.���Խ���
//	if (g_chess_board[0][0] == g_chess_board[1][1]
//		&& g_chess_board[0][0] == g_chess_board[2][2]
//		&& g_chess_board[0][0] != ' '){
//		return g_chess_board[0][0];
//	}
//	if (g_chess_board[2][0] == g_chess_board[1][1]
//		&& g_chess_board[2][0] == g_chess_board[0][2]
//		&& g_chess_board[2][0] != ' '){
//		return g_chess_board[2][0];
//	}
//	//4.����Ƿ����
//	if (IsFull()){
//		return 'q';
//	}
//	return ' ';
//}
//
//int main(){
//	//2.�����̽��г�ʼ����ȫ�ǿո�
//	char winner = ' ';
//	Init();
//	while (1){
//    //3.��ӡ����
//		Print();
//	//4.������ӣ������Ϸ�Ƿ����
//		PlayMove();
//		winner = CheckWinner();
//		if (winner != ' '){
//			//��Ϸ����
//			break;
//		}
//	//5.�������ӣ������Ϸ�Ƿ����
//		ComputerMove();
//		winner = CheckWinner();
//		if (winner != ' '){
//			//��Ϸ����
//			break;
//		}
//	}
//	if (winner == 'x'){
//		printf("��һ�ʤ��\n");
//	}
//	else if (winner == 'o'){
//		printf("���Ի�ʤ\n");
//	}
//	else if (winner == 'q'){
//		printf("����\n");
//	}
//	system("pause");
//	return 0;
//}

//������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//����ȫ�ֱ���
char g_chessboard[ROW][COL];

void Initialize(){
	//��ʼ������
	int row;
	int col;
	for (row=0; row < ROW; row++){
		for (col=0; col < COL; col++){
			g_chessboard[row][col] = ' ';
		}
	}
}

void Print(){
	//��ӡ����
	int row ;
	int col;
	for (row=0; row < ROW; row++){
		for (col=0; col < COL; col++){
			printf("| %c ", g_chessboard[row][col]);
		}
		printf("|\n");
		if (row != ROW - 1){
			for (col = 0; col < COL; col++){
				printf("|---");
			}
			printf("|\n");
		}
	}
}

void Player(){
	//�������
	while (1){
		int row;
		int col;
		printf("����������λ�ã�row col��:\n");
		scanf("%d %d", &row, &col);
		if (row >=ROW || row<0 || col>=COL || col < 0){
			printf("����������������������\n");
			continue;
		}
		if (g_chessboard[row][col] != ' '){
			printf("��λ���ѱ�ռ�У�����������\n");
			continue;
		}
		g_chessboard[row][col] = 'x';
		break;
	}
}

void Computer(){
	printf("�������ӣ�\n");
	int row = 0;
	int col = 0;
	srand(time(0));
	while (1){
		row = rand( ) % ROW;
		col = rand( ) % COL;
		//��λ��û�б�ռ�ã�����
		if (g_chessboard[row][col] == ' '){
			g_chessboard[row][col] = 'o';
			break;
		}
	}
}

int IsFull(){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chessboard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}

char Check(){
	//�����
	for (int row = 0; row < ROW; row++){
		int countp = 0;
		int countc = 0;
		for (int col = 0; col < COL; col++){
			if (g_chessboard[row][col] == 'x'){
				countp ++;
			}
			if (g_chessboard[row][col] == 'o'){
				countc ++;
			}
		}
		if (countp == ROW){
			return 'x';
			break;
		}
		if (countc == ROW){
			return  'o';
			break;
		}
	}
	//�����
	for (int col = 0; col < COL; col++){
		int countp = 0;
		int countc = 0;
		for (int row = 0; row < ROW; row++){
			if (g_chessboard[row][col] == 'x'){
				countp ++;
			}
			else if (g_chessboard[row][col] == 'o'){
				countc ++;
			}
		}
		if (countp == COL){
			return  'x';
			break;
		}
		else if (countc == COL){
			return 'o';
			break;
		}
	}
	//���Խ���
	int row = 0;
	int col = 0;
    int countp = 0;
	int countc = 0;
	//���Ͻǿ�ʼ�ĶԽ���
	while (row < ROW){
		if (g_chessboard[row][col] == 'x'){
			countp++;
		}
		else if (g_chessboard[row][col] == 'o'){
			countc++;
		}
		row++;
		col++;
	}
	if (countp == ROW){
		return 'x';
	}
	else if (countc == ROW){
		return 'o';
	}
	//���Ͻǿ�ʼ�ĶԽ���
	countp = 0;
	countc = 0; 
	row = 0;
	col = COL-1;
	while (row<ROW){	
		if (g_chessboard[row][col] == 'x'){
			countp++;
		}
		else if (g_chessboard[row][col] == 'o'){
			countc++;
		}
		row++;
		col--;
	}
		if (countp == ROW){
			return 'x';
		}
		else if (countc == ROW){
			return 'o';
		}
	
	//��������Ƿ�����
	if (IsFull()){
		return 'q';
	}
	return ' ';
}

int main(){
	//1.���̳�ʼ��
	char winner = ' ';
	Initialize();
	while (1){
		//2.��ӡ����
		Print();
		//3.������ӣ����м���
		Player();
		winner = Check();
		//��Ϸ����
		if (winner != ' '){  
			Print();
			break;
		}
		//4.�������ӣ����м���
		Computer();
		winner = Check();
		//��Ϸ����
		if (winner != ' '){
			Print();
			break;
		}
	}
	//5.�ж�ʤ��
	//�� x ������ң�o ������ԣ�q�������
	if (winner == 'x'){
		printf("��ϲ���ʤ��\n");
	}
	else if (winner == 'o'){
		printf("��Ŷ�����Ի�ʤ��\n");
	}
	else if (winner == 'q'){
		printf("����\n");
	}
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