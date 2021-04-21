//h
#include <string>
using std::string;

#include <vector>
using std::vector;

class TicTacToe
{
  private:
  //class private data
  string player;
  vector<string> pegs{9," "};
  string winner;

  //functions
  void set_next_player();
  bool check_board_full()const;
  void clear_board();

  bool check_column_win();
  bool check_row_win();
  bool check_diagonal_win();
  void set_winner();

  public:
  //TicTacToe(): pegs(9," "){};

  bool game_over();
  void start_game(string first_player);
  void mark_board(int position);
  string get_player()const{return player;};
  void display_board()const;
  string get_winner()const{return winner;};
};