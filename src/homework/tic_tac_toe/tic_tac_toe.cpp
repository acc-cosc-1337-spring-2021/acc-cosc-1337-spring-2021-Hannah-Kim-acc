//cpp
#include "tic_tac_toe.h"

#include <iostream>


std::istream& operator>>(std::istream &is, TicTacToe &game)
{
  int position = 1;

  std::cout<<"Enter position from 1 to 9: ";
  is>>position;
  if(position>0 && position<10)
  {
    game.mark_board(position);
  }

  return is;
}

std::ostream& operator<<(std::ostream &out, const TicTacToe &game)
{
  for(int i=0 ;i<9;i+=3)
  {
    out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
  }

  return out;
}


void TicTacToe::clear_board()
{
  for(int i=0;i<9;i++)
  {
    pegs[i] = " ";
  }
}

bool TicTacToe::check_board_full()const
{
  for(int i=0;i<9;i++)
  {
    if (pegs[i] == " ")
    {
      return false;
      break;
    }
  }
  return true;
}

bool TicTacToe::check_column_win()
{
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
  if(check_row_win()==true||check_column_win()==true||check_diagonal_win()==true)
  {
    set_winner();
    return true;
  }
  else if(check_board_full()==true){winner="C";return true;}
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


/*
void TicTacToe::display_board()const
{
  for(int i=0;i<9;i+=3)
  {
    cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
  }
}
*/
