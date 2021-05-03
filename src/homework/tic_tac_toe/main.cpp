#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
  TicTacToe tictactoe(4);
  TicTacToeManager manager;

  string player;
  string user_opts;

  do
  {
    do
    {
      cout<<"Enter X or O: ";
      cin>>player;
    }while(player!="X"&&player!="O");

    tictactoe.start_game(player);

    do
    {
      cin>>tictactoe;
      cout<<tictactoe;

    }while(tictactoe.game_over()==false);
    cout<<tictactoe;
    cout<<"\nGame over \n\n";
    manager.save_game(tictactoe);

    int o,x,t;
    manager.get_winner_total(o,x,t);
    cout<<"X wins: "<<x<<"\nO wins: "<<o<<"\nTies: "<<t<<"\n\n";

    cout<<"Play again? Y or y ";
    cin>>user_opts;

  }while(user_opts=="y"||user_opts == "Y");
  cout<<manager;
	return 0;
}
