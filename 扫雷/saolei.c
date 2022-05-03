#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("*******        1.play       *********\n");
	printf("*******        0.exit       *********\n");
	printf("*************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选项:>>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("---------扫雷游戏-----------\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}