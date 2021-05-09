//h
#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H

#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
using std::unique_ptr; using std::make_unique;

class TicTacToeManager
{

  friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
  
  private:

  vector<unique_ptr<TicTacToe>> games;
  int x_win = {0};
  int o_win = {0};
  int ties = {0};

  void update_winner_count(string winner);

  public:
  
  void save_game(unique_ptr<TicTacToe> &b);
  void get_winner_total(int& o, int& x, int& t);

};

#endif