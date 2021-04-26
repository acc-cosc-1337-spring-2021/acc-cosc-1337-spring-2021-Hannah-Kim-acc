//h
#include <string>
using std::string;

#include <vector>
using std::vector;


class TicTacToe 
{
  friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
  friend std::istream& operator>>(std::istream& is, TicTacToe& game);

  private:
  //class private data
  vector<string> pegs{9," "};
  string player;
  string winner;

  bool check_board_full()const;
  bool check_column_win();
  bool check_row_win();
  bool check_diagonal_win();
  void clear_board();

  void set_next_player();
  void set_winner();

  public:
  //TicTacToe(): pegs(9," "){};
  bool game_over();
  string get_player()const{return player;};
  //void display_board()const;
  string get_winner()const{return winner;};
  void mark_board(int position);
  void start_game(string first_player);

};