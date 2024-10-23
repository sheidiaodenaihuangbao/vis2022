#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu() {
//	printf("1:开始\n");
//	printf("0:退出\n");
//}
//void game() {
//	//srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	int count = 0;
//	int coun = 5;
//	while (coun) {
//		printf("还有%d次机会",coun);
//		printf("\n请输入：");
//		scanf("%d", & count);
//		if (count < ret) {
//			printf("输入小了");
//		}
//		else if (count > ret) {
//			printf("输入大了");
//		}
//		else {
//			printf("猜对了");
//			printf("数字是%d\n", ret);
//			break;
//		}
//		coun--;
//	}
//	if (coun == 0) {
//		printf("没机会了，数字是%d",ret);
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	//printf("%d", 100+rand()%(100+1));
//	int input = 0;
//	do {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
