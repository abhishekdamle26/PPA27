#include<stdio.h>
void Result();
int main()
{
	char MultiArray [3][3]={'-','-','-','-','-','-','-','-','-'};
	int Input1=0;
	int Input2=0;
	int iRow=0;
	int iCol=0;
	int iCnt=0;
	int iCnt1=0;
	int iCnt2=0;
	int iCnt3=0;
	int iCount=0;
	char PlayerOne='X';
	char PlayerTwo='O';
	void Result()
	{
		if(MultiArray[0][0] =='X' && MultiArray[0][1] =='X'&& MultiArray[0][2]=='X' )
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n");
			iCount=10;
		}
		else if(MultiArray[0][0] =='O' && MultiArray[0][1] =='O'&& MultiArray[0][2]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n");
			iCount=10;
		}	
		else if(MultiArray[1][0] =='X' && MultiArray[1][1] =='X'&& MultiArray[1][2]=='X')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n");
			iCount=10;
		}
		else if(MultiArray[1][0] =='O' && MultiArray[1][1] =='O'&& MultiArray[1][2]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[2][0] =='X' && MultiArray[2][1] =='X'&& MultiArray[2][2]=='X')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[2][0] =='O' && MultiArray[2][1] =='O'&& MultiArray[2][2]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][2] =='X' && MultiArray[1][2] =='X'&& MultiArray[2][2]=='X')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][2] =='O' && MultiArray[1][2] =='O'&& MultiArray[2][2]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n ");
			iCount=10;
		}	
		else if(MultiArray[0][0] =='X' && MultiArray[1][0] =='X'&& MultiArray[2][0]=='X')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][0] =='O' && MultiArray[1][0] =='O'&& MultiArray[2][0]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][0] =='X' && MultiArray[1][1] =='X'&& MultiArray[2][2]=='X')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][0] =='O' && MultiArray[1][1] =='O'&& MultiArray[2][2]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][2] =='X' && MultiArray[1][1] =='X'&& MultiArray[2][0]=='X')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER ONE IS WINNER\n ");
			iCount=10;
		}
		else if(MultiArray[0][2] =='O' && MultiArray[1][1] =='O'&& MultiArray[2][0]=='O')
		{
			printf("--------------------------------------------\n");
			printf("PLAYER TWO IS WINNER\n ");
			iCount=10;
		}
		else if(iCount==9)
		{
			printf("--------------------------------------------\n");
			printf("ITS A DRAW, BETTER LUCK NEXT TIME\n");
		}
	}
	void Display()
	{
		for(iCnt2=0;iCnt2<3;iCnt2++)
	{
		for(iCnt3=0;iCnt3<3;iCnt3++)
		{
			printf("%c\t",MultiArray[iCnt2][iCnt3]);
		}
		printf("\n");
	}
	printf("--------------------------------------------\n");
	}
	for(iCnt=0;iCnt<3;iCnt++)
	{
		for(iCnt1=0;iCnt1<3;iCnt1++)
		{
			if(iCount==10)
			{
				break;
			}
			iCount++;
			if(iCount%2!=0)
			{
				printf("PLAYER ONE ENTER ROW: (IN RANGE FROM 1 TO 3)\n");
			}
			else
			{
				printf("PLAYER TWO ENTER ROW: (IN RANGE FROM 1 TO 3)\n");
			}
			scanf(" %d",&Input1);
			iRow=Input1-1;
			if(iCount%2!=0)
			{
				printf("PLAYER ONE ENTER COLUMN: (IN RANGE FROM 1 TO 3)\n");
			}
			else
			{
				printf("PLAYER TWO ENTER COLUMN: (IN RANGE FROM 1 TO 3)\n");
			}
			scanf(" %d",&Input2);
			iCol=Input2-1;
			if(iCount%2!=0)
			{
				MultiArray[iRow][iCol]=PlayerOne;
			}
			else
			{
				MultiArray[iRow][iCol]=PlayerTwo;
			}
			Display();
			if(iCount>=5)
			{
				Result();	
			}
		}
	}
	
	return 0;
}