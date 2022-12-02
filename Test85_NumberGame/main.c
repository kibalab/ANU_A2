#include <stdio.h>
#include <stdlib.h>

typedef struct Answer
{
	int length;
	int* numbers;
} Answer;

typedef struct Result
{
	int strike;
	int ball;
} Result;

Answer GenerateNumber(int length)
{
	Answer ans = {0, NULL};
	ans.length = length;
	ans.numbers = (int*) malloc(sizeof(int) * length);

	int i, j;
	for(i = 0; i< length; i++)
	{
		int rn = rand()%10;
		for(j = 0; j < i; j++)
		{
			if(rn == ans.numbers[j])
			{
				rn = rand()%10;
				j = 0;
			}
		}
		
		ans.numbers[i] = rn;
	}
	
	/*
	printf("\n\n");
	for(i = 0; i< length; i++)
	{
		printf("%d ", ans.numbers[i]);
	}
	*/ // for Random number result Check

	return ans;
}

int ClearScreen()
{
	system("cls");
	system("clear");
}

Result CheckResult(Answer ans, int* Inputs)
{
	Result res = {0, 0};

	int i, j;
	for(i = 0; i< ans.length; i++)
	{
		for(j = 0; j< ans.length; j++)
		{
			if(Inputs[i] == ans.numbers[j])
			{
				if(i == j) res.strike++;
				else res.ball++;
			}
		}
	}
	return res;
}

const char* GetLevelName(int level)
{
	if(level == 1) return "Easy";
	else if (level == 2) return "Hard";
	else return "Expert";
}

int main()
{
	int mode;
	
	while(1)
	{
		ClearScreen();
		printf("[Number Game]\n   1. Easy (three numbers)\n   2. Hard (four numbers)\n   3. Expert (five numbers)\n\nPlease Select playmode : ");
		scanf("%d", &mode);
	
		if(mode >= 1 || mode <= 3)
		{
			//ClearScreen();
			break;
		}
	}

	Answer ans = GenerateNumber(mode+2);

	int* Inputs = (int*) malloc(sizeof(int) * ans.length);
	int tryCount = 0;
	for(tryCount = 0; tryCount < 10; tryCount++)
	{
		printf("\n[Try.%d/%s]\nPlease Input %d Numbers : ", tryCount+1, GetLevelName(mode), ans.length);
		int i;
		for(i = 0; i< ans.length; i++)
		{
			scanf("%d", &Inputs[i]);
		}
		Result res = CheckResult(ans, Inputs);

		printf("\n[Result] %d Strikes, %d Balls\n", res.strike, res.ball);

		if(res.strike >= ans.length)
		{
			printf("\nWoW! YOU ARE WIN!\n%d tried.", tryCount+1);
			break;
		}
	}
	printf("End the game.");
}
