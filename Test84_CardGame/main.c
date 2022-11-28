#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#include <windows.h>

int map[4][5] = {0};

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, coord);
}

void batch_Card(char c[])
{
	int i,j;
	int x,y;
	for (i = 0; i< 2; i++)
	{
		for(j = 0; j < 10 ;j++)
		{
			do
			{
				x = rand()%4;
				y = rand()%5;
			}
			while(map[x][y] != 0);
			
			map[x][y] = c[j];
		}
	}
}

void display()
{
	int i ,j;

	for(i = 0; i< 4; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%5c", map[i][j]);
		}

		printf("\n");
	}
}

void delay(int n)
{
	int start, end;
	start = time(NULL);
	do
	{
		end = time(NULL);
	}while(end - start < n);
}

int main()
{
	char card[11] = "~!@#$%^&*?";
	
	int name[20];
	int score;

	int visited[21] = { 0 };
	int start, end;

	int i, j;
	int n, m;
	int x, y;
	int x2, y2;
	int cnt = 0;

	FILE* fp = fopen("ranking.txt", "r");
	fscanf(fp, "%s %d", &name, &score);
	fclose(fp);

	system("cls");
	system("clear"); // for Linux CLI env

	gotoxy(20, 18);
	printf("Current HIGH SCORE\n%s | %dsec", name, score);
	delay(3);

	system("cls");
	system("clear");

	batch_Card(card);
	display();
	delay(3);
	system("cls");
	system("clear");
	for(i = 1; i <= 20; i++)
	{
		printf("%5d", i);
		if(i%5 == 0) printf("\n");
	}

	start = time(NULL);

	printf("Please input two number : ");
	while(i)
	{
		scanf("%d %d", &n, &m);
		x = (n-1)/5;
		y = (n-1)%5;
		x2 = (m-1)/5;
		y2 = (m-1)%5;

		gotoxy(y*5, x);
		printf("%5c", map[x][y]);
		gotoxy(y2*5, x2);
		printf("%5c", map[x2][y2]);

		delay(1);

		if(map[x][y] != map[x2][y2])
		{
			if(visited[n] == 0){
				gotoxy(y*5, x);
				printf("%5d", n);
			}
			if(visited[m] == 0){
				gotoxy(y2*5, x2);
				printf("%5d", m);
			}
		}
		else
		{
			visited[n] = 1;
			visited[m] = 1;
			cnt++;
			if(cnt >= 10)
			{
				break;
			}
		}

		gotoxy(26, 4);
		printf("     ");
		gotoxy(26, 4);
	}

	end = time(NULL);

	system("cls");
	system("clear");
	score = end - start;
	printf("You succeeded in %d seconds.", score);

	if(score > end-start)
	{
		printf("HIGH SCORE!!\nPlease input your nickname : ");
		scanf("%s", name);
		fp = fopen("ranking.txt", "w");
		fprintf(fp, "%s %d", name, score);
		fclose(fp);
	}
}
