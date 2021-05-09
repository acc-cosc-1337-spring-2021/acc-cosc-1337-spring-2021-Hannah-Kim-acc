 #define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test first player set to X")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");
  REQUIRE(tictactoe->get_player()=="X");
}

TEST_CASE("test first player set to O")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("O");
  REQUIRE(tictactoe->get_player()=="O");
}


TEST_CASE("Test game over if tictactoe3 is selected.") 
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();

  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(2);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(3);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(4);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(6);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(5);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(7);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(9);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(8);
  REQUIRE(tictactoe->game_over()==true);

  REQUIRE(tictactoe->get_winner()=="C");
}


TEST_CASE("Test win by first column 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  tictactoe->mark_board(2);
  tictactoe->mark_board(4);
  tictactoe->mark_board(3);
  tictactoe->mark_board(7);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by second column 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(2);
  tictactoe->mark_board(1);
  tictactoe->mark_board(5);
  tictactoe->mark_board(3);
  tictactoe->mark_board(8);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by third column 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(3);
  tictactoe->mark_board(1);
  tictactoe->mark_board(6);
  tictactoe->mark_board(2);
  tictactoe->mark_board(9);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by first row 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  tictactoe->mark_board(4);
  tictactoe->mark_board(2);
  tictactoe->mark_board(5);
  tictactoe->mark_board(3);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by second row 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(4);
  tictactoe->mark_board(1);
  tictactoe->mark_board(5);
  tictactoe->mark_board(2);
  tictactoe->mark_board(6);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by third row 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(7);
  tictactoe->mark_board(1);
  tictactoe->mark_board(8);
  tictactoe->mark_board(2);
  tictactoe->mark_board(9);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test wih diagonally from top left 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  tictactoe->mark_board(2);
  tictactoe->mark_board(5);
  tictactoe->mark_board(3);
  tictactoe->mark_board(9);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test wih diagonally from bottom left 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");

  tictactoe->mark_board(7);
  tictactoe->mark_board(1);
  tictactoe->mark_board(5);
  tictactoe->mark_board(2);
  tictactoe->mark_board(3);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test TicTacToe manager get winner total function 3")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
  TicTacToeManager manager;

  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(4);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(2);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(5);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(3);
  REQUIRE(tictactoe->game_over());
  REQUIRE(tictactoe->get_winner()=="X");

  manager.save_game(tictactoe);

  tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("O");

  tictactoe->mark_board(1);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(4);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(2);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(5);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(3);
  REQUIRE(tictactoe->game_over());
  REQUIRE(tictactoe->get_winner()=="O");

  manager.save_game(tictactoe);
  tictactoe = make_unique<TicTacToe3>();
  tictactoe->start_game("X");
  tictactoe->mark_board(1);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(2);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(3);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(4);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(6);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(5);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(7);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(9);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(8);
  REQUIRE(tictactoe->game_over());

  REQUIRE(tictactoe->get_winner()=="C");
  manager.save_game(tictactoe);
  
  int x,o,t;
  manager.get_winner_total(x,o,t);
  
  REQUIRE(x==1);
  REQUIRE(o==1); 
  REQUIRE(t==1);

}


TEST_CASE("Test game over if tictactoe4 is selected.") 
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();

  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(2);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(3);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(4);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(6);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(5);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(7);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(8);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(9);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(10);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(12);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(11);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(13);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(14);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(15);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(16);
  REQUIRE(tictactoe->game_over()==true);

  REQUIRE(tictactoe->get_winner()=="C");
}


TEST_CASE("Test win by first column 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  tictactoe->mark_board(2);
  tictactoe->mark_board(5);
  tictactoe->mark_board(3);
  tictactoe->mark_board(9);
  tictactoe->mark_board(4);
  tictactoe->mark_board(13);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by second column 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(2);
  tictactoe->mark_board(1);
  tictactoe->mark_board(6);
  tictactoe->mark_board(3);
  tictactoe->mark_board(10);
  tictactoe->mark_board(4);
  tictactoe->mark_board(14);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by third column 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(3);
  tictactoe->mark_board(1);
  tictactoe->mark_board(7);
  tictactoe->mark_board(2);
  tictactoe->mark_board(11);
  tictactoe->mark_board(4);
  tictactoe->mark_board(15);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by fourth column 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(4);
  tictactoe->mark_board(1);
  tictactoe->mark_board(8);
  tictactoe->mark_board(2);
  tictactoe->mark_board(12);
  tictactoe->mark_board(3);
  tictactoe->mark_board(16);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}


TEST_CASE("Test win by first row 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  tictactoe->mark_board(5);
  tictactoe->mark_board(2);
  tictactoe->mark_board(6);
  tictactoe->mark_board(3);
  tictactoe->mark_board(7);
  tictactoe->mark_board(4);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by second row 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(5);
  tictactoe->mark_board(1);
  tictactoe->mark_board(6);
  tictactoe->mark_board(2);
  tictactoe->mark_board(7);
  tictactoe->mark_board(3);
  tictactoe->mark_board(8);


  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by third row 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(9);
  tictactoe->mark_board(1);
  tictactoe->mark_board(10);
  tictactoe->mark_board(2);
  tictactoe->mark_board(11);
  tictactoe->mark_board(3);
  tictactoe->mark_board(12);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test win by fourth row 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(13);
  tictactoe->mark_board(1);
  tictactoe->mark_board(14);
  tictactoe->mark_board(2);
  tictactoe->mark_board(15);
  tictactoe->mark_board(3);
  tictactoe->mark_board(16);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test wih diagonally from top left 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  tictactoe->mark_board(2);
  tictactoe->mark_board(6);
  tictactoe->mark_board(3);
  tictactoe->mark_board(11);
  tictactoe->mark_board(4);
  tictactoe->mark_board(16);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test wih diagonally from bottom left 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(4);
  tictactoe->mark_board(2);
  tictactoe->mark_board(7);
  tictactoe->mark_board(3);
  tictactoe->mark_board(10);
  tictactoe->mark_board(5);
  tictactoe->mark_board(13);

  REQUIRE(tictactoe->game_over()==true);
  REQUIRE(tictactoe->get_winner()=="X");
}

TEST_CASE("Test TicTacToe manager get winner total function 4")
{
  unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe4>();
  TicTacToeManager manager;

  tictactoe->start_game("X");
  tictactoe->mark_board(13);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(1);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(14);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(2);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(15);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(3);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(16);
  REQUIRE(tictactoe->game_over());

  REQUIRE(tictactoe->get_winner()=="X");

  manager.save_game(tictactoe);

  tictactoe = make_unique<TicTacToe4>();

  tictactoe->start_game("O");
  tictactoe->mark_board(13);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(1);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(14);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(2);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(15);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(3);
  REQUIRE(!tictactoe->game_over());
  tictactoe->mark_board(16);
  REQUIRE(tictactoe->game_over());

  REQUIRE(tictactoe->get_winner()=="O");


  manager.save_game(tictactoe);
  tictactoe = make_unique<TicTacToe4>();
  tictactoe->start_game("X");

  tictactoe->mark_board(1);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(2);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(3);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(4);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(6);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(5);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(7);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(8);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(9);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(10);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(12);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(11);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(13);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(14);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(15);
  REQUIRE(tictactoe->game_over()==false);
  tictactoe->mark_board(16);
  REQUIRE(tictactoe->game_over()==true);

  REQUIRE(tictactoe->get_winner()=="C");
  manager.save_game(tictactoe);
  
  int x,o,t;
  manager.get_winner_total(x,o,t);
  
  REQUIRE(x==1);
  REQUIRE(o==1); 
  REQUIRE(t==1);

}