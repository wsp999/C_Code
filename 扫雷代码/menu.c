#include "game.h"
//1.��ӡ�˵�
//2.mine������0 1��ʾ�ף�showĬ��'*'�Ӿ�
//3.��ʼ��mineȫΪ'0'��showȫΪ'*'
//4.showboard9(show, ROW, COL)��ʾ9*9������
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
	//showboard11(show, ROWS, COLS);                 ��ʾ11*11������
	//showboard9(show, ROW, COL);
	set_mine(mine, ROW, COL);                        //��������
	//showboard11(mine, ROWS, COLS);                 //������֤
	play(mine,show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ȷ���Ƿ�ʼ��Ϸ>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������.\n");
			break;
		}
	} while (input);
}