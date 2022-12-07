// 이 연습게임은 LG노트북 소프트웨어가 멋대로 컴퓨터를 초기화 하는 바람에
// 모든 파일이 소실되어 다시 작성하였습니다.
// 수업당시 코드와 다른점 양해 부탁드립니다.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char operators[] = {'+', '-', '*', '/'};

typedef struct expression
{
	char expression[100];
	float result;

} Expression;

typedef struct Log
{
	Expression* expression;
	float input[1024];
	int tryCount;
	int score;
} Log;

float CalculateExpression(float n1, float n2, char op)
{
	switch(op)
	{
		case '+':
			return n1 + n2;
		case '-':
			return n1 - n2;
		case '*':
			return n1 * n2;
		case '/':
			return n1 / n2;
		default :
			return -1;
	}
}

Expression* GenerateEquation()
{
	Expression* ex = (Expression*)malloc(sizeof(Expression));
	srand(time(NULL));
	int n1, n2, oi;

	n1 = rand()%100;
	n2 = rand()%100;
	oi = rand()%4;

	sprintf(ex->expression, "%d %c %d", n1, operators[oi], n2);
	ex->result = ((int)(CalculateExpression(n1, n2, operators[oi]) * 10))/10.0;

	return ex;
}

void ClearScreen()
{
	system("cls");
	system("clear");
}

int main()
{
	int i = 0;

	int point = 0;

	Expression* ex;

	Log log[10];

	for(i = 0; i < 10 ; i++)
	{
		ex = GenerateEquation();

		float ans;
		int tryCount = 0;

		
		while(1)
		{
			ClearScreen();
			printf("\n[%d/%d tryied] %s = ?\nA : ", i+1, tryCount, ex->expression);
			scanf("%f", &ans);

			if(ex->result == ans)
			{
				point += 10 - tryCount;
				
				log[i].expression = ex;
				log[i].input[tryCount] = ans;
				log[i].tryCount = tryCount;
				log[i].score = point;

				tryCount = 0;
				break;
			}
			else
			{
				tryCount++;
			}

		}
	}
	
	ClearScreen();

	printf("\n\n\n\n============[RESULT]============\n");

	int j;
	for(i = 0; i< 10; i++)
	{
		printf("[%d] %s = %.1f | %dp", i+1, (log[i].expression)->expression, (log[i].expression)->result, 10 - log[i].tryCount);
		for(j = 0; j <= log[i].tryCount; j++)
		{
			printf("\n    - %dtryied | A:%.1f (%c)", j+1, log[i].input[j], log[i].input[j] == (log[i].expression)->result ? 'O' : 'X');
		}
		printf("\n\n");
	}

	printf("\n============[SCORE]============\nSCORE IS %d", log[i-1].score);
}
