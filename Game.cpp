#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>

using namespace std;

int gd = DETECT, gm;


int choice_x, choice_y,k;
char choice[50];
char mark[1],array[10];
POINT pos;

int win();
int draw_board();
int main()
{
	
	initgraph(&gd, &gm, 0);
	initwindow(1275, 1000, "Tic Tac Toe");
	setcolor(YELLOW);
	int w = textwidth("Tic Tac Toe");
	settextstyle(10, 0, 5);
	outtextxy(500, 2, "Tic Tac Toe");
	int player = 1 ;

	do
	{
		draw_board();

		settextstyle(10, 0, 9);
		GetCursorPos(&pos);
		if(player==1)
		{
			setcolor(GREEN);
			mark[0]='X';
		}
		else if(player==2)
		{
			setcolor(BROWN);
			mark[0]='O';
		}

		if (GetAsyncKeyState(VK_LBUTTON))
		{
			//FIRST_ROW
			if ((pos.x < 500) && (pos.x > 370) && (pos.y < 170) && (pos.y > 50))
			{
				choice_x = 410;
				choice_y = 62;
				
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[1]=1;
				}
				else if(mark[0]=='O')
				{
					array[1]=11;
				}
			}
			else if ((pos.x < 770) && (pos.x > 500) && (pos.y < 170) && (pos.y > 50))
			{
				choice_x = 610;
				choice_y = 62;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[2]=2;
				}
				else
				{
					array[2]=12;
				}
			}
			else if ((pos.x < 900) && (pos.x > 770) && (pos.y < 170) && (pos.y > 50))
			{
				choice_x = 810;
				choice_y = 62;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[3]=3;
				}
				else
				{
					array[3]=13;
				}
			}
			//SECOND_ROW
			else if ((pos.x < 500) && (pos.x > 370) && (pos.y < 335) && (pos.y > 170))
			{
				choice_x = 410;
				choice_y = 200;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[4]=4;
				}
				else
				{
					array[4]=14;
				}
			}
			else if ((pos.x < 770) && (pos.x > 500) && (pos.y < 335) && (pos.y > 170))
			{
				choice_x = 610;
				choice_y = 200;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[5]=5;
				}
				else
				{
					array[5]=15;
				}
			}
			else if ((pos.x < 900) && (pos.x > 770) && (pos.y < 335) && (pos.y > 170))
			{
				choice_x = 810;
				choice_y = 200;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[6]=6;
				}
				else
				{
					array[6]=16;
				}
			}
			//THRD_ROW
			else if ((pos.x < 500) && (pos.x > 370) && (pos.y < 480) && (pos.y > 335))
			{
				choice_x = 410;
				choice_y = 362;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[7]=7;
				}
				else
				{
					array[7]=17;
				}
			}
			else if ((pos.x < 770) && (pos.x > 500) && (pos.y < 480) && (pos.y > 335))
			{
				choice_x = 610;
				choice_y = 362;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[8]=8;
				}
				else
				{
					array[8]=18;
				}
			}
			else if ((pos.x < 900) && (pos.x > 770) && (pos.y < 480) && (pos.y > 335))
			{
				choice_x = 810;
				choice_y = 362;
				sprintf(mark, "%c", mark[0]);
				outtextxy(choice_x, choice_y, mark);
				if(mark[0]=='X')
				{
					array[9]=9;
				}
				else
				{
					array[9]=19;
				}
			}
		}
		k= win();
		if(player==1)
		{
			player=2;
		}
		else if(player==2)
		{
			player=1;
		}
	} 
	while(k==-1);
	if(k==1)
	{
		cout<<"thanks";
	}
}

int draw_board()
{
	setcolor(BLUE);
	bar3d(503, 50, 509, 480, 5, 1);
	bar3d(770, 50, 776, 480, 5, 1);
	bar3d(370, 170, 900, 176, 5, 1);
	bar3d(370, 335, 900, 341, 5, 1);
	//SQUARE
	setcolor(RED);
	bar3d(370, 50, 900, 56,5,1);
	bar3d(370, 50, 376, 480,5,1);
	bar3d(370, 480, 900, 486,5,1);
	bar3d(900, 50, 906, 480,5,1);
}
int win()
{
	setcolor(CYAN);
//	rows
	//first row
	
	if(((array[1]==1)&&(array[2]==2)&&(array[3]==3)) || ((array[1]==11)&&(array[2]==12)&&(array[3]==13)))
	{
		if((array[1]==1)&&(array[2]==2)&&(array[3]==3))
		{
		
			settextstyle(1, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN ");
		}
		return 1;
	}
	//second row
	else if(((array[4]==4)&&(array[5]==5)&&(array[6]==6)) || ((array[4]==14)&&(array[5]==15)&&(array[6]==16)))
	{
		if((array[4]==4)&&(array[5]==5)&&(array[6]==6))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
	//third row
	else if(((array[7]==7)&&(array[8]==8)&&(array[9]==9)) || ((array[7]==17)&&(array[8]==18)&&(array[9]==19)))
	{
		if((array[7]==7)&&(array[8]==8)&&(array[9]==9))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");	
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
//column
	//first column
	else if(((array[1]==1)&&(array[4]==4)&&(array[7]==7)) || ((array[1]==11)&&(array[4]==14)&&(array[7]==17)))
	{
		if((array[1]==1)&&(array[4]==4)&&(array[7]==7))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
	//second column
	else if(((array[2]==2)&&(array[5]==5)&&(array[8]==8)) || ((array[2]==12)&&(array[5]==15)&&(array[8]==18)))
	{
		if((array[2]==2)&&(array[5]==5)&&(array[8]==8))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
	//third column
	else if(((array[3]==3)&&(array[6]==6)&&(array[9]==9)) || ((array[3]==13)&&(array[6]==16)&&(array[9]==19)))
	{
		if((array[3]==3)&&(array[6]==6)&&(array[9]==9))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
//diagonals
	//diagonal 1
	else if(((array[1]==1)&&(array[5]==5)&&(array[9]==9)) || ((array[1]==11)&&(array[5]==15)&&(array[9]==19)))
	{
		if((array[1]==1)&&(array[5]==5)&&(array[9]==9))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}	
	else if(((array[3]==3)&&(array[5]==5)&&(array[7]==7)) || ((array[3]==13)&&(array[5]==15)&&(array[7]==17)))
	{
		if((array[3]==3)&&(array[5]==5)&&(array[7]==7))
		{
		
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			settextstyle(10, 0, 5);
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}	
	else
	{
		return -1;
	}
}


