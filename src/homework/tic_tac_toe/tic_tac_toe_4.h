//h
#ifndef TICTACTOE_4_H
#define TICTACTOE_4_H

#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
  private: 
  bool check_column_win() override;
  bool check_diagonal_win() override;
  bool check_row_win() override;

  public:
  TicTacToe4(): TicTacToe(4) {}
};

#endif