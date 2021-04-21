#include "tic_tac_toe.h"

#include <iostream>
using std::cout;
using std::cin;

int main()
{
  TicTacToe tictactoe;
  string first_player;
  int position = 1;
  string user_opts="y";

  while(user_opts=="y")
  {
    while(first_player!="X"&&first_player!="O")
    {
      cout<<"Enter X or O: ";
      cin>>first_player;
    }
    tictactoe.start_game(first_player);

    while(tictactoe.game_over()==false)
    {
      cout<<"Enter position from 1 to 9: ";
      cin>>position;
      if(position<10&&position>0)
      {
        tictactoe.mark_board(position);
        tictactoe.display_board();
      }
    }
    cout<<"Game overplay again? y ";
    cin>>user_opts;
  }
	return 0;
}
