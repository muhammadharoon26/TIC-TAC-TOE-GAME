#include<iostream>
#include<graphics.h>

using namespace std;

int gd = DETECT, gm;

int choice_x,choice_y,player = 1,k,x,y;
char choice[50],mark[1],array[10];

int play_game();
int win();
int Congrats_Winner();
int draw_board();
int main()
{
	initgraph(&gd, &gm, 0);
	play_game();
	getch();
}

int draw_board()
{
	bar(503, 50, 509, 480);
	bar(770, 50, 776, 480);
	bar(370, 170, 900, 176);
	bar(370, 335, 900, 341);
	//SQUARE
	bar(370, 50, 900, 56);
	bar(370, 50, 376, 480);
	bar(370, 480, 900, 486);
	bar(900, 50, 906, 480);
}
int play_game()
{
	initwindow(1275, 1000, "Tic Tac Toe");
	int w = textwidth("Tic Tac Toe");
	settextstyle(10, 0, 5);
	outtextxy(500, 2, "Tic Tac Toe");
	do
	{
		draw_board();
		settextstyle(10, 0, 9);
		if(player==1)
		{
			mark[0]='X';
		}
		else if(player==2)
		{
			mark[0]='O';
		}
        getmouseclick(WM_LBUTTONDOWN, x, y);
        //FIRST_ROW
        if ((x < 500) && (x > 370) && (y < 170) && (y > 50))
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
            player=(player==1)?2:1;
        }
        else if ((x < 770) && (x > 500) && (y < 170) && (y > 50))
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
            player=(player==1)?2:1;
        }
        else if ((x < 900) && (x > 770) && (y < 170) && (y > 50))
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
            player=(player==1)?2:1;
    	}
    	//Second Row
    	else if ((x < 500) && (x > 370) && (y < 335) && (y > 170))
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
			player=(player==1)?2:1;
		}
		else if ((x < 770) && (x > 500) && (y < 335) && (y > 170))
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
			player=(player==1)?2:1;
		}
		else if ((x < 900) && (x > 770) && (y < 335) && (y > 170))
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
			player=(player==1)?2:1;
		}
		//THRD_ROW
		else if ((x < 500) && (x > 370) && (y < 480) && (y > 335))
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
			player=(player==1)?2:1;
		}
		else if ((x < 770) && (x > 500) && (y < 480) && (y > 335))
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
			player=(player==1)?2:1;
		}
		else if ((x < 900) && (x > 770) && (y < 480) && (y > 335))
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
			player=(player==1)?2:1;
		}
		k= win();
		if(k==1)
		{
			delay(900);
			Congrats_Winner();
		}
	} 
	while(k==-1);
	return 0;
}
int win()
{
//	rows
	//first row
	if(((array[1]==1)&&(array[2]==2)&&(array[3]==3)) || ((array[1]==11)&&(array[2]==12)&&(array[3]==13)))
	{
		if((array[1]==1)&&(array[2]==2)&&(array[3]==3))
		{
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			outtextxy(500, 500, "O WIN ");
		}
		return 1;
	}
	//second row
	else if(((array[4]==4)&&(array[5]==5)&&(array[6]==6)) || ((array[4]==14)&&(array[5]==15)&&(array[6]==16)))
	{
		if((array[4]==4)&&(array[5]==5)&&(array[6]==6))
		{
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
	//third row
	else if(((array[7]==7)&&(array[8]==8)&&(array[9]==9)) || ((array[7]==17)&&(array[8]==18)&&(array[9]==19)))
	{
		if((array[7]==7)&&(array[8]==8)&&(array[9]==9))
		{
		
			outtextxy(500, 500, "X WIN");	
		}
		else
		{
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
//columns
	//first column
	else if(((array[1]==1)&&(array[4]==4)&&(array[7]==7)) || ((array[1]==11)&&(array[4]==14)&&(array[7]==17)))
	{
		if((array[1]==1)&&(array[4]==4)&&(array[7]==7))
		{
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
	//second column
	else if(((array[2]==2)&&(array[5]==5)&&(array[8]==8)) || ((array[2]==12)&&(array[5]==15)&&(array[8]==18)))
	{
		if((array[2]==2)&&(array[5]==5)&&(array[8]==8))
		{
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}
	//third column
	else if(((array[3]==3)&&(array[6]==6)&&(array[9]==9)) || ((array[3]==13)&&(array[6]==16)&&(array[9]==19)))
	{
		if((array[3]==3)&&(array[6]==6)&&(array[9]==9))
		{
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
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
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}	
	else if(((array[3]==3)&&(array[5]==5)&&(array[7]==7)) || ((array[3]==13)&&(array[5]==15)&&(array[7]==17)))
	{
		if((array[3]==3)&&(array[5]==5)&&(array[7]==7))
		{
		
			outtextxy(500, 500, "X WIN");
		}
		else
		{
			outtextxy(500, 500, "O WIN");
		}
		return 1;
	}	
	else
	{
		return -1;
	}
}
int Congrats_Winner()
{
	initwindow(1275, 1000, "Congrats Winner");
    settextstyle(10, 0, 9);
    outtextxy(170, 250, "Congratulations");
    outtextxy(1030, 250, mark);
    getch();
}
