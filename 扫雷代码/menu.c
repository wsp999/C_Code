#include "game.h"
//1.打印菜单
//2.mine数组用0 1显示雷，show默认'*'视觉
//3.初始化mine全为'0'，show全为'*'
//4.showboard9(show, ROW, COL)显示9*9的棋盘
void menu()
{
	printf("*******************\n");
	printf("******1.start******\n");
	printf("******0.end********\n");
	printf("*******************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//showboard11(show, ROWS, COLS);                 显示11*11的棋盘
	//showboard9(show, ROW, COL);
	set_mine(mine, ROW, COL);                        //设置雷区
	//showboard11(mine, ROWS, COLS);                 //雷区验证
	play(mine,show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请确认是否开始游戏>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入.\n");
			break;
		}
	} while (input);
}