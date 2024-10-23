#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char set){
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = set;
		}
	}
}
void DisplayBorad(char arr[ROWS][COLS], int row, int col) {
	printf("-----扫雷游戏-----\n");
	for (int i = 0; i <= row; i++) {
		printf("%d", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		printf("%d", i);
		for (int j = 1; j <= col; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}
void SetMain(char arr[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while(count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0') {
			arr[x][y] = '1';
			count--;
		}
	}
}
static int GetMineCount(char mine[ROWS][COLS], int x, int y) {
	//return mine[x + 1][y] +
	//	mine[x - 1][y - 1] +
	//	mine[x - 1][y] +
	//	mine[x - 1][y + 1] +
	//	mine[x][y - 1] +
	//	mine[x][y + 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y + 1] - 8 * '0';
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			count += (mine[i][j] - '0');
		}
	}
	return count;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT) {
		printf("请输入坐标用来排查：");
		scanf("%d%*c%d", &x,&y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (show[x][y] == '*') {
				if (mine[x][y] == '1') {
					printf("你被炸死了\n");
					DisplayBorad(mine, ROW, COL);
					break;
				}
				else {
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBorad(show, ROW, COL);
					win++;
				}
			}
			else {
				printf("排查过了\n");
			}
		}
		else {
			printf("非法坐标，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("你成功了！！！！\n");
		DisplayBorad(mine, ROW, COL);
	}
}