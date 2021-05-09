#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <iostream>
using std::cout;
using std::cin;


int main()
{
  
  unique_ptr<TicTacToe> game;
  TicTacToeManager manager;


  string player="";
  string user_opts;
  int game_num;

  do
  {
  
    do
    {
      cout<<"Enter game 3 or 4: ";
      cin>>game_num;

    }while(game_num!=3&&game_num!=4);

    if (game_num == 3) {
      game = make_unique<TicTacToe3>();
    } else {
      game = make_unique<TicTacToe4>();
    }

    do
    {
      cout<<"Enter X or O: ";
      cin>>player;

    }while(player!="X"&&player!="O");

    game->start_game(player);

    do
    {
      cin>>*game;
      cout<<*game;
    }while(!game->game_over());

    int o, x, t;
    manager.get_winner_total(o, x, t);
    cout<<"\nGame over \n";
    manager.save_game(game);

    cout<<"Play again? Y or y \n";
    cin>>user_opts;

  }while(user_opts=="y"||user_opts == "Y");


  cout<<manager;

	return 0;
}
