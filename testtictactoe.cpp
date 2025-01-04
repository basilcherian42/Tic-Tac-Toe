#include<iostream>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
using namespace std;

class tictactoe
{
	public:
	    tictactoe(int x)
		{
	    	cout<<"\n\n\n\t\t\t\t\tRULES FOR TIC-TAC-TOE";
			cout<<"\n\n\n\t1. The game is played on a grid that's 3 squares by 3 squares.";
            cout<<"\n\t2. Players take turns putting their marks in empty squares.";
			cout<<"\n\t3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.";
			cout<<"\n\t4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.";
			cout<<"\n\n\t\t";
			system("pause");
		}
		tictactoe()
		{
			
		}
        int scoreX=0;
        int scoreO=0;
        void score_update(int x,int y);
        char mark='X',mark2='O';
};

class tictactoe3X3:public tictactoe
{
	public:
		tictactoe3X3():tictactoe(5)
		{
			
		}
		char square[10]={'0','1','2','3','4','5','6','7','8','9'};
	    int checkwin();
	    void board();
	    void human();
        void computer();
        void reset();
        void game1();
        void game2();
};
class tictactoe4X4:public tictactoe
{
	public:
		const char* square[17]={"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16"};
		const char* mark[2]={"X ","O "};
		int checkwin();
	    void board();
	    void human();
        void computer();
        void reset();
        void game3();
        void game4();
};

int main()
{
	tictactoe3X3 match;
    tictactoe4X4 match2;
	int choice,answer;
	while(1)
	{
	system("cls");
	cout<<"\n\n\n\t\t\t\t\t TIC TAC TOE";
	cout<<"\n\n\n\n\n\t\t\t Which game do you want to play: \n";
	cout<<"\n\t\t\t 1  :  Play vs Computer (3X3) \n\n\t\t\t 2  :  2 Player Game (3X3)\n";
	cout<<"\n\t\t\t 3  :  Play vs Computer (4X4)\n\n\t\t\t 4  :  2 Player Game (4X4)\n";
	cout<<"\n\n\n\n\n\n\t\t\tEnter:";
	cin>>choice;
	while(1)
	{
		if(choice==1)
		{
			match.game1();
			cout<<"\n\n \t\t\t Press 1 to play again";
			cout<<"\n\n \t\t\t Press 0 to exit";
			cout<<"\n\n \t\t\t Enter:";
			cin>>answer;
			if(answer==1)
			{
				match.reset();
			}
			else if(answer==0)
			{
				match.reset();
				match.score_update(0,0);
				break;
			}
			else
			{
				cout<<"Invalid input";
			}
		}
		
        if(choice==2)
	    {
			match.game2();
			cout<<"\n\n \t\t\t Press 1 to play again";
			cout<<"\n\n \t\t\t Press 0 to exit";
			cout<<"\n\n \t\t\t Enter:";
			cin>>answer;
			if(answer==1)
			{
				match.reset();
			}
			else if(answer==0)
			{
				match.reset();
				match.score_update(0,0);
				break;
			}
			else{
				cout<<"Invalid input";
			}
		}
		if(choice==3)
		{
			match2.game3();
			cout<<"\n\n \t\t\t Press 1 to play again";
			cout<<"\n\n \t\t\t Press 0 to exit";
			cout<<"\n\n \t\t\t Enter:";
			cin>>answer;
			if(answer==1)
			{
				match2.reset();
			}
			else if(answer==0)
			{
				match2.reset();
				match2.score_update(0,0);
				break;
			}
			else{
				cout<<"Invalid input";
			}
		}
		if(choice==4)
		{
			match2.game4();
			cout<<"\n\n \t\t\t Press 1 to play again";
			cout<<"\n\n \t\t\t Press 0 to exit";
			cout<<"\n\n \t\t\t Enter:";
			cin>>answer;
			if(answer==1)
			{
				match2.reset();
			}
			else if(answer==0)
			{
				match2.reset();
				match2.score_update(0,0);
				break;
			}
			else{
				cout<<"Invalid input";
			}
		}
		else
		{
			cout<<"Invalid input!"<<endl;
		}
    }
	}
  }

int tictactoe3X3::checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1]!= '1' && square[2]!='2' && square[3]!= '3' 
                    && square[4]!= '4' && square[5]!= '5' && square[6]!= '6' 
                  && square[7]!= '7' && square[8]!= '8' && square[9]!= '9')

        return 0;
    else
        return -1;
}

