//cpp
#include "tic_tac_toe_manager.h"
#include <vector>
using std::vector;


#include<ostream>

void TicTacToeManager::update_winner_count(string winner)
{
  if (winner =="X"){x_win ++;}
  else if(winner =="O"){o_win++;}
  else{ties ++;}
}

void TicTacToeManager::save_game(TicTacToe b)
{
  games.push_back(b);
  update_winner_count(b.get_winner());
}


void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
  o = o_win;
  x = x_win;
  t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  for(auto game: manager.games)
  {
    out<<"\n"<<game<<"\n";
  }

  out<<"O wins: "<<manager.o_win<<"\n";
  out<<"X wins: "<<manager.x_win<<"\n";
  out<<"TIES: "<<manager.ties<<"\n";

  return out;
}

