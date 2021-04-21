#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test first player set to X")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");
  REQUIRE(tictactoe.get_player()=="X");
}

TEST_CASE("test first player set to O")
{
  TicTacToe tictactoe;
  tictactoe.start_game("O");
  REQUIRE(tictactoe.get_player()=="O");
}

TEST_CASE("Test game over if 9 slots are selected.") 
{
  TicTacToe tictactoe;

  tictactoe.start_game("X");

  tictactoe.mark_board(1);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(2);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(3);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(4);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(6);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(5);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(7);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(9);
	REQUIRE(tictactoe.game_over()==false);

  tictactoe.mark_board(8);
	REQUIRE(tictactoe.game_over()==true);

  REQUIRE(tictactoe.get_winner()=="C");
}

TEST_CASE("Test win by first column")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(1);
  tictactoe.mark_board(2);
  tictactoe.mark_board(4);
  tictactoe.mark_board(3);
  tictactoe.mark_board(7);

  REQUIRE(tictactoe.game_over()==true);

}

TEST_CASE("Test win by second column")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(2);
  tictactoe.mark_board(1);
  tictactoe.mark_board(5);
  tictactoe.mark_board(3);
  tictactoe.mark_board(8);

  REQUIRE(tictactoe.game_over()==true);
}

TEST_CASE("Test win by third column")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(3);
  tictactoe.mark_board(1);
  tictactoe.mark_board(6);
  tictactoe.mark_board(2);
  tictactoe.mark_board(9);

  REQUIRE(tictactoe.game_over()==true);
}

TEST_CASE("Test win by first row")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(1);
  tictactoe.mark_board(4);
  tictactoe.mark_board(2);
  tictactoe.mark_board(5);
  tictactoe.mark_board(3);

  REQUIRE(tictactoe.game_over()==true);
}

TEST_CASE("Test win by second row")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(4);
  tictactoe.mark_board(1);
  tictactoe.mark_board(5);
  tictactoe.mark_board(2);
  tictactoe.mark_board(6);

  REQUIRE(tictactoe.game_over()==true);
}

TEST_CASE("Test win by third row")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(7);
  tictactoe.mark_board(1);
  tictactoe.mark_board(8);
  tictactoe.mark_board(2);
  tictactoe.mark_board(9);

  REQUIRE(tictactoe.game_over()==true);
}

TEST_CASE("Test wih diagonally from top left")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(1);
  tictactoe.mark_board(2);
  tictactoe.mark_board(5);
  tictactoe.mark_board(3);
  tictactoe.mark_board(9);

  REQUIRE(tictactoe.game_over()==true);
}

TEST_CASE("Test wih diagonally from bottom left")
{
  TicTacToe tictactoe;
  tictactoe.start_game("X");

  tictactoe.mark_board(7);
  tictactoe.mark_board(1);
  tictactoe.mark_board(5);
  tictactoe.mark_board(2);
  tictactoe.mark_board(3);

  REQUIRE(tictactoe.game_over()==true);
}