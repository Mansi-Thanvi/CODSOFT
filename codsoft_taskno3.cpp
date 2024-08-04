//04-07-2024 Mansi Thanvi
//Tic tac toe
#include<iostream>
using namespace std;

void boardbase(char board[3][3]) //this function will create the board of game
{
	cout<<"_____________"<<endl;
	for (int i = 0; i<3; i++)
	{
		cout<<"| ";
		for(int j = 0; j<3; j++)
		{
			cout<<board[i][j]<<" | ";
		}
		cout<<"\n_____________"<<endl;
	}
}

bool winor(char board[3][3], char player) //this function will check if a player has won or not
{
	for(int i = 0; i<3; i++)
	{
		if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
		   return true;
		if(board[0][i]==player && board[1][i]==player && board[2][i]==player)
		   return true;
	}
	if(board[0][0]==player && board[1][1]==player && board[2][2]==player)
	   return true;
	if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
	   return true;
	else
	   return false;
}

int main()
{
	char board[3][3] = {{ ' ', ' ', ' '},
	                    { ' ', ' ', ' '},
						{ ' ', ' ', ' '}};
    char player = 'X';
    int row, col;
    int turn; //turns of players
    
    cout<<"Tic Tac Toe!!"<<endl;
    
    //loop for game
    for (turn = 0; turn<9; turn++)
    {
    	boardbase(board);
    	
    	while(true)
    	{
    		cout<<"Player "<<player<<" enter row(0-2) and column(0-2): ";
    		cin>>row>>col;
    		
    		if(board[row][col]!= ' ' || row<0 || row >2 || col<0 || col>2)
    		   cout<<"Invalid move. Try again.\n";
    		else
    		   break;
		}
		
		board[row][col]=player;
		
		if(winor(board, player))
		{
			boardbase(board);
			cout<<"Player "<<player<<" wins!!!"<<endl;
			break;
		}
		player = (player == 'X')? 'O':'X';  //switch players X O
	}
	
	boardbase(board);
	//game ends
	
	if(turn==9 && !winor(board, 'X')&& !winor(board, 'O'))
	   cout<<"It's a draw! "<<endl;
	
	return 0;
}
