////三子棋示例
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////对于数组的长度，最好定义成宏
////方便程序的扩展，改宏定义则可修改数组元素个数
//#define ROW 3
//#define COL 3
//
////1.定义二维数组来表示棋盘
//char g_chess_board[ROW][COL];
//
//void Init(){
//	//初始化棋盘
//	for (int row = 0; row < ROW; ++row){
//		for (int col = 0; col < COL; ++col){
//			g_chess_board[row][col] = ' ';
//		}
//	}
//}
//
//void Print(){
//	//打印
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
//	//玩家落子
//	while (1){
//		//1.提示玩家输入一个坐标
//		printf("请玩家落子（输入坐标row col）：\n");
//		//2.读取玩家的输入
//		int row = -1;
//		int col = -1;
//		scanf("%d %d", &row, &col);
//		//3.对玩家的输入进行校验
//		//4.若输入非法，循环提示用户重新输入
//		//   a.校验坐标是否范围合理
//		if (row < 0 || row >= ROW || col < 0 || col >= COL){
//			printf("输入的坐标非法，请重新输入！\n");
//			continue;
//		}
//		//   b.玩家输入的坐标对应位置是否已经有子
//		if (g_chess_board[row][col] != ' '){
//			//当前位置已被占用，不可落子
//			printf("当前位置已经有子了，请重新输入！\n");
//			continue;
//		}
//		//5.若输入合法，则把对应位置设为'x'
//		g_chess_board[row][col] = 'x';
//		break;
//	}
//}
//
//void ComputerMove(){
//	//电脑落子
//	//1.随机数产生行和列
//	//2.若当前位置被占用，则再产生一次
//	printf("请电脑落子!\n");
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
////x 表示玩家，o 表示电脑
////返回 x 表示玩家胜利，返回 o 则电脑胜利
////返回 q 表示和棋
////返回 空格 则胜负未分
//char CheckWinner(){
//	//检测游戏是否结束
//	//1.先检查所有行是否连在一起
//	for (int row = 0; row < ROW; ++row){
//		if (g_chess_board[row][0] == g_chess_board[row][1]
//			&& g_chess_board[row][0] == g_chess_board[row][2]
//			&&g_chess_board[row][0] !=' '){
//			return g_chess_board[row][0];
//		}
//	}
//	//2.在检查所有列是否连在一起
//	for (int col = 0; col < COL; ++col){
//		if (g_chess_board[0][col] == g_chess_board[1][col]
//			&& g_chess_board[0][col] == g_chess_board[2][col]
//			&& g_chess_board[0][col] !=' '){
//			return g_chess_board[0][col];
//		}
//	}
//
//	//3.检查对角线
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
//	//4.检查是否和棋
//	if (IsFull()){
//		return 'q';
//	}
//	return ' ';
//}
//
//int main(){
//	//2.对其盘进行初始化（全是空格）
//	char winner = ' ';
//	Init();
//	while (1){
//    //3.打印棋盘
//		Print();
//	//4.玩家落子，检查游戏是否结束
//		PlayMove();
//		winner = CheckWinner();
//		if (winner != ' '){
//			//游戏结束
//			break;
//		}
//	//5.电脑落子，检查游戏是否结束
//		ComputerMove();
//		winner = CheckWinner();
//		if (winner != ' '){
//			//游戏结束
//			break;
//		}
//	}
//	if (winner == 'x'){
//		printf("玩家获胜！\n");
//	}
//	else if (winner == 'o'){
//		printf("电脑获胜\n");
//	}
//	else if (winner == 'q'){
//		printf("和棋\n");
//	}
//	system("pause");
//	return 0;
//}

//三子棋
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//定义全局变量
char g_chessboard[ROW][COL];

void Initialize(){
	//初始化棋盘
	int row;
	int col;
	for (row=0; row < ROW; row++){
		for (col=0; col < COL; col++){
			g_chessboard[row][col] = ' ';
		}
	}
}

void Print(){
	//打印棋盘
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
	//玩家落子
	while (1){
		int row;
		int col;
		printf("请输入落子位置（row col）:\n");
		scanf("%d %d", &row, &col);
		if (row >=ROW || row<0 || col>=COL || col < 0){
			printf("您的输入有误，请重新输入\n");
			continue;
		}
		if (g_chessboard[row][col] != ' '){
			printf("此位置已被占有，请重新输入\n");
			continue;
		}
		g_chessboard[row][col] = 'x';
		break;
	}
}

void Computer(){
	printf("电脑落子：\n");
	int row = 0;
	int col = 0;
	srand(time(0));
	while (1){
		row = rand( ) % ROW;
		col = rand( ) % COL;
		//若位置没有被占用，落子
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
	//检查行
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
	//检查列
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
	//检查对角线
	int row = 0;
	int col = 0;
    int countp = 0;
	int countc = 0;
	//左上角开始的对角线
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
	//右上角开始的对角线
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
	
	//检查棋盘是否已满
	if (IsFull()){
		return 'q';
	}
	return ' ';
}

int main(){
	//1.棋盘初始化
	char winner = ' ';
	Initialize();
	while (1){
		//2.打印棋盘
		Print();
		//3.玩家落子，进行检验
		Player();
		winner = Check();
		//游戏结束
		if (winner != ' '){  
			Print();
			break;
		}
		//4.电脑落子，进行检验
		Computer();
		winner = Check();
		//游戏结束
		if (winner != ' '){
			Print();
			break;
		}
	}
	//5.判断胜负
	//用 x 代表玩家，o 代表电脑，q代表和棋
	if (winner == 'x'){
		printf("恭喜你获胜！\n");
	}
	else if (winner == 'o'){
		printf("啊哦，电脑获胜！\n");
	}
	else if (winner == 'q'){
		printf("和棋\n");
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