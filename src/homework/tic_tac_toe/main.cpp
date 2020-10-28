#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player = "";
	char yesNo;
	
	do
	{
	
		while(player == "")
		{
			cout<<"Enter X or O: ";
			cin>>player;
		
			if(player == "x" || player == "X")
			{
				player = "X";
			}
			else if(player == "o" || player == "O")
			{
				player = "O";
			}
			else
			{
				cout<<"Invalid player!\n";
				player = "";
			}
		}

		tic_tac_toe.start_game(player);
		tic_tac_toe.display_board();

		do
		{
			int position;
			cout<<"Enter position 1 to 9: ";
			cin>>position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();

		}while(tic_tac_toe.game_over() == false);

		cout<<"Game Over\n\n";
		cout<<"The winner of the game is: "<<tic_tac_toe.get_winner()<<"\n\n";
		player = "";

		cout<<"Play again? (y/n) ";
		cin>>yesNo;
	
	}while(yesNo == 'Y' || yesNo == 'y');

	return 0;	
}