int tictactoe4X4::checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[2] == square[3] && square[3] == square[4])

        return 1;
    else if (square[5] == square[6] && square[6] == square[7])

        return 1;
    else if (square[6] == square[7] && square[7] == square[8])

        return 1;
    else if (square[9] == square[10] && square[10] == square[11])

        return 1;
    else if (square[10] == square[11] && square[11] == square[12])

        return 1;
    else if (square[13] == square[14] && square[14] == square[15])

        return 1;
    else if (square[14] == square[15] && square[15] == square[16])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[5] == square[9] && square[9] == square[13])

        return 1;
    else if (square[2] == square[6] && square[6] == square[10])

        return 1;
    else if (square[6] == square[10] && square[10] == square[14])

        return 1;
    else if (square[3] == square[7] && square[7] == square[11])

        return 1;
    else if (square[7] == square[11] && square[11] == square[15])

        return 1;
    else if (square[4] == square[8] && square[8] == square[12])

        return 1;
    else if (square[8] == square[12] && square[12] == square[16])

        return 1;
    else if (square[4] == square[7] && square[7] == square[10])

        return 1;
    else if (square[7] == square[10] && square[10] == square[13])

        return 1;
    else if (square[1] == square[6] && square[6] == square[11])

        return 1;
    else if (square[6] == square[11] && square[11] == square[16])

        return 1;
    else if (square[1]!= "01" && square[2]!="02" && square[3]!= "03" 
                    && square[4]!= "04" && square[5]!= "05" && square[6]!= "06" 
                  && square[7]!= "07" && square[8]!= "08" && square[9]!= "09" && square[10]!= "10" && square[11]!= "11" && square[12]!= "12" 
				  && square[13]!= "13" && square[14]!= "14" && square[16]!= "15" && square[16]!= "16")

        return 0;
    else
        return -1;
}


void tictactoe3X3::board()
{
    system("cls");
    cout <<"\n\n\n";
    cout<<"\t\t\t\t\t\t     |     |     " << endl;
    cout<<"\t\t\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout<< "\t\t\t\t\t\t_____|_____|_____" << endl;
    cout<< "\t\t\t\t\t\t     |     |     " << endl;

    cout<< "\t\t\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout<< "\t\t\t\t\t\t_____|_____|_____" << endl;
    cout<< "\t\t\t\t\t\t     |     |     " << endl;

    cout<< "\t\t\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout<< "\t\t\t\t\t\t     |     |     " << endl << endl;
}
void tictactoe4X4::board()
{
    system("cls");
    cout <<"\n\n\n";
    cout<<"\t\t\t\t\t\t       |       |       |       " << endl;
    cout<<"\t\t\t\t\t\t  " << square[1] << "   |  " << square[2] << "   |   " << square[3] << "  |  " << square[4] << endl;

    cout<< "\t\t\t\t\t\t_______|_______|_______|_______" << endl;
    cout<< "\t\t\t\t\t\t       |       |       |       " << endl;

    cout<<"\t\t\t\t\t\t  " << square[5] << "   |  " << square[6] << "   |   " << square[7] << "  |  " << square[8] << endl;

    cout<< "\t\t\t\t\t\t_______|_______|_______|_______" << endl;
    cout<< "\t\t\t\t\t\t       |       |       |       " << endl;

    cout<<"\t\t\t\t\t\t  " << square[9] << "   |  " << square[10] << "   |   " << square[11] << "  |  " << square[12] << endl;
    
    cout<< "\t\t\t\t\t\t_______|_______|_______|_______" << endl;
    cout<< "\t\t\t\t\t\t       |       |       |       " << endl;
    
    cout<<"\t\t\t\t\t\t  " << square[13] << "   |  " << square[14] << "   |   " << square[15] << "  |  " << square[16] << endl;
    
	cout<< "\t\t\t\t\t\t       |       |       |       " << endl << endl;
}

void tictactoe::score_update(int x,int y)
{
	if(x==0 && y==0)
	{
		scoreX=0;
		scoreO=0;
	}
	scoreX=scoreX+x;
	scoreO=scoreO+y;
	cout<<"\n\n\t\t\t\tScore(X) : "<<scoreX<<"\t\t\tScore(O) : "<<scoreO<<"\n\n";
}
void tictactoe3X3::game1()
{
	int i=0;
	board();
		while(1)
		{
			human();
			board();
			i=checkwin();
			if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tYOU  HAVE WON !!!"<<endl;
				score_update(1,0);
				break;
			}
			else if(i==0)
			{
				cout<<"\n\n\t\t\t\t\tGame Drawn"<<endl;
				break;
			}
			computer();
			board();
		    i=checkwin();
		    if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tYOU  HAVE LOST"<<endl;
				score_update(0,1);
				break;
			}
       }
}

