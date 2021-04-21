#include "tic_tac_toe.h"

#include <iostream>
using std::cout;
using std::cin;

int main()
{
  TicTacToe tictactoe;

  string first_player;
  int position;

  cout<<"Enter X or O: ";
  cin>>first_player;
  tictactoe.start_game(first_player);

  while(tictactoe.game_over()==false)
  {
    tictactoe.display_board();
    cout<<"Enter position from 1 to 9: ";
    cin>>position;
    tictactoe.mark_board(position);
  }
	return 0;
}
