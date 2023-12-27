#include "game.h"
void Initboard(char mine[ROWS][COLS], int h, int l,char a)
{
	int i = 0, j = 0;
	for (i = 0; i <h; i++)
	{
		for (j = 0; j < l; j++)
		{
			mine[i][j] = a;
		}
	}
}
void showboard11(char mine[ROWS][COLS], int h, int l)
{
	int i = 0, j = 0;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}                        
}
void showboard9(char show[ROWS][COLS], int h, int l)
{
	int i = 0, j = 0;
	for (j = 0; j <= l; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i =1; i <= h; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= l; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int i = 1, j = 1, count = 0;
	for (; count <10; )
	{
		i = rand()%(row - 1) + 1;
		j = rand()%(col - 1) + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count++;
		}
	}
}
int  num_mine(char mine[ROWS][COLS], int i, int j)
{
	int a = -1, b = -1,count=0;
	for (; a <= 1; a++)
	{
		for (b = -1; b <= 1; b++)
		{
			count = count + mine[i + a][j + b];
		}
	}
	return count = count - 9 * '0';
}
void unfold(char show[ROWS][COLS], char mine[ROWS][COLS], int i, int j, int* win)
{
	int a = 0, b = 0;
	mine[i][j] = '2';//标记重复
	if (i < 1 || j < 1 || i>9 || j>9);
	else if (num_mine(mine, i, j) != 0)
	{
		show[i][j] ='0'+num_mine(mine, i, j);
	}
	else if (num_mine(mine, i, j) == 0)
	{
		for (a = -1; a <= 1; a++)
		{
			for (b = -1; b <= 1; b++)
			{

			}
		}
	}
}
void play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	do
	{
		showboard9(show, ROW, COL);
		printf("请输入排查位置,例如（1,2）:");
		int i = 0, j = 0;
		scanf("%d,%d", &i, &j);
		if (i < 1 || j < 1 || i>9 || j>9)
		{
			printf("输入错误，请重新输入。\n");
		}
		else if (mine[i][j] == '1')
		{
			printf("触发地雷，游戏失败\n"); break;
		}
		else unfold(show,mine,i,j,&win);
	} while (1);

}