void tictactoe4X4::game3()
{
	int i=0;
	board();
		while(1)
		{
			human();
			board();
			i=checkwin();
			if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tYOU  HAVE WON !!!"<<endl;
				score_update(1,0);
				break;
			}
			else if(i==0)
			{
				cout<<"\n\n\t\t\t\t\tGame Drawn"<<endl;
				break;
			}
			computer();
			board();
		    i=checkwin();
		    if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tYOU  HAVE LOST"<<endl;
				score_update(0,1);
				break;
			}
       }
}
void tictactoe3X3::reset()
{
	square[1]='1';
	square[2]='2';
	square[3]='3';
	square[4]='4';
	square[5]='5';
	square[6]='6';
	square[7]='7';
	square[8]='8';
	square[9]='9';
}

void tictactoe4X4::reset()
{
	square[1]="01";
	square[2]="02";
	square[3]="03";
	square[4]="04";
	square[5]="05";
	square[6]="06";
	square[7]="07";
	square[8]="08";
	square[9]="09";
	square[10]="10";
	square[11]="11";
	square[12]="12";
	square[13]="13";
	square[14]="14";
	square[15]="15";
	square[16]="16";
	const char* mark[2]={"X ","O "};
}
void tictactoe3X3::game2()
{
	int i=0;
	board();
		while(1)
		{
			mark='X';
			cout<<"Player X"<<endl;
			human();
			board();
			i=checkwin();
			if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tPLAYER X WINS!!!"<<endl;
				score_update(1,0);
				break;
			}
			else if(i==0)
			{
				cout<<"\n\n\t\t\t\t\tGame Drawn"<<endl;
				break;
			}
			mark='O';
			cout<<"Player O"<<endl;
			human();
			board();
		    i=checkwin();
		    if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tPLAYER O WINS!!!"<<endl;
				score_update(0,1);
				break;
			}
       }
}

void tictactoe4X4::game4()
{
	int i=0;
	board();
		while(1)
		{
			mark[0]="X ";
			cout<<"Player X"<<endl;
			human();
			board();
			i=checkwin();
			if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tPLAYER X WINS!!!"<<endl;
				score_update(1,0);
				break;
			}
			else if(i==0)
			{
				cout<<"\n\n\t\t\t\t\tGame Drawn"<<endl;
				break;
			}
			mark[0]="O ";
			cout<<"Player O"<<endl;
			human();
			board();
		    i=checkwin();
		    if(i==1)
			{
				cout<<"\n\n\t\t\t\t\tPLAYER O WINS!!!"<<endl;
				score_update(0,1);
				break;
			}
       }
}
void tictactoe4X4::human()
{
	int move=0;
	cout<<"Enter your move: ";
			cin>>move;
			if(move==1&&square[1]=="01")
			{
			     square[1]=mark[0];
			}
        else if(move==2&&square[2]=="02")
        {
        	square[2]=mark[0];
		}
        else if(move==3&&square[3]=="03")
        {
        	square[3]=mark[0];
		}
        else if(move==4&&square[4]=="04")
        {
        	square[4] =mark[0];
		}
        else if(move==5&&square[5]=="05")
        {
        	 square[5]=mark[0];
		}
        else if(move==6&&square[6]=="06")
        {
        	square[6]=mark[0];
		}
        else if(move==7&&square[7]=="07")
        {
        	square[7]=mark[0];
		}
        else if(move==8&&square[8]=="08")
        {
        	square[8]=mark[0];
		}
        else if(move==9&&square[9]=="09")
        {
        	square[9]=mark[0];
		}
		else if(move==10&&square[10]=="10")
        {
        	square[10]=mark[0];
		}
		else if(move==11&&square[11]=="11")
        {
        	square[11]=mark[0];
		}
		else if(move==12&&square[12]=="12")
        {
        	square[12]=mark[0];
		}
		else if(move==13&&square[13]=="13")
        {
        	square[13]=mark[0];
		}
		else if(move==14&&square[14]=="14")
        {
        	square[14]=mark[0];
		}
		else if(move==15&&square[15]=="15")
        {
        	square[15]=mark[0];
		}
		else if(move==16&&square[16]=="16")
        {
        	square[16]=mark[0];
		}
        else
        {
            cout<<"Invalid move ";
		}
}

