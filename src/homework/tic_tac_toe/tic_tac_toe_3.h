//h
#ifndef TICTACTOE_3_H
#define TICTACTOE_3_H

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{

  public:
  TicTacToe3(): TicTacToe(3){ }
  
  private: 
  bool check_column_win() override;
  bool check_diagonal_win() override;
  bool check_row_win() override;


};

#endif