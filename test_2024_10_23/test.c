#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
                                                     
void menu() {
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}

void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	SetMain(mine, ROW, COL);
	DisplayBorad(show, ROW, COL);
	//DisplayBorad(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);
}
void test() {
	int input = 0;
	do {
		menu();
		srand((unsigned int)time(NULL));
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�������ѡѡ��\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}