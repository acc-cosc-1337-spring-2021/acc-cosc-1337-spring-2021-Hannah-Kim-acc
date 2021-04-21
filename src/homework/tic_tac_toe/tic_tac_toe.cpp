//cpp
#include "tic_tac_toe.h"
#include <iostream>
using std::cout;


void TicTacToe::clear_board()
{
  for(int i=0;i<9;i++)
  {
    pegs[i] = " ";
  }
}

bool TicTacToe::check_board_full()
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

bool TicTacToe::game_over()
{
  if ((check_board_full()) == true)
  {
    return true;
  }
  else {return false;}
}

void TicTacToe::set_next_player()
{
  if(player == "X")
  {
    player ="O";
  }
  else 
  {
    player = "X";
  }
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
  if(game_over()== true)
  {
    display_board();
    cout<<"Game Over"<<"\n";
  }
  else
  {
    set_next_player();
  }
}

void TicTacToe::display_board()const
{
  for(int i=0;i<9;i+=3)
  {
    cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
  }
}
