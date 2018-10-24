//扫雷示例
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//int Menu( ){
//	printf("1.开始游戏\n");
//	printf("0.退出游戏\n");
//	printf("请输入您的选择：\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//
//#define MINE_COUNT 10
//#define ROW 10
//#define COL 10
//
////使用二维数组来表示扫雷的地图，此处需要使用两个二维数组
////第一个二维数组表示地雷的雷阵
////第二个二维数组表示用户看到的地图
////扫雷地图的大小是10*10，但为我们将数组定义为12*12，便于后续使用
////此时，地图的有效范围为[1，ROW]和[1，COL]
////对于mine_map，使用'0'表示不是地雷，'1'表示是地雷
//char mine_map[ROW+2][COL+2];
////show_map，使用'*'，表示未打开的方块；具体的数字[0,8]表示打开的方块
//char show_map[ROW+2][COL+2];
//
//void Init(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2]){
//	//1.初始化数组
//	//对于mine_map，将所有元素置为'0'
//	//memset函数将一段连续的内存设置为某一个特定的值(长度是字节）
//	memset(mine_map, '0', (ROW + 2)*(COL + 2));
//	//对于show_map，将所有元素置为'*'
//	memset(show_map, '*', (ROW + 2)*(COL + 2));
//	//2.随机布置雷阵
//	srand(time(0));
//	int mine_count = MINE_COUNT;
//	while (mine_count > 0){
//		//在循环中随机设置地雷，每设置完一个，--mine_count
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
//	//打印第一行的内容，四个空格+每一列的坐标
//	for (int col = 1; col <=COL;++col){
//		printf("%d ", col);
//	}
//	printf("\n");
//	//打印具体的地图
//	//打印第二行内容，地图的上边框
//	for (int col = 1; col <= COL;++col){
//		printf("---");
//	}
//	printf("\n");
//		//按行打印地图中的具体内容
//	for (int row = 1; row <= ROW; ++row){
//			//先打印行号
//			//1=>01  10=>10
//			printf("%02d|", row);
//			for (int col = 1; col <= COL; ++col){
//				printf("%c ", map[row][col]);
//			}
//			printf("\n");
//	}
//}
//
////需要统计row，col位置的元素周围有几个雷，并且把结果更新到show_map中
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
//	//row , col ; //当前位置本身
//	//row , col + 1;
//	//row + 1, col - 1;
//	//row + 1, col ;
//	//row + 1, col + 1;
//}
//
//void Game( ){
//	int not_mine_count = 0;
//	//1.初始化地图（mine_map,show_map），布置雷阵
//	Init(mine_map, show_map);
//	//2.打印show_map
//	DisplayMap(show_map);
//	while (1){
//		//3.提示用户输入坐标[1,ROW][1,COL]
//		int row = 0;
//		int col = 0;
//		printf("请输入要翻开的方块坐标（row，col）：");
//		scanf("%d %d", &row, &col);
//		//4.对用户输入的合法性进行判定，不合理则提示用户重新输入
//		if (row <= 0 || row > ROW || col <= 0 || col > COL){
//			printf("您的输入不合法！请重新输入！\n");
//			continue; //跳出本次循环，不再向下进行
//		}
//		//5.判定玩家当前是否踩雷，若踩雷，结束游戏并打印雷阵；
//		if (mine_map[row][col] == '1'){
//			printf("游戏结束！\n");
//			DisplayMap(mine_map);
//			break;
//		}
//		//6.若没踩雷，判断是否胜利（已翻开方块数=地图方块数-地雷个数）
//		++not_mine_count;
//		if (not_mine_count == ROW*COL - MINE_COUNT){
//			printf("扫雷成功！\n");
//			DisplayMap(mine_map);
//			break;
//		}
//		//7.如果游戏没有胜利，统计当前位置周围有几个雷，回到第三步
//		UpdateShowMap(show_map,mine_map,row,col);
//		DisplayMap(show_map);
//	}
//}
//
//void Start( ){
//	while (1){
//		int choice = Menu();
//		if (choice == 0){
//			printf("退出游戏！\n");
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

//扫雷
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
	printf("1.开始游戏\n");
	printf("2.退出游戏\n");
	printf("请选择：");
	scanf("%d", &choice);
	return choice;
}

void Initialize(char mine_map[ROW + 2][COL + 2],char show_map[ROW + 2][COL + 2]){
	memset(mine_map, '0', (ROW+2)*(COL+2));
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//布置雷阵
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
	//打印列号
	for (int col = 1; col <= COL; ++col){
		printf(" %02d", col);
	}
	printf("\n");
	//打印第二行
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
	//1.初始化地图
	Initialize(mine_map, show_map);
	//2.打印地图
	Print(show_map);
	while (1){
		int row = 0;
		int col = 0;
		//1.提示用户输入位置
		printf("请输入坐标（row，col）：\n");
		scanf("%d %d", &row, &col);
		//2.判断输入是否合法[1,ROW]
		if (row <= 0 || row > ROW || col <= 0 || col > COL){
			printf("您的输入有误，请重新输入：\n ");
			continue;
		}
		//3.判断位置是否有雷
		if (mine_map[row][col] == '1'){
			Print(show_map);
			printf("啊哦  您踩到雷了！！！\n");
			break;
		}
		//没踩到，判断是否胜利
		++flip;
		if (flip == ROW*COL - MINE_COUNT){
			Print(show_map);
			printf("恭喜你，胜利啦！\n");
			break;
		}
		//4.更新地图并打印
		Update(show_map,mine_map,row,col);
		Print(show_map);
	}
}

void Start(){
	while (1){
		int choice = Menu();
		if (choice == 2){
			printf("游戏结束！\n");
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
