//cpp
#include "tic_tac_toe_manager.h"

#include <utility>
using std::move;

#include<ostream>
 
void TicTacToeManager::update_winner_count(string winner)
{
  if (winner =="X"){x_win ++;}
  else if(winner =="O"){o_win++;}
  else{ties ++;}
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe> &b)
{
  update_winner_count(b->get_winner());
  games.push_back(move(b)); 
}


void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
  o = o_win;
  x = x_win;
  t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  for(auto const& game: manager.games)
  {
    out<<*game<<"\n";
  }

  out<<"X wins: "<<manager.x_win<<"\n";
  out<<"O wins: "<<manager.o_win<<"\n";
  out<<"TIES  : "<<manager.ties<<"\n";

  return out;
}
