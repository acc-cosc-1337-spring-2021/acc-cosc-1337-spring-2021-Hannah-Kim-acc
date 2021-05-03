//cpp
#include "tic_tac_toe.h"

#include <iostream>
#include <math.h>

std::istream& operator>>(std::istream &is, TicTacToe &game)
{
  int position = 0;
  int board_size = game.pegs.size();
  do {
    std::cout<<"Enter position from 1 to " << board_size << ": ";
    is >> position;
  } while ((position < 1 || position > board_size) && game.is_position_empty(position));

  game.mark_board(position);
  return is;
}

std::ostream& operator<<(std::ostream &out, const TicTacToe &game)
{
  int size = sqrt(game.pegs.size());
  for (int i = 0; i < size * size; i+= size) {
    for (int j = 0; j < size; j++) {
      out << game.pegs[i + j];
      if (j < size - 1) {
        out << "|";
      }
    }
    out << "\n";
  }

  return out;
}

TicTacToe::TicTacToe(int size): pegs(size * size, " ") {}

void TicTacToe::clear_board()
{
  for(int i=0;i<pegs.size();i++)
  {
    pegs[i] = " ";
  }
}

bool TicTacToe::check_board_full()const
{
  for(int i=0;i<pegs.size();i++)
  {
    if (pegs[i] == " ")
    {
      return false;
    }
  }
  return true;
}

bool TicTacToe::check_column_win()
{
  int size = sqrt(pegs.size());
  for (int i = 0; i < size; i++) {
    string peg = pegs[i];
  }
  if(pegs[0]=="X"&&pegs[3]=="X"&&pegs[6]=="X")
  {return true;}
  else if(pegs[0]=="O"&&pegs[3]=="O"&&pegs[6]=="O")
  {return true;}
  else if(pegs[1]=="X"&&pegs[4]=="X"&&pegs[7]=="X")
  {return true;}
  else if(pegs[1]=="O"&&pegs[4]=="O"&&pegs[7]=="O")
  {return true;}
  else if(pegs[2]=="X"&&pegs[5]=="X"&&pegs[8]=="X")
  {return true;}
  else if(pegs[2]=="O"&&pegs[5]=="O"&&pegs[8]=="O")
  {return true;}
  else{return false;}
}

bool TicTacToe::check_row_win()
{
  if(pegs[0]=="X"&&pegs[1]=="X"&&pegs[2]=="X")
  {return true;}
  else if(pegs[0]=="O"&&pegs[1]=="O"&&pegs[2]=="O")
  {return true;}
  else if(pegs[3]=="X"&&pegs[4]=="X"&&pegs[5]=="X")
  {return true;}
  else if(pegs[3]=="O"&&pegs[4]=="O"&&pegs[5]=="O")
  {return true;}
  else if(pegs[6]=="X"&&pegs[7]=="X"&&pegs[8]=="X")
  {return true;}
  else if(pegs[6]=="O"&&pegs[7]=="O"&&pegs[8]=="O")
  {return true;}
  else{return false;}
}

bool TicTacToe::check_diagonal_win()
{
  if(pegs[0]=="X"&&pegs[4]=="X"&&pegs[8]=="X")
  {return true;}
  else if(pegs[0]=="O"&&pegs[4]=="O"&&pegs[8]=="O")
  {return true;}
  else if(pegs[2]=="X"&&pegs[4]=="X"&&pegs[6]=="X")
  {return true;}
  else if(pegs[2]=="O"&&pegs[4]=="O"&&pegs[6]=="O")
  {return true;}
  else{return false;}
}

void TicTacToe::set_winner()
{
  if(player=="X")
  {winner = "X";}
  else {winner="O";}
}


bool TicTacToe::game_over()
{
  if(check_row_win()||check_column_win()||check_diagonal_win())
  {
    set_winner();
    return true;
  }
  else if(check_board_full()) {
    winner="C"; return true;
  }
  else{return false;}
}

void TicTacToe::set_next_player()
{
  if(player == "X")
  {player ="O";}
  else 
  {player = "X";}
}

void TicTacToe::start_game(string first_player)
{
  player = first_player;
  clear_board();
}


void TicTacToe::mark_board(int position)
{
  if (player == "X")
  {
    pegs[position-1]="X";
  }
  else
  {
    pegs[position-1]="O";
  }
  /*if(game_over()== true)
  {
    //display_board();
    cout<<"Game Over"<<"\n";
  }
  else
  {
    set_next_player();
  }*/
  set_next_player();
}

bool TicTacToe::is_position_empty(int position) {
  return pegs[position - 1] == " ";
}


/*
void TicTacToe::display_board()const
{
  for(int i=0;i<9;i+=3)
  {
    cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
  }
}
*/