void tictactoe3X3::human()
{
	int move=0;
	cout<<"Enter your move: ";
			cin>>move;
			if(move==1&&square[1]=='1')
			{
			     square[1]=mark;
			}
        else if(move==2&&square[2]=='2')
        {
        	square[2]=mark;
		}
        else if(move==3&&square[3]=='3')
        {
        	square[3]=mark;
		}
        else if(move==4&&square[4]=='4')
        {
        	square[4] =mark;
		}
        else if(move==5&&square[5]=='5')
        {
        	 square[5]=mark;
		}
        else if(move==6&&square[6]=='6')
        {
        	square[6]=mark;
		}
        else if(move==7&&square[7]=='7')
        {
        	square[7]=mark;
		}
        else if(move==8&&square[8]=='8')
        {
        	square[8]=mark;
		}
        else if(move==9&&square[9]=='9')
        {
        	square[9]=mark;
		}
        else
        {
            cout<<"Invalid move ";
		}
}
void tictactoe3X3::computer()
{
	int flag=0,move2=0;
	srand((unsigned int)time(NULL));
	while(flag==0)
		{
			move2=1+(rand()%9);
		if(move2==1&&square[1]=='1')
		{
			square[1]=mark2;
			flag=1;
		}
        else if(move2==2&&square[2]=='2')
        {
        	square[2]=mark2;
			flag=1;
		}
        else if(move2==3&&square[3]=='3')
        {
        	square[3]=mark2;
			flag=1;
		}
        else if(move2==4&&square[4]=='4')
        {
        	square[4]=mark2;
			flag=1;
		}
        else if(move2==5&&square[5]=='5')
        {
        	square[5]=mark2;
			flag=1;
		}
        else if(move2==6&&square[6]=='6')
        {
        	square[6]=mark2;
			flag=1;
		}
        else if(move2==7&&square[7]=='7')
        {
            square[7]=mark2;
		    flag=1;	
		}   
        else if(move2==8&&square[8]=='8')
		{
			square[8]=mark2;
			flag=1;
		}
        else if(move2==9&&square[9]=='9')
        {
        	square[9]=mark2;
        	flag=1;
		}
		}
	cout<<("Computer has placed a move on ")<<move2;
	Sleep(2000);
}

void tictactoe4X4::computer()
{
	int flag=0,move2=0;
	srand((unsigned int)time(NULL));
	while(flag==0)
		{
			move2=1+(rand()%16);
		if(move2==1&&square[1]=="01")
		{
			square[1]=mark[1];
			flag=1;
		}
        else if(move2==2&&square[2]=="02")
        {
        	square[2]=mark[1];
			flag=1;
		}
        else if(move2==3&&square[3]=="03")
        {
        	square[3]=mark[1];
			flag=1;
		}
        else if(move2==4&&square[4]=="04")
        {
        	square[4]=mark[1];
			flag=1;
		}
        else if(move2==5&&square[5]=="05")
        {
        	square[5]=mark[1];
			flag=1;
		}
        else if(move2==6&&square[6]=="06")
        {
        	square[6]=mark[1];
			flag=1;
		}
        else if(move2==7&&square[7]=="07")
        {
            square[7]=mark[1];
		    flag=1;	
		}   
        else if(move2==8&&square[8]=="08")
		{
			square[8]=mark[1];
			flag=1;
		}
        else if(move2==9&&square[9]=="09")
        {
        	square[9]=mark[1];
        	flag=1;
		}
		else if(move2==10&&square[10]=="10")
        {
        	square[10]=mark[1];
        	flag=1;
		}
		else if(move2==11&&square[11]=="11")
        {
        	square[11]=mark[1];
        	flag=1;
		}
		else if(move2==12&&square[12]=="12")
        {
        	square[12]=mark[1];
        	flag=1;
		}
		else if(move2==13&&square[13]=="13")
        {
        	square[13]=mark[1];
        	flag=1;
		}
		else if(move2==14&&square[14]=="14")
        {
        	square[14]=mark[1];
        	flag=1;
		}
		else if(move2==15&&square[15]=="15")
        {
        	square[15]=mark[1];
        	flag=1;
		}
		else if(move2==16&&square[16]=="16")
        {
        	square[16]=mark[1];
        	flag=1;
		}
	}
	cout<<("Computer has placed a move on ")<<move2;
	Sleep(2000);
}
