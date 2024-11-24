#include <stdio.h>
int main()
{
	printf("*Welcome to Quize game*\n");
	
	int start,score;
	printf("Plz enter 1 to start the game:\n");
	scanf("%d",&start);
	if (start!=1)
	{
		printf("Plz enter the number 1:");
	}
	
	else
	{
		int a;
		printf("\n");
		printf("A) which cricketer has scored most ODI centuries:\n");
		printf(" 1) Sachin Tendulkar\n 2)Ricky Ponting\n 3)Virat Kholi\n 4)Rohit Sharma\n");
		printf("Enter the right option:\n");
		scanf("%d",&a);
		if (a==3)
		{
			printf("it is right Answer:\n");
			score++;
		}
		else
		{
			printf("it is wrong Answer:\n");
		}
		
		int b;
		printf("\n");
		printf("B) Which nation won the worrld cup in 1975:\n");
		printf(" 1)West indies\n 2) Pakistan\n 3)India\n 4)Australia|n");
		printf("Enter the right option:\n");
		scanf("%d",&a);
		if (b==1)
		{
			printf("it is right Answer:\n");
			score++;
		}
		else
		{
			printf("It is wrong Answer:\n");
		}
		
			int c;
			printf("\n");
		printf("C) which cricketer holds record for fastest century in ODI:\n");
		printf(" 1)Chirs Gayle\n 2)Rohit sharma\n 3)Brandum MUcullum\n 4)AB de villiers\n");
		printf("Enter the right option:\n");
		scanf("%d",&c);
		if (c==4)
		{
			printf("it is right Answer:\n");
			score++;
		}
		else
		{
			printf("It is wrong Answer:\n");
		}
		
			int d;
			printf("\n");
		printf("D) Who has scored the most runs as an individual in an ODI:\n");
		printf(" 1) Sachin tendulkar\n  2)Rohit sharma\n 3)Virat Kholi\n 4)Kane Williamsons\n");
		printf("Enter the right option:\n");
		scanf("%d",&d);
		if (d==2)
		{
			printf("it is right Answer:\n");
			score++;
		}
		else
		{
			printf("It is wrong Answer:\n");
		}
		
		int e;
		printf("\n");
		printf("E) Who hits the fastest fifty in T20 internationals:\n");
		printf(" 1) Yuvraj Singh\n  2)Chirs Gayle\n 3)Virat Kholi\n 4)Sunil Narayan\n");
		printf("Enter the right option:\n");
		scanf("%d",&e);
		if (e==1)
		{
			printf("it is right Answer:\n");
			score++;
		}
		else
		{
			printf("It is wrong Answer:\n");
		}
		printf("\n");
		printf("Your score is %d:",score);
		
	}
}